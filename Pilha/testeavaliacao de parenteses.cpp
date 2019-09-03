#include <iostream>
#include <cstring>
using namespace std;
int expressaoCorreta(char s[]);
int main()
{
  char p1[]={"((()))"}; 
  char p2[]={"(()))"};    
  if(expressaoCorreta(p1)==1)
     cout<<"\n"<<p1<<" Esta Correta\n";
  else
    cout<<"\n"<<p1<<" Nao esta Correta\n";  
    if(expressaoCorreta(p2)==1)
     cout<<"\n"<<p2<<" Esta Correta\n";
  else
    cout<<"\n"<<p2<<" Nao esta Correta\n";      
  system("pause");
}
