#include<iostream>
#include<memory>




    // int main()
    // {
    //     std::unique_ptr<int> uptr1(new int(100));
    //     std::unique_ptr<int> uptr2(new int(200));

    //     std::unique_ptr<int>uptr3;

    //     std::cout<<"\n 1st ptr "<<*uptr1<<"\n 2nd ptr "<<*uptr2;

    //     uptr3=std::move(uptr1);
    //     uptr1=nullptr;

    //     std::cout<<"\n 1st ptr "<<&uptr1<<"\n 3rd ptr "<<*uptr3;

    //     return 0;
    // }


    class Rectangle
    {
        public:
        Rectangle(int l, int b)
        {
            this->l=l;
            this->b=b;
        }

        int area()
        {
            return (this->l * this->b);
        }


        private:
        int l,b;
    };



        int main()
        {
            std::unique_ptr<Rectangle> uptr(new Rectangle(10,20));
            std::cout<<"\n Area is "<<uptr->area();
            return 0;
        }