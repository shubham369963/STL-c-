// The minimum element can be found using the STL function *min_element().

// Syntax:

// *min_element(first index,last index);

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v {4,2,5,9,1};
    cout<<"The elements in the vector are: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    cout<<"The minimum element is: "<<*min_element(v.begin(),v.end());
}
// Output:

// The elements in the vector are: 4 2 5 9 1
// The minimum element is: 1