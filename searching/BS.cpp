#include<bits/stdc++.h>
using namespace std;


int res(vector<int>&arr,int x, int n)
{ 

    if(n==0) return 0;
    
	int low=0;
	int high=n-1;
	int flag=0;
    int pos=-1;

    while (low <= high) {
    
	int mid=low+(high-low)/2;

        if (arr[mid] == x) {

			flag=1;
			pos=mid;
			break;
        }

        else if (arr[mid] < x) {
        low=mid+1;
        } 
		
		else {
			high=mid-1;
        }
    }

    if (flag == 1) {

		int a=arr[pos];

		int i=pos;

                while (i >= 0 && arr[pos] == arr[i-1]) 
				{
					i--;
                }

				return i;
    } else {

		if(arr[n-1] < x )
		{
			return n;
        } 
		else if(arr[0]>x)
		{
               return 0;
        }
    }

	return 0;


}


int main()
{
    

    vector<int>temp={};
    int x=7;
    int n=temp.size();
    cout<<res(temp,x,n);

    return 0;


}