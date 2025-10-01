#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
   class Village{
    int homeno;
    float distance;
    public:
    Village(int homeno=99, float distance=5){
      this->homeno=homeno;
      this->distance=distance;
    }
    float totalDistance(){
      int sum=(homeno)/(distance*2);
      return sum;
    }

   };
  
int main(){
  // if i try to allocate memory to another it will not create an space on heap first it rmoved and give space to new constructor.
  unique_ptr<Village>ptr(new Village());
  cout<<ptr->totalDistance()<<endl;
  
  unique_ptr<Village>ptr1(new Village(35, 7.5));
  cout<<ptr1->totalDistance()<<endl;
  
  cout<<"Now the shared pointer."<<endl;
  // now only shared ptr where can have multiple pointer, this also can track the total time it created.
  shared_ptr<Village>sh(new Village());
  cout<<sh->totalDistance()<<endl;
  cout<<sh.use_count()<<endl;
  
  // now weak pointer where it can't track the total count.
  shared_ptr<Village>wp(new Village());
  cout<<wp->totalDistance()<<endl;
return 0;
}