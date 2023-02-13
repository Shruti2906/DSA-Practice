#include <iostream>
#include <vector>
using namespace std;
int main() {

  vector <int> arr{1, 2, 3, 3, 4};
  vector<int> brr{3, 4, 5};
  vector<int>ans;

  for(int i=0; i<arr.size(); i++){
    for(int j=0; j<brr.size(); j++){
      if(arr[i]==brr[j]){
          ans.push_back(arr[i]);
          //brr[j] = -1;  //mark the element when same ele found set it as -1
          //brr[j] = INT_MIN;  //mark the element when same ele found set it as INT_MIN if array contains -ve numbers as well
          break;
      }
    }
  }

  cout<<"\nIntersection is : "<<endl;
  for(int i=0; i<ans.size(); i++){
    cout<<"\t"<<ans[i];
  }
  
}
