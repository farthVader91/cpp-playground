#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int n, m;
    char s[n];
    cin >> n >> s >> m;
    char op;
    for(int i = 0; i < m; i++) {
        cin >> op;
        switch(op) {
            case 'R': {
                int l, r;
                cin >> l >> r;
                l--, r--;

                break;
            }
            case 'W': {
                int l, r;
                cin >> l >> r;
                break;
            }
            case 'H': {
                int l1, l2, len;
                cin >> l1 >> l2 >> len;
                break;
            }
            case 'C': {
                int l, r;
                char ch;
                cin >> l >> r >> ch;
                break;
            }
            case 'S': {
                int l1, r1, l2, r2;
                cin >> l1 >> r1 >> l2 >> r2;
                break;
            }
            default: cout << "Invalid Query!" << endl;
        }
    }
}