/*#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void CountCaps(string& inputFileName);

int main() {
  string inputFileName;
  cout << "Введіть назву файлу: ";
  cin >> inputFileName;

  CountCaps(inputFileName);

  return 0;
}

void CountCaps(string& inputFileName) 
{
  int k = 0; // Лічильник великих літер

  // Відкриття вхідного файлу
  ifstream input(inputFileName);

  string line;

  while (getline(input, line)) {
    

    for (char c : line) {
      if (isupper(c)) {
        
        k++; 
      }
    }
  }
  input.close();
  cout << "Загальна кількість великих літер у файлі: " << k << endl;
}*/