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
    int max = INT_MIN;
    int secondmax;
    int min = INT_MAX;
    int secondmin;

    for(auto it:numbers){
        //logic for array containing less than 2 elements
        if(n<2){
            secondmin = secondmax = -1;
            break;
        }

        // finding the max and second max
        if(max<it){
            secondmax = max;
            max = it;
        }

        else if(secondmax<it && it!=max){
            secondmax = it;
        }

        // finding the min and second min
        if(min>it){
            secondmin = min;
            min = it;
        }    

        else if(secondmin>it && it!=min){
            secondmin = it;
        }
    }

    cout<< secondmax << " " << secondmin;
}