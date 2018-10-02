#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

using inputIntIterator = istream_iterator<int>;

int main() {
    auto inputIterator = istream_iterator<int>(cin);
    vector<int> numbers;
    numbers.reserve(*(inputIterator++));
    
    copy(inputIterator, istream_iterator<int>(), back_inserter(numbers));
    sort(numbers.begin(), numbers.end());
    copy(numbers.begin(), numbers.end(), ostream_iterator<int>(cout, " "));
    
    return 0;
}
