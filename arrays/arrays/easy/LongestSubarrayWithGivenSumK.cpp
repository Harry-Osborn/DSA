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

    int k;
    cin>> k;

    // the actual logic for the question
    int left = 0;
    int right = 0;
    int maxLen = 0;
    int sum = 0;

    while(right<n){
        while(left<=right && sum>k){
            sum -= numbers[left];
            left++;
        }

        sum += numbers[right];

        if(sum==k){
            maxLen = max(right - left + 1, maxLen);
        }

        right++;
    }

    cout<< maxLen;
}