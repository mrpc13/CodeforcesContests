#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int x;
    cin >> x;
    while (x--) {
        string word;
        cin >> word;
        word = word.substr(0, word.size() - 2) + "i";
        
        cout << word << endl;
    }
    return 0;
}
