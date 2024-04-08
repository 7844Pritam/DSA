#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number to get a sum up to that number:";
    cin>>n;

    int count = (n*(n+1))/2;
//    for(int count = 0; count <= n; count = count + 1){
    
    // count = 2*count + 1;
      cout<<count<<endl;
//    }
    return 0;
}