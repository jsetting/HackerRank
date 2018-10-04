#include <iostream>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int numQueries, command, marks;
    string lastName;
    cin >> numQueries;
    map<string, int> myMap;
    
    for(int i = 0; i < numQueries; i++){
        cin >> command >> lastName;
        switch(command){
            case 1:
                cin >> marks;
                if(myMap.find(lastName) == myMap.end())
                    myMap[lastName] = 0;
                myMap[lastName] += marks;
                break;
            case 2:
                myMap.erase(lastName);
                break;
            case 3:
                auto iter = myMap.find(lastName);
                cout << (iter == myMap.end() ? 0 : iter->second) << endl;
                break;
        }
    }
    
    return 0;
}
