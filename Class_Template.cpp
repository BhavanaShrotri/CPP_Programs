/******************************************************************************

                               Class Template

*******************************************************************************/

#include <iostream>

using namespace std;

template<typename T>

class Demo
{
    T x;
    T y;
    public:
       Demo(T a,T b)
       {
           x=a;
           y=b;
       }
       
       T minmax()
       {
           if(x>y)
           {
               return x;
           }
           else
           {
               return y;
           }
       }
};

int main()
{
    Demo<int>obj1(3,5);
    cout<<obj1.minmax()<<"\n";
    Demo<float>obj2(20.1,20.6);
    cout<<obj2.minmax();
    

    return 0;
}
