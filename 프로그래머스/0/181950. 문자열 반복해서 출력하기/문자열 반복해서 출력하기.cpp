#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    int n;
    cin >> str >> n;
    
    while(0 != n)
    {
        cout << str;
        n--;
    }
    return 0;
}