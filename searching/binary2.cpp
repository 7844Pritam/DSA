
#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{

    vector<int> vec;
    int l = -1, r = -1;
    int lw = 0, hg = nums.size() - 1;

    // 1,2,3,4,5,6,7,7

    while (lw <= hg)
    {

        int mid = (hg + lw) / 2;
        cout << "Mid = " << mid << " "<< "and mid element is = " << nums[mid] << endl;

        if (nums[mid] == target)
        {

            l = mid;
            hg = mid - 1;
            cout<<"left = "<<l<<" "<<" and index is = "<< nums[l]<<endl;
        }
        else if (nums[mid] < target)
        {
            lw = mid + 1;
        }
        else
        {
            hg = mid - 1;
        }
    }

    // cout<<"l = "<<l<<endl;

    lw = 0, hg = nums.size() - 1;
    while (lw <= hg)
    {

        int mid = (hg + lw) / 2;
        if (nums[mid] == target)
        {

            r = mid;
            lw = mid + 1;
            cout<<"right = "<<r<<" and index is = " <<nums[r]<<endl;
        }
        else if (nums[mid] < target)
        {

            lw = mid + 1;
        }
        else
        {
            hg = mid - 1;
        }
    }

    
    // cout<<"r = "<<r<<endl;

    vec.push_back(l);
    vec.push_back(r);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
}

int main()
{
    // Input: nums = [5,7,7,8,8,10], target = 8
    vector<int> vec = {5,7,7,8,8,10};

    searchRange(vec, 8);
}
