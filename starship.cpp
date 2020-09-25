#include <iostream>
using std::cin;
using std::cout;

void printRow(int outerSpaceNum, int hashNum, int innerSpaceNum, bool fillInnerWithHash) {
  int column;
  for (column = 1; column <= outerSpaceNum; column++) {
    cout << " ";
  }
  for (column = 1; column <= hashNum; column++) {
    cout << "#";
  }
  if (fillInnerWithHash) {
      for (column = 1; column <= innerSpaceNum; column++) {
      cout << "#";
    }
  } else {
      for (column = 1; column <= innerSpaceNum; column++) {
      cout << " ";
    }
  }
  for (column = 1; column <= hashNum; column++) {
    cout << "#";
  }
  cout << "\n";
}

int main() 
{
  int height = 10; // Must be an even number
  int colNum = 19;
  for (int row = 1; row <= height; row++) {
    int hashNum;
    if (row < height / 2) {
      hashNum = row; 
      printRow(hashNum - 1, hashNum, colNum - (2 * hashNum) - (2 * (hashNum - 1)), false);
    } else if (row == height / 2 || row == height / 2 + 1) {
      hashNum = height / 2;
      printRow(hashNum - 1, hashNum, colNum - (2 * hashNum) - (2 * (hashNum - 1)), true);
    } else {
      hashNum = height + 1 - row;
      printRow(hashNum - 1, hashNum, colNum - (2 * hashNum) - (2 * (hashNum - 1)), false);
    }
  }
}