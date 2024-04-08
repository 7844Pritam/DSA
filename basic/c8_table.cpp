#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number to get a table of that number:";
    cin>>n;

   for(int count = 1; count <= 10; count = count + 1){
      cout<<count*n<<endl;
   }
    return 0;
}