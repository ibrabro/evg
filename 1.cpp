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
    if(arg <= 7)
        return arg;
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
    char c, d = 0;
    cout<<"Enter char:";
    while(cin>>c)
    {
        if(('0' <= c && c <= '9') || ('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
        {
            c = ('0' <= c && c <= '9') ? c - '0' : c;
            if(toSeven(c) % 2 == 0)
            {
                cout<<"Chet!"<<endl;;
                cout<<"Kod = "<<(int)c<<endl;;
                cout<<"Seven = "<<toSeven(c)<<endl;
            }
            else
            {
                cout<<"Ne Chet!"<<endl;;
                cout<<"Kod = "<<(int)c<<endl;;
                cout<<"Seven = "<<toSeven(c)<<endl;
            }
            cout<<endl;
        }
        cout<<"Enter char:";
    }
}