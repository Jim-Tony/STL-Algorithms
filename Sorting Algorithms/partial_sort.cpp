#include "bits/stdc++.h"
using namespace std;
void disp(vector<int> &f){
    for(auto i:f){
        cout<<i<<" ";
    }
    cout<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v{44,1,3,8,9,10,19,34,12};
    partial_sort(begin(v),begin(v)+5,end(v)); //Upto 5th postion the vector is sorted 
    //after that element are left as it is
    disp(v);
    return 0;
}