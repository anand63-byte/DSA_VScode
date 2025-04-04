#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findDifference(const vector<int>& arr, int index) {
    if (index == arr.size()) {
        return 0;
    }

    int take, not_take;
    if (index % 2 == 0) {
        take = arr[index] +  findDifference(arr, index + 1);
    } else {
        take = arr[index] + findDifference(arr, index + 1);
    }
      not_take = findDifference(arr, index + 1);
    return take - not_take;
}

int main() {
    vector<int> arr = {4, 3, 5, 2};
    int result = findDifference(arr,0);
    cout<<result;
    return 0;
}
