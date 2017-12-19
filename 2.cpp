#include <iostream>
#include <cmath>

using namespace std;

struct pointCor                  //Если вдруг пригодятся
{
    int x;
    int y;
};
 
double PifFunc( pointCor p1, pointCor p2 )
{
    return sqrt( (p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y) );
}
 
int main()
{
    double nP = 0;
    int n = 0;
    cout<<"Enter number of points:";
    cin>>n;
    pointCor *points = new pointCor[n];

    for(int i = 0;i < n; i++)
    {
        cout<<"Enter x: ";
        cin>>points[i].x;
        cout<<"Enter y: ";
        cin>>points[i].y;
        cout<<endl<<endl;
    }




    // points[0].x = 2;
    // points[0].y = 3;
    // points[1].x = 2;
    // points[1].y = 8;
    // points[2].x = 9;
    // points[2].y = 11;
    // points[3].x = 11;
    // points[3].y = 8;
    // points[4].x = 9;
    // points[4].y = 4;
    
    double result = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            nP = PifFunc(points[i], points[j]);
            result = (result < nP) ? nP : result;
        }
    cout << "max = " << result << endl;
    return 0;
}