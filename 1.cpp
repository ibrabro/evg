#include <iostream>
using namespace std;

unsigned int concatenate(unsigned x, unsigned y) {
    unsigned pow = 10;
    while(y >= pow)
        pow *= 10;
    return x * pow + y;        
}
int toSeven(int arg)
{
    int reversedNumber = 0, remainder;
    int res = -1;
    while(arg != 0)
    {
        if(res < 0)
        {
            res = arg % 7;
        }
        arg /= 7;
        res = concatenate(res, arg % 7);
    }

    while(res != 0)
    {
        remainder = res % 10;
        reversedNumber = reversedNumber*10 + remainder;
        res /= 10;
    }

    return reversedNumber;
}
int main()
{
    char c;
    while(cin>>c)
    {
        if(toSeven(c) % 2 == 0)
        {
            cout<<"Chet!"<<endl;;
            cout<<"Kod = "<<c<<endl;;
            cout<<"Seven = "<<toSeven(c)<<endl;
        }
        else
        {
            cout<<"Ne Chet!"<<endl;;
            cout<<"Kod = "<<c<<endl;;
            cout<<"Seven = "<<toSeven(c)<<endl;
        }
    }
}