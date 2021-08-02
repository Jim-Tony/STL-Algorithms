//This is a boolean function 
//returns true if sorted 
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v{1,2,3,11,0,4,1};
    (is_sorted(begin(v),begin(v)+4)) ? cout<<"Yes it is sorted\n":cout<<"Not sorted\n";
}