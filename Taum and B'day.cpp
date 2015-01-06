#include<iostream>
#include <algorithm>    
#include <vector>

using namespace std;
 
int main()
{
    long long tes , b , w , x , y, z ,nonconv , btow , wtob ,  i=0 , temp;
    cin>>tes;
    temp=tes;
    long long ans[tes] ;
    while(temp-->0)
    {
        cin>>b;
        cin>>w;
        cin>>x;
        cin>>y;
        cin>>z;
        
        nonconv= b*x + w*y ;
        btow = (b+w)*y + b*z;
        wtob = (w+b)*x + w*z;
        
        long long myints[] = {nonconv,btow,wtob};
  
        ans[i] =  *std::min_element(myints,myints+3) ;
        cout<<"stored" <<ans[i]<< "\n";
        i++;
        
    } 
    for (i=0 ; i<tes; i++)
        cout<<ans[i]<<"\n";
      
    return 0;
}
