#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    int neg = 0, pos = 0, even = 0, odd = 0;
 
    for (int i = 1; i <= num; i++) {
        int x;
        cin >> x;
 
        if (x < 0)
            neg++;
        if (x > 0)
            pos++;
 
        if (x % 2 == 0)
            even++;
        else
            odd++;
    }
 
    cout << "Even: " << even << endl
         << "Odd: " << odd << endl
         << "Positive: " << pos << endl
         << "Negative: " << neg;
 
    return 0;
}
