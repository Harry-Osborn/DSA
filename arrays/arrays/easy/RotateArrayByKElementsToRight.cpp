#include<bits/stdc++.h>
using namespace std;

// technique for rotating the array by K elements
// 1. reverse last k elements of the array
// 2. reverse the last k-n elements of the array
// 3. reverse the whole array

void reverse(vector<int>& numbers, int start, int end){
    int Head = start;
    int Tail = end;

    while(Head<Tail){
        int temp = numbers[Head];
        numbers[Head] = numbers[Tail];
        numbers[Tail] = temp;

        Head++;
        Tail--;
    }
}

void rotate(vector<int>& numbers, int length, int k){
    //condition to reduce K when value of K is greater than length
    if(length < k){
        k = k % length;
    }

    //step1
    reverse(numbers, length-k, length-1);
    //step2
    reverse(numbers, 0, length-k-1);
    //step3
    reverse(numbers, 0, length-1);
}

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
    rotate(numbers,numbers.size(),k);

    //printing the array
    for(auto it:numbers){
        cout<< it << " ";
    }
}