#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	void merge(vector<int> nums1, int m, vector<int> nums2, int n) {
		int sum = m + n-1;
		int i = m-1, j = n-1;

		while (i >= 0 && j >= 0)
		{
			if (nums1[i] > nums2[j])
			{
				nums1[sum] = nums1[i];
				sum--;
				i--;
			}
			else
			{
				nums1[sum] = nums2[j];
				sum--;
				j--;
			}
		}

		while (j >= 0)
		{
			nums1[sum] = nums2[j];
			sum--;
			j--;
		}
		
	}
};

void main()
{
	Solution s; 
	s.merge({ 1, 2, 5,0,0 }, 3, { 3, 4 }, 2);
}
