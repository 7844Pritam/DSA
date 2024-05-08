
#include<bits/stdc++.h>
using namespace std;

pair<double, double> QuRoot(double a, double b, double c)
{
    double check = (b * b - 4 * a * c);
    double rootVal = sqrt((b * b - 4 * a * c));
    double root1 = (-b + rootVal) / (2 * a);
    double root2 = (-b - rootVal) / (2 * a);
    if(check<0)
    {
      cout << "It is giving a imagin root"<<endl;
        return make_pair(root1, root2);
     }
    else{

    return make_pair(root1, root2);
    }
   

}

int main()
{
  cout<<"This is the practice of to find root of quadratic equation"<<endl;
  double a = 3;
  double b = 4;
  double c = 2;

  auto result = QuRoot(a, b, c);

cout << result.first<<endl;
  cout << result.second;    
  
  
  return 0;
}