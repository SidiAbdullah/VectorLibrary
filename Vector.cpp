#include <iostream>
#include <vector>
using namespace std;

// 1. CRUDS
// A. createVector
vector <int> vNumbers = {10, 20, 30, 40, 50};

// B. readVector()
void readVector(vector <int> &vNums){
  for (int i = 0; i < vNums.size(); i++){
    cout << vNums[i] << "\n";
  }
}
void readVector(vector <int> &vNums, int from, int to){
  if (from > to || from < 0 || to < 0) return;
  for (int i = from; i <= to; i++){
    cout << vNums[i] << "\n";
  }
}

// C. updateVector
void changeVectorElement(vector <int> &vNums, int index, int newValue){
  vNums[index] = newValue;
}
void insertElemntToVector(vector<int> &vNums, int index, int value){
  vNums.push_back(0);
  int temp;
  int n = vNums.size();
  for (int i = 0; i < n - 1 - index; i++){
    temp = vNums[n - 1 - i];
    vNums[n - 1 - i] = vNums[n - 2 - i];
    vNums[n - 2 - i] = temp;
  }
  vNums[index] = value;
}
void reverseVector(vector <int> &vNums){
  vector <int> vNewNums;
  int n = vNums.size();
  for (int i = 0; i < n; i++){
    vNewNums.push_back(vNums[n - 1 - i]);
  }
  vNums = vNewNums;
}
void squareElements(vector <int> &vNums){
  for (int &num : vNums){
    num = num * num;
  }
}

// D. deleteFromVector
void deleteValueByIndex(vector <int> &vNums, int index){
  vector <int> vNewNums;
  for (int &num : vNums){
    if (num != vNums[index]) vNewNums.push_back(num);
  }
  vNums = vNewNums;
}
void deleteValue(vector <int> &vNums, int value){
  vector <int> vNewNums;
  for (int &num : vNums){
    if (num != value) vNewNums.push_back(num);
  }
  vNums = vNewNums;
}

// E. Search or Find
// Find
// FindAll

// ##########################
// 2. Aggregate methods
// sum
// average
// count
// ##########################
// 3. Sorting methods
// sort
// reverse
// orderBy
// orderByDesc
// ##########################
// 4. Filtering methods
// where
// ##########################
// 5. Exploring methods
// Contains
// Exists

// others shares logic
// BitArrayToString
// BitArray <=> Byte[]
// BitArray.{And, Or, Xor, Not)


int main(){
  // vector <int> vNumbers = {10, 20, 30, 40, 50};
  readVector(vNumbers);
  cout << "#########################" << endl;
  // readVector(vNumbers, 2, 4);
  // cout << "#########################" << endl;
  // changeVectorElement(vNumbers, 2, 30);
  // readVector(vNumbers);
  // cout << "#########################" << endl;
  // insertElemntToVector(vNumbers, 1, 20);
  // readVector(vNumbers);
  // cout << "#########################" << endl;
  // reverseVector(vNumbers);
  // readVector(vNumbers);
  // cout << "#########################" << endl;
  // squareElements(vNumbers);
  // readVector(vNumbers);
  // cout << "#########################" << endl;
  // deleteValueByIndex(vNumbers, 0);
  // deleteValue(vNumbers, 30);
  // readVector(vNumbers);
}
