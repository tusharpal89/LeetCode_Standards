#include <iostream>
#include <vector>
using namespace std;

int main (){

    vector<int> arr = {5, 3, 4, 1};

    int n = arr.size();

    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i -1;

        while(prev >= 0 && curr < arr[prev]){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}