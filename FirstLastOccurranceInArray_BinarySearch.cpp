#include <iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int>& arr, int n, int k){
    int start=0,end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
    	if(arr[mid]==k)    {
            ans=mid;
            end=mid-1;
        }
        else if(k<arr[mid]){
            end=mid-1;
        }
        else if(k>arr[mid]){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastOccurence(vector<int>& arr, int n, int k){
    int start=0,end=n-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end){
    	if(arr[mid]==k)    {
            ans=mid;
            start=mid+1;
        }
        else if(k<arr[mid]){
            end=mid-1;
        }
        else if(k>arr[mid]){
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int>p;
    p.first=firstOccurence(arr, n, k);
    p.second=lastOccurence(arr, n, k);
    return p;
}

int main() {
  vector<int> arr={1,2,3,3,5};
  int key=3;
  int n=arr.size();
  pair<int, int> p=firstAndLastPosition(arr, n, key);
  cout <<"\nFist Occurrance of "<<key <<" is at Index : "<<p.first;
  cout <<"\nLast Occurrance of "<<key <<" is at Index : "<<p.second;
  return 0;
}
