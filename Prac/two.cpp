#include<iostream>
using namespace std;
int main(){


// for(int i=0;i<=5;i++){
//     cout<<" *****  "<<" &&&&& "<<" |||||| "<<endl;
// }
int month,day,tot;
int arr[4]={30,31,30,31};
cout<<"Enter No Of months";
cin>>month;
cout<<"Enter no of days";
cin>>day;
tot=day;
for(int i=0;i<month - 1;i++){
  tot=tot + arr[i];
}
cout<<tot;
return 0;

}