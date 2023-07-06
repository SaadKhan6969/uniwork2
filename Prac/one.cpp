#include<iostream>
using namespace std;
// void cal(int a,int b,char c);
int main(){
    int p,q;
    char s;
    cout<<"Enter THe Equation: "<<endl;
  cin>>p;
  cin>>s;
  cin>>q;

  cal(p,q,s);
return 0;
}
void cal(int a,int b,char c){
    if(c == '+'){
        cout<<a<<" + "<<b<<" =  "<<a+b;
    }else{
        cout<<"Sorry Could Not Calculate";
    }
}
