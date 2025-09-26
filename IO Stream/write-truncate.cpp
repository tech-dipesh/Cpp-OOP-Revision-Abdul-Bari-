#include <bits/stdc++.h>

using namespace std;
int main(){
    ofstream trucnatefile("Truncatefile.txt", ios::trunc);
    trucnatefile<<"It will remove the eany existing value content and write from start."<<endl;
    trucnatefile<<9283<<endl;
    trucnatefile.close();
return 0;
}