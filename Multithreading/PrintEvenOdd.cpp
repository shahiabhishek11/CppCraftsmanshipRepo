#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>

const int MAX_VALUE=100;

std::mutex m;
std::condition_variable cv;
bool isOdd=true;
int counter=0;


void printodd()
{
    while(true)
    {
        std::unique_lock<std::mutex>lock(m);
        cv.wait(lock,[]{ return isOdd;});

        if(counter==MAX_VALUE)
        {
            break;
            cv.notify_all();
        }

        counter++;
        std::cout<<"\n Odd number "<<counter<<std::endl;
        isOdd=false;
        cv.notify_all();
    }

}


void printeven()
{
    while(true)
    {
        std::unique_lock<std::mutex>lock(m);
        cv.wait(lock,[]{return !isOdd;});

        if(counter==MAX_VALUE)
        {
            break;
            cv.notify_all();
        }

        counter++;
        std::cout<<"\n Even Number is "<<counter<<std::endl;
        isOdd=true;
        cv.notify_all();
    }

}








int main()
{
    std::thread th1(printodd);
    std::thread th2(printeven);

    th1.join();
    th2.join();
}