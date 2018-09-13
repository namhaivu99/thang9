#include<bits/stdc++.h>
using namespace std;
struct Point{
    int x;
    int y;

  };
struct Line{
    Point A;
    Point B;
};
int main()
{
    Line a;
    Line b;
    int x1,x2,x3,x4,y1,y2,y3,y4;
   cin>>x1>>y1>>x2>>y2;
   //>>x3>>y3>>x4>>y4;
   a.A.x=x1;
   a.A.y=y1;

   a.B.x=x2;
   a.B.y=y2;

   b.A.x=x3;
   b.A.y=y3;

   b.B.x=x4;
   b.B.y=y4;
   int a1=(a.A.y-a.B.y)/(a.A.x-a.B.x);
   int b1=(a.A.y-a1*a.A.x);
   cout<<a1<<" "<<b1;

}
