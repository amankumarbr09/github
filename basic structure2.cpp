#include<stdio.h>
#include<iostream>
using namespace std;


struct card{
int face ;
int shape;
int colour;

};

int main(){
struct card deck[]={{1,2,3},{2,3,1},{2,1,2}};
cout <<" face: "<<deck[1].face<<endl;  
cout<<"shape: "<<deck[3].face<<endl;   //here is show garbage value because deck address declare only 2 //
return 0;
}

