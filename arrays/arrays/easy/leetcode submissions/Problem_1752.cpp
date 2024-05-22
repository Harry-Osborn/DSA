#include<bits/stdc++.h>
using namespace std;


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

void rotate(vector<int>& numbers, int length){
    //step1
    reverse(numbers, length-1, length-1);
    //step2
    reverse(numbers, 0, length-2);
    //step3
    reverse(numbers, 0, length-1);
}

int isSortedAscendingDescending(vector<int> numbers){
    int ascending = true;
    int descending = true;

    for(int i=0; i<numbers.size()-1; i++){
        if(numbers[i]<numbers[i+1]){
            descending = false;
        }

        else if(numbers[i]>numbers[i+1]){
            ascending = false;
        }

        else if(!ascending && !descending){
            break;
        }
    }

    if(ascending){
        return 1;
    }

    else{
        return 0;
    }
}

int main(){
    vector<int> nums;

    int n;
    cin>> n;

    int num;
    for(int i=0; i<n; i++){
        cin>> num;
        nums.push_back(num);
    }

    // logic for the question
    int rotationCount = nums.size(), result;
    vector<int> resultarray;

    for(int i=0; i<rotationCount; i++){
        result = isSortedAscendingDescending(nums);

        rotate(nums,nums.size());

        if(result == 1){
            resultarray.push_back(1);
        }

        else{
            resultarray.push_back(0);
        }
    }

    

    int ascending_flag = 0;

    for(auto it:resultarray){
        if(it==1){
            ascending_flag = 1;
        }
    }

    if(ascending_flag){
        return true;
    }

    else{
        return false;
    }
}
