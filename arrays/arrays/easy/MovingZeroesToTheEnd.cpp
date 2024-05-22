// problem 283 leetcode
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> numbers;

    int n;
    cin>> n;

    int num;
    for(int i=0; i<n; i++){
        cin>> num;
        numbers.push_back(num);
    }

    // the actual logic for the question
    
    //moving tht pointer to the first occourance of zero
    int i;
    for(i=0; i<n; i++){
        if(numbers[i]==0){
            break;
        }
    }

    // main logic
    for(int j=i+1; j<n; j++){
        if(numbers[j]!=0){
            int temp = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = temp;
            i++;
        }
    }

    for(auto it:numbers){
        cout<< it << " ";
    }
}