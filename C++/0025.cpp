#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  string input;
  cin >> input;

  int DAY = 24 * 3600; // 84600
  int n = 0;
  for (char c : input) {
    n = (n * 10 + (c - '0')) % DAY;
  }

  int hours = (n / 3600) % 24;
  int minutes = (n / 60) % 60;
  int seconds = n % 60;

  char buff[50];
  sprintf(buff, "%d:%02d:%02d", hours, minutes, seconds);
  string result = buff;

  cout << result << endl;

  return 0;
}
