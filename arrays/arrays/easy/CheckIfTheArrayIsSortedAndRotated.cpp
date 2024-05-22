// problem no 1752 in leetcode
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

    else if(descending){
        return 2;
    }

    else{
        return 3;
    }
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

    // logic for the question
    int rotationCount = numbers.size()-1, result;

    for(int i=0; i<rotationCount; i++){
        if(isSortedAscendingDescending(numbers) == 1 || isSortedAscendingDescending(numbers) == 2){
            result = isSortedAscendingDescending(numbers);
            break;
        }

        rotate(numbers,n);
    }

    if(result == 1){
        cout<< "ascending : ";
        for(auto it:numbers){
            cout<< it << " ";
        }
    }

    else if(result == 2){
        cout<< "descending : ";
        for(auto it:numbers){
            cout<< it << " ";
        }
    }

    else{
        cout<< "neither ascending nor descending : ";
        for(auto it:numbers){
            cout<< it << " ";
        }
    }
}