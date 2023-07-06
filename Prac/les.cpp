#include<iostream>
using namespace std;
int main(){
    int eng,math,phy,comp,ict,tot,ov;
    tot=500;
    ov=eng+math+phy+comp+ict;
    int per;


    cout<<"Enter MArks Of maths"<<endl;
    cin>>math;
    cout<<"Enter MArks Of eng"<<endl;
    cin>>eng;
    cout<<"Enter MArks Of phy"<<endl;
    cin>> phy;
    cout<<"Enter MArks Of comp"<<endl;
    cin>>comp;
    cout<<"Enter MArks Of ict"<<endl;
    cin>> ict;
   cout<<"MAths Marks Are: "<<math<<endl;
   cout<<"Eng  Marks Are: "<<eng<<endl ;
   cout<<"phy  Marks Are: "<<phy<<endl ;
   cout<<"comp  Marks Are: "<<comp<<endl ;
   cout<<"ict  Marks Are: "<<ict <<endl;
   per=(ov/tot)*100;
   cout<<"Percentage IS:  "<<per;
   return 0;
    

}