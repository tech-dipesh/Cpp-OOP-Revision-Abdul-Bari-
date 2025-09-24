#include <iostream>
using namespace std;
    // primary server failed failed server failed, and also backup server failed.
    string PrimaryServer(int val=0){
        if(val==0) throw "Primary Server is failed.";
        else return "Primary server is working.";
    }
    string SecondaryServer(int second=-19){
        if(second<1) throw "Secondary server is also failed.";
         return "Thanks backupserver helped us.";
    }
    string BackUpServer(int back){
        if(!back) throw "All of our hope is failing.";
        else return "Last option working now.";
    }
int main(){
  try{
    // string prime=PrimaryServer(9);
    string prime=PrimaryServer(-0);
    cout<<prime<<endl;
  }
  catch(int err){
    cout<<"Integar error.";
  }
  catch(const char *err){
    try{
      string second=SecondaryServer(9);
      cout<<second<<endl;
        try{
            string last=BackUpServer(10);
            cout<<last<<endl;
        }
        catch(const char *lasterr){
          cout<<"it's a backup"<<lasterr;
        }
    }
    catch(int e){
        cout<<"Mainly the secondary error.";
    
  }
  catch(...){
    cout<<"unkwon error.";
  }
}
return 0;
}