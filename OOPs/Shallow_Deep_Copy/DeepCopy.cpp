#include<iostream>


class A
{
     public:
     
     int *data;
     A(int a)
     {
        data= new int(a);
     }

     A(const A &obj)
     {
        data=new int(*obj.data);
     }

     void display()
     {
        std::cout<<"\n Value of data is "<<*data<<std::endl;
     }

     ~A()
     {
        delete data;
     }
};


    int main()
    {
        A obj1(10);
        A obj2(obj1);

        obj1.display();
        obj2.display();

        *obj2.data=20;

        obj1.display();
        obj2.display();
        return 0;
    }