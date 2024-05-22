#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> numbers1;
    vector<int> numbers2;

    int n;
    cin>> n;

    int num;
    for(int i=0; i<n; i++){
        cin>> num;
        numbers1.push_back(num);
    }

    int m;
    cin>> m;
    
    for(int i=0; i<m; i++){
        cin>> num;
        numbers2.push_back(num);
    }

    // the actual logic for the question
    set<int> s;
    vector<int> Union;

    //adding all the elements of both the arrays to set
    for(auto it:numbers1){
        s.insert(it);
    }
    for(auto it:numbers2){
        s.insert(it);
    }

    // finally adding the union of both arrays into the vector
    for(auto it:s){
        Union.emplace_back(it);
    }


    // printing the array elements of the Union
    for(auto it:Union){
        cout<< it << " ";
    }
}