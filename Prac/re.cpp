#include<iostream>
using namespace std;
int main(){
    int min,max;
    int arr[2][4]={{
        1,2,3,4
    },{
        10,20,30,30
    }};
    min=max=arr[0][0];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            };
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
   cout<<"MAx: "<<max<<"MIN: "<<min;
   return 0;
   
   }










// int main(){
//     int arr[2][3];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cout<<"enter val";
//             cin>>arr[i][j];
//         }
//     }
//     cout<<arr;
//     return 0;
// }