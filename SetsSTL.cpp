#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int numQueries, command, number;
    cin >> numQueries;
    set<int> mySet;
    
    for(int i = 0; i < numQueries; i++){
        cin >> command >> number;
        switch(command){
            case 1:
                mySet.insert(number);
                break;
            case 2:
                mySet.erase(number);
                break;
            case 3:
                auto iter = mySet.find(number);
                cout << (iter == mySet.end() ? "No" : "Yes") << endl;
                break;
        }
    }
    
    return 0;
}
