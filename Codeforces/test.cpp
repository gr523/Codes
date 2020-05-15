#include <iostream>
using namespace std;
int main(){
   freopen("Output.txt","w",stdout);
   int a,b;
   a=3,b=5;
   int *ch,*batt;
   if(a<b)
      ch=&a,batt=&b;
   else
      ch=&b,batt=&a;
   (*ch)--;
   cout<<a<<" "<<b;
}