#include <iostream>
using namespace std;
 int main() {
    char alpha;
    cin >> alpha;
 
    if (alpha >= 'A' && alpha <= 'Z') {  
  cout << static_cast<char>(alpha + 32);
    } else if (alpha >= 'a' && alpha <= 'z') {  
  cout << static_cast<char>(alpha - 32);
    } else {
  cout << alpha;
    }
 
    return 0;
}
