#include<iostream>
using namespace std;
int main(){
    char v;
    cout<<"Enter Alphabet";
    cin>>v;
    // if(v == 'a' || v == 'e' ||v == 'i' ||v == 'o' || v== 'u'){
    //     cout<<"Following Alphabet Is A Vowel";
    // }
    // else{
    //     cout<<"Not A Vowel";
    // }
    switch (v)
    {
    case 'a':
        cout<<"It is vowel";
        break;
    case 'e':
        cout<<"It is vowel";
        break;
    case 'i':
        cout<<"It is vowel";
        break;
    case 'o':
        cout<<"It is vowel";
        break;
    
    default:
    cout<<"Not a vowel";
        break;
    }

    return 0;
}