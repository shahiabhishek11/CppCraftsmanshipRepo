#include<iostream>
#include<memory>

        class Rectangle
        {
        int l,b;

        public:
                Rectangle(int l, int b)
                {
                    this->l=l;
                    this->b=b;
                }

                int area()
                {
                    return this->l*this->b;
                }
        };

    int main()
    {
        // std::shared_ptr<Rectangle> sptr(new Rectangle(1,3));
        std::shared_ptr<Rectangle>sptr=std::make_shared<Rectangle>(10,20);
        std::cout<<sptr->area()<<" area by ptr1"<<std::endl;
        std::shared_ptr<Rectangle> sptr2;

        sptr2=sptr;

        std::cout<<sptr2->area()<<" area by ptr2"<<std::endl;
        std::cout<<sptr->area()<<" area by ptr1"<<std::endl;


        // std::shared_ptr<int> sptr(new int(10));
        // std::cout<<"\n Derefencing the pointer is "<<*sptr<<std::endl;
        // std::shared_ptr<int> sptr2;
        // sptr2=sptr;
        // std::cout<<"\n Dereferncing the pointer 2 is "<<*sptr2<<std::endl;

        return 0;
    }