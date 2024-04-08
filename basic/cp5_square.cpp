#include<iostream>
using namespace std;

int main(){
 
 int n;
 cout<<"Enter a number to find square up to that number:";
 cin>>n;


   for(int count = 1; count <= n; count = count + 1){
      cout<<count*count<<endl;
   }
    return 0;
}