#include<iostream>
#include<vector>

using namespace std;
#define ll long long

int peakIndexInMountainArray(vector<int>& arr) {
    int s = 0;
    int e =  arr.size()-1;
    while (s < e){
    	int mid = s + (e - s) / 2;
    	if(arr[mid] < arr[mid + 1]){ // it is the condition where  we are in left side of the peak element bcoz in left side of mountain array we always find smallest element 
    		s = mid + 1;
    	}
    	else{
    		e = mid; // here we do e = mid instead of e = mid-1 bcoze if the mid = peak element then we will lost the peak element bcoz of e = mid - 1
            // and boz of e = mid so we have run the loop s < e instead of s <= e otherwise we will will infinite loop
    	}
    } 
    return s; 
}
int main()
{
	int size;
	cin>>size;
	vector<int> arr(size);
	for(int i=0; i< size; i++){
		cin >> arr[i];
	}
	cout<<peakIndexInMountainArray(arr);
    return 0;
}