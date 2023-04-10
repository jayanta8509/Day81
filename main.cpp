#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x;
    int ok = 0;
    string s;
    cin >> s;
    for (int j = 0; j < x; j++) {
      if (s[j - 1] == '1' && s[j] == '0') {
        ok++;
      }
    }
    cout << ok << endl;
  }
}