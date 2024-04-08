#include<bits/stdc++.h>
#include <iostream>
using namespace std;



int main()
{
 int maxi = INT_MIN;
  int maxi2 = INT_MIN;
  for (int i = 0; i < n; i++) {

    if (a[i] > maxi) {
      maxi = a[i];
    }
  }
  maxi2 = maxi;

  for (int i = 0; i < n; i++) {

    if (a[i] > maxi && maxi2 != maxi) {
      maxi = a[i];
    }
  }
  return maxi;
 
}