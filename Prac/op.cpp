#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<":Enter Value starting Greater Than 10: ";
    cin>>a;
    cout<<":Enter Value ending less Than 50: ";
  cin>>b;
  for(int i=a;i<b;i++){
    if( i%2==0 || i%3==0 || i%5==0 ||i%7==0  ){
      cout<<i<<endl;
    }
  }
return 0;


}