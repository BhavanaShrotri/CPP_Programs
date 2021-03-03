/******************************************************************************

                             Functon Template

*******************************************************************************/

#include <iostream>

using namespace std;

template<typename T>

T minmax(T a,T b)
{
    if(a>b)
        return a;
    else
        return b;
    
}

int main()
{
    cout<<minmax<int>(5,10)<<"\n";
    cout<<minmax<float>(20.3,10.4);
    

    return 0;
}
