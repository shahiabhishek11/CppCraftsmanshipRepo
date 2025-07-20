#include<iostream>

class A
{
    public:
    int *data;

    A(int a)
    {
        data=new int(a);
    }

    void display()
    {
        std::cout<<"\n Value of A is "<<*data;
    }

    ~A()
    {
        delete data;
    }
};






int main()
{
    A a1(10);
    A a2=a1;
    a1.display();
    a2.display();
    *a2.data=20;
    a1.display();
    a2.display();

    // Destructor of both will try to free same memory → crash

    return 0;
}