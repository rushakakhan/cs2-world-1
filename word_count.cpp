#include <iostream>
using std::cin;
using std::cout;



int main() 
{
  char textChar;
  int charNumber;
  int wordNum = 0;
  int longestWordLength = 0;
  int mostVowelsInWord = 0;
  cout << "Type some words:\n";

  do {
    textChar = cin.get();
    if (textChar == ' ' || textChar == 10 || textChar == 9) {
      continue;
    } else {
      int currentWordLength = 0;
      int currentVowelCount = 0;
      while ((textChar != 10) && textChar != ' ') {
        currentWordLength++;
        if (textChar == 'a' || textChar == 'A' || textChar == 'e' || textChar == 'E' || textChar == 'i' || textChar == 'I' || textChar == 'o' || textChar == 'O' || textChar == 'u' || textChar == 'U' ) {
          currentVowelCount++;
        }
        // cout << "textChar = " << textChar << "\n";
        textChar = cin.get();
      }
      if (currentWordLength > longestWordLength) {
        longestWordLength = currentWordLength;
      }
      if (currentVowelCount > mostVowelsInWord) {
        mostVowelsInWord = currentVowelCount;
      }
      // cout << "end word\n";
      wordNum++;
    }
  } while (textChar != 10);

  cout << " " << "\n";
  cout << "=============================" << "\n";
  cout << "Word count: " << wordNum << "\n";
  cout << "Longest word: " << longestWordLength << " letters\n";
  cout << "Most vowels in word: " << mostVowelsInWord << "\n";
  cout << "=============================" << "\n";
  cout << " " << "\n";
}