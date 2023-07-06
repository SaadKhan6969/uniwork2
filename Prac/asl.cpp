#include<iostream>
using namespace std;
int main(){
    int min,max;
    int arr[2][3][1];
  
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<1;k++){
                cout<<"Enter Values Of array"<<i<<" "<<j<< " " <<k<<" ";
              cin>>arr[i][j][k];
            }
        }
    }
    
  max=min=arr[0][0][0];
  for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<1;k++){
                if(arr[i][j][k]>max){
        max=arr[i][j][k];
               }
             else   if(arr[i][j][k]<min){
                min=arr[i][j][k];
               }
               
            }
        }
    }
cout<<"MIn Val Is: "<<min<<"\n"<<"Max val is: "<<max;

return 0;
}