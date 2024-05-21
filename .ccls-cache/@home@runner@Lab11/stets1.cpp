#include <fstream>
#include <iostream>
using namespace std;
int CountCaps(string& inputFileName);
void FillFile (string& inputFileName);
int main() 
{
  string FileName;
  cout << "Введіть назву файлу: ";
  cin >> FileName;
  FillFile (FileName);
  cout << "Загальна кількість великих літер у файлі: " << CountCaps(FileName) << endl;
  return 0;
}

int CountCaps(string& inputFileName) 
{
  int k = 0; // Лічильник великих літер

  // Відкриття вхідного файлу на читання даних з нього
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
   return k;
  
}
void FillFile (string& inputFileName)
{
  ofstream outputFile(inputFileName); // Створення та відкриття файлу

  if (outputFile.is_open()) 
  {
    string line;

    cout << "Введіть текст, який хочете записати: " << endl;

    while (getline(cin, line) && line!="%") 
       {
      outputFile << line << "\n"; // Запис рядка у файл
     };

    outputFile.close(); // Закриття файлу
    cout << "Файл успішно створено та заповнено!" << endl;
  } 
  else 
     {
    cout << "Не вдалося створити файл!" << endl;
     }
}
