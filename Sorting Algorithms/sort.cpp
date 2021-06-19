#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void disp(vector<int> &l){
    for(auto i:l){
        cout<<i<<" ";
    }
    cout<<"\n";
}
int main(){
    vector<int> ll{3,4,1,1,88,7,0,2,33};
    //Sorting the list in ascending order
    sort(begin(ll),end(ll));
    printf("In ascending order\n");
    disp(ll);

    //Sorting in descending order
    printf("In descending order\n");
    sort(begin(ll),end(ll),greater<int>());
    disp(ll);


    return 0;

}