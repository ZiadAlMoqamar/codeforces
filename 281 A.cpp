#include <iostream>
#include <string>
using namespace std;
int main ()
{
string s;
cin>>s;
if (s[0]>=  'A' && s[0]<= 'Z')
 {cout<<s;
 return 0;}
 else 
 {
s[0]= s[0]-32;
cout<<s;
 }
return 0;
}
