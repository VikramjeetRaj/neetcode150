#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        int h = 0;
        int l = n1;

        while(l <= h) {
            
        }

        return 0;
    }
};

int main() {
    vector<int> arr1{ 10, 20, 30 };
    vector<int> arr2{ 10, 20, 30, 40 };
    Solution sol;
    cout << sol.findMedianSortedArrays(arr1, arr2);
}