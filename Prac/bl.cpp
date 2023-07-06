#include<iostream>
using namespace std;
// void mark(int e,int u,int m,int t,int o, float p);
void sw(int x,int y, int z);
int main(){
//     int min,max;
// int arr[2][3][1];

// for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
//         for(int k=0;k<1;k++){
//             cout<<"Enter Vals "<<i<<" "<<j<<" "<<k;
//             cin>>arr[i][j][k];
//         }
//     }
// }
// min=max=arr[0][0][0];
// for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
//         for(int k=0;k<1;k++){
//            if(arr[i][j][k]>max){
//             max=arr[i][j][k];
//            }
//           else if(arr[i][j][k]<min){
//            min= arr[i][j][k];
//            }
         
//         }
//     }
// }
// cout<<"min"<<min<<"Max"<<max;
// int eng,urd,mat,tot,obt;
// float per;
// cout<<"Enter Eng marks";cin>>eng;
// cout<<"ENter Urd Marks";cin>>urd;
// cout<<"ENter Mat marks";cin>>mat;
// mark(eng,urd,mat,tot,obt,per);


// return 0;
// }
// void mark(int e,int u,int m,int t,int o, float p){
//     t=300;
//    o=e+u+m;
//    p=(o)*100/t;
//    if(p<=90 && p>=80){
//     cout<<"A";
//    }
//    else if(p<80 && p>=70){
//     cout<<"b";
//    }
//    else if(p<70 && p>=60){
//     cout<<"c";
//    }
//    else if(p<60 && p>=50){
//     cout<<"d";
//    }
//    else if(p<50 && p>=40){
//     cout<<"e";
//    }
//    else{
//     cout<<"Fail";
//    }
int a,b,c;
a=10;
b=20;
c=30;
sw(a,b,c);

}
void sw(int x,int y, int z){
    x=y;
    y=z;
    z=x;
 
cout<<x<<y<<z;
}
