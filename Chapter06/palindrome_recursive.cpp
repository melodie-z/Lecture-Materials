#include <cstring>
#include <iostream>

using namespace std;

bool pdrome(char word[], int lowerBound, int upperBound) {
  bool pflag = true;

  while (lowerBound < upperBound && pflag) {
    if (word[lowerBound] != word[upperBound]) {
      pflag = false;
    } else {
      lowerBound++;
      upperBound--;
    }
  }

  return pflag;
}

bool pdrome(char word[], int lowerBound, int upperBound) {
  if (lowerBound >= upperBound) {
    return true;
  } else if (word[lowerBound] != word[upperBound]) {
    return false;
  } else {
    return pdrome(word, ++lowerBound, --upperBound);
  }
}

int main() {
  char example[] = "racecar";
  char example2[] = "palindrome";

  cout << "racecar: " << pdrome(example, 0, strlen(example) - 1) << endl;
  cout << "palindrome: " << pdrome(example2, 0, strlen(example2) - 1) << endl;
  return 0;
}