#include<iostream>
using namespace std;

int segitiga(int a, int b){
    int c;
   c = (a * b)/2;
     cout<<"Luas Segitiga Adalah : "<<c<<endl;
 return c;

}

int main (){
    int alas, tinggi, luas;
 cout<<"Inputkan alas segitiga : ";
 cin>>alas;
 cout<<"Inputkan tinggi segita : ";
 cin>>tinggi;
 segitiga(alas,tinggi);
 

}