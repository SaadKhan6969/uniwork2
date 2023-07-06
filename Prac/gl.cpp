#include<iostream>
using namespace std;
// void num(int a,int b,char c);
int main(){
    // int st,end;
    // cout<<"ENter Strting nd Ending No";
    // cin>>st>>end;
    // for(int i=st;i<end;i++){
    //     if(i%2==0 || i%3==0 ||i%5==0 ||i%7==0){
    //         continue;
    //     }
    //     else{
    //         cout<<i<<" ";
    //     }

//     // }
//     int month,days,tot;
//     int arr[4]={30,31,30,31};
//     cout<<"Enter Days";cin>>days;
//     cout<<"Enter month";cin>>month;
//  tot=days;g
//  for(int i=0;i<month-1;i++){
//     tot=tot+arr[i];
//  }
// cout<<"You have spent "<<tot<<" gDays";

// for(int i=0; i<5;i++){
//     for(int j=0;j<5;j++){
//         cout<<"SMIU";
//     }
//     cout<<" "<<endl;
// }
// int q,w;
// char e;
 
//  cout<<"ENter No 1 ";cin>>q;
//  cout<<"Enter Operator";cin>>e;
//  cout<<"Enter no 2";cin>>w;
// num(q,w,e);

//     return 0;
// }
// void num(int a , int b, char c){
    
//     if(c == '+'){
//         cout<<a+b;
//     }
//     else if(c == '-'){
//         cout<<a-b;
//     }
//     else if(c == '*'){
//         cout<<a*b;
//     }
//     else if(c == '/'){
//         cout<<a/b;
//     }
//     else{
//         cout<<"Wrong Equ";
//     }
int min,max;
int arr[2][3][1];

for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        for(int k=0;k<1;k++){
            cout<<"Enter Vals "<<i<<" "<<j<<" "<<k;
            cin>>arr[i][j][k];
        }
    }
}
min=max=arr[0][0][0];
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        for(int k=0;k<1;k++){
           if(arr[i][j][k]>max){
            arr[i][j][k]=max;
           }
           if(arr[i][j][k]<min){
            arr[i][j][k]<min;
           }
         
        }
    }
}
cout<<"min"<<min<<"Max"<<max;
return 0;
}

