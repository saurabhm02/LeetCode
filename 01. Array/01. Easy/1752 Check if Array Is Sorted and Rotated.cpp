// 1752. Check if Array Is Sorted and Rotated
// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

#include<iostream>
#include<vector>

using namespace std;
#define ll long long
// Approach: Brute Force
// The idea is pretty simple here, We will start with the element at the 0th index, and will compare it with all of its future elements that are present in the array.
// If the picked element is smaller than or equal to all of its future values then we will move to the next Index/element until the whole array is traversed.
// If any of the picked elements is greater than its future elements, Then simply we will return False.
// If the size of the array is Zero or One i.e ( N = 0 or N = 1 ) or the entire array is traversed successfully then we will simply return True.

bool isSorted(vector<int> &nums) {
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[j] < nums[i])
        return false;
    }
  }

  return true;
}

// Approach: Optimal (Single traversal)
// As we know that for a sorted array the previous of every element is smaller than or equal to its current element.
// So, Through this, we can conclude that if the previous element is smaller than or equal to the current element then. Then we can say that the two elements are sorted. If the condition is true for the entire array then the array is sorted.
// We will check every element with its previous element if the previous element is smaller than or equal to the current element then we will move to the next index.
// If the whole array is traversed successfully or the size of the given array is zero or one (i.e N = 0 or N = 1). Then we will return True else return False.

bool check(vector<int> &nums) {
	for(int i=1; i<nums.size(); i++){
        if(nums[i] >= nums[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}

int main()
{
	int size;
    cin >> size;
    vector<int> Arr;

    for (int i = 0; i < size; i++) {
        int element;
        cin >> element;
        Arr.push_back(element);
    }

    cout<<check(Arr);
    return 0;
}
