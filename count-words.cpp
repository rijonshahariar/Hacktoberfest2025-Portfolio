#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string s; getline(cin, s);
    stringstream ss(s);
    string word; int count = 0;
    while (ss >> word) count++;
    cout << count;
}
