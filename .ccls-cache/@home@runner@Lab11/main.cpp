// до роботи 11
//підключаємо файлові потоки
//робота з вмістом тектового файлу видаляємо дещо з нього
//перед початком роботи створити файл з даними. Тут 1.txt
/*#include <fstream>
#include <string>
#include <iostream>
using namespace std;
void DeleteDigit(string& str);

int main() {
  string nameFile;
  cout<< "Input name file: ";
  cin>> nameFile;
  DeleteDigit(nameFile);
    return 0;
}
void DeleteDigit(string& str)
{
  ifstream input(str);
  ofstream output("result.txt");
  string line;

  while (getline(input, line)) {
      string newLine;

        for (char c : line) {
          if (!isdigit(c)) {
              newLine += c;
          }
      }

      output << newLine << "\n";
  }
  input.close();
  output.close();
}
*/