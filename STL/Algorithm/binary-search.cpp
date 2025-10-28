#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
   int binarySearch(vector<int>&vect, int val){
      return binary_search(vect.begin(), vect.end(), val);
    }
    
    //  first element will awasy be the greater than the value
    auto lowerBound(vector<int>&vect, int val){
     return lower_bound(vect.begin(), vect.end(), val);
    }
    
    //  same like lower bound but only > not =>
    auto upperBound(vector<int>&vect, int val){
     return upper_bound(vect.begin(), vect.end(), val);
    }
    //  sum of lower and upperBound
    auto sumUpperLower(vector<int>&vect, int val){
     return equal_range(vect.begin(), vect.end(), val);
   }

// Only on sorted:
int main(){
   vector<int>li={1, 2, 5, 9, 10, 14, 18, 21, 25, 29, 30, 30, 35, 50};
   int value=14;
   cout<<binarySearch(li, value)<<endl;
   // need to dereference it.
   auto lowbound=lowerBound(li, value);
   cout<<*lowbound<<endl;
   auto uppbound=upperBound(li, value);
   cout<<*uppbound<<endl;

   auto lowupval=5;
   auto sumupplow=sumUpperLower(li, lowupval);
   cout<<*sumupplow.second<<" "<<*sumupplow.second<<endl;
return 0;
}
