#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

template <typename T>
vector<T> CreateVectorFromCin();

template <typename T>
inline void PrintVectorToCout(vector<T>&, string = " ");

int main() {
    auto inputVector = CreateVectorFromCin<int>();
    int a, b, c;
    cin >> a >> b >> c;
    
    inputVector.erase(inputVector.begin() + --a);
    inputVector.erase(inputVector.begin() + --b, inputVector.begin() + --c);
    
    cout << inputVector.size() << endl;
    PrintVectorToCout<int>(inputVector);
    
    return 0;
}

template <typename T>
vector<T> CreateVectorFromCin() {
    int size;
    cin >> size;
    vector<T> returnVector;
    returnVector.reserve(size);
    
    copy_n(istream_iterator<T>(cin), size, back_inserter(returnVector));
    
    return returnVector;
}

template <typename T>
inline void PrintVectorToCout(vector<T>& inputVector, string delimiter){
    copy(inputVector.begin(), inputVector.end(), ostream_iterator<T>(cout, delimiter.c_str()));
}
