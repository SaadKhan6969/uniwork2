#include<iostream>
using namespace std;
void mk(int e,int u,int m,int t,int o,int p);
int main(){
    int eng,urd,mat,tot,obt,pr;
    cout<<"eng marks enter";
    cin>>eng;
    cout<<"urd marks enter";
    cin>>urd;
    cout<<"mat marks enter";
    cin>>mat;
    mk(eng,urd,mat,tot,obt,pr);
    return 0;
}
void mk(int e,int u,int m,int t,int o,int p){
t=300;
o=e+u+m;
p=(o)*100/t;
cout<<"Eng marks are: "<<e<<endl;
cout<<"Eng urd are: "<<u<<endl;
cout<<"Eng math are: "<<m<<endl;

if(p<90 && p>= 80){
cout<<"A";
}
else if(p<80 && p>= 70){
cout<<"b";
}
else if(p<70 && p>= 60){
cout<<"c";
}
else if(p<60 && p>= 50){
cout<<"d";
}
else if(p<70 && p>= 60){
cout<<"c";
}
else{
cout<<"FAlL";
}


}