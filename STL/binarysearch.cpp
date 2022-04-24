#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
main()
{
    vector<int> a;
    a.push_back(5);
    a.push_back(25);
    a.push_back(36);
    a.push_back(55);
    a.push_back(64);
    a.push_back(84);
    a.push_back(93);
    cout << "finding 64 --> " << binary_search(a.begin(), a.end(), 64) << endl;
    cout << "finding 20 --> " << binary_search(a.begin(), a.end(), 20) << endl;
    cout << "finding 25 --> " << binary_search(a.begin(), a.end(), 45) << endl;
    cout << "finding 84 --> " << binary_search(a.begin(), a.end(), 84) << endl;
}