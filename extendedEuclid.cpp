#include<bits/stdc++.h>
using namespace std;
class Triplet{
    public:
    int x;
    int y;
    int gcd;
};
Triplet extendedEuclid(int a,int b)
{
    //Base Case (GCD)
    if(b==0)
    {
        Triplet ans;
        ans.gcd=a;
        ans.x=1;
        ans.y=0;
        return ans;
    }
 //Extended Euclid
 Triplet smallAns=extendedEuclid(b,a%b);
  Triplet ans;
  ans.x=smallAns.y;
  ans.y=smallAns.x-(a/b)*smallAns.y;
  ans.gcd=smallAns.gcd;
  return ans;

}
int main()
{
    Triplet t;
    
    t=extendedEuclid(15,10);
    cout<<t.gcd<<" "<<t.x<<" "<<t.y<<endl;

}
