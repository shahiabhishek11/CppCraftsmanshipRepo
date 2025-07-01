#include<iostream>
#include<memory>

class B;


class A
{
    public:
    std::shared_ptr<B>b_ptr;
    A()
    {
        std::cout<<"\n constructor of A";
    }

    ~A()
    {
        std::cout<<"\n Destructor of A";
    }
};

class B
{
    public:
    std::shared_ptr<A> a_ptr;

    B()
    {
        std::cout<<"\n Constructor of B";
    }

    ~B()
    {
        std::cout<<"\n Destructor of B";
    }

};



int main()
{
    std::shared_ptr<A> a=std::make_shared<A>();
    std::shared_ptr<B> b=std::make_shared<B>();

    // a->b_ptr=b;
    // b->a_ptr=a;

}