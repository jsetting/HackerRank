#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

template <typename T>
vector<T> CreateVectorFromCin();

int main() {
    vector<int> inputVector = CreateVectorFromCin<int>();
    vector<int> queryVector = CreateVectorFromCin<int>();
    
    for(int query : queryVector){
        auto lowerBound = lower_bound(inputVector.begin(), inputVector.end(), query);
        cout << (*lowerBound == query ? "Yes " : "No ");
        cout << lowerBound - inputVector.begin() + 1 << endl;
    }
    
    return 0;
}

template <typename T>
vector<T> CreateVectorFromCin(){
    int size;
    cin >> size;
    vector<T> returnVector;
    returnVector.reserve(size);
    
    copy_n(istream_iterator<T>(cin), size, back_inserter(returnVector));
    
    return returnVector;
}
