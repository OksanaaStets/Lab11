/*#include<iostream>
#include <iomanip>
#include <fstream>
using namespace std;

struct Subjeckt {
    string s_name;
    int mark;
};

struct Student {
    string name;
    unsigned int number;
    Subjeckt subjects[5];
    // к-сть незадовільних оцінок
    int kt;
};
void inputStudent(Student* group, int size);
void outputSudent(const Student* group, int size);
void SortSubject(const Student* group, int size);
void Vitsotok(const Student* group, int size);
void FillFile(Student* group, int size);
int main()
{ 
    int size;
    cout << "Введіть кількість студентів: ";
    cin >> size;
    Student* group = new Student[size];

    inputStudent(group, size);
    outputSudent(group, size);
    SortSubject(group, size);
    Vitsotok(group, size);
    FillFile (group,size);
    delete[] group;
    return 0;
}

void inputStudent(Student* group, int size)
{
    cout << "Введіть предмети студентів" << endl;
    string ss_name;

    for (int j = 0; j < 5; j++)
    {
        cout << j + 1 << " предмет\n";
        cin >> ss_name;
        for (int i = 0; i < size; i++)
        {

            group[i].subjects[j].s_name = ss_name;
        };
    };
    cout << "\n Введіть дані про студента:\n";
    for (int i = 0; i < size; ++i)
    {
        cout << "\n Студент " << i + 1 << ":\n";
        int kil = 0;
        cout << "ПІБ: \n ";
        cin >> group[i].name;
        cout << "№ Залікової книги: \n ";
        cin >> group[i].number;
        for (int j = 0; j < 5; ++j)
        {
            cout << "Оцінка " << j + 1 << ": ";
            cin >> group[i].subjects[j].mark;
            // формуємо к-сть незадовільних оцінок
            if (group[i].subjects[j].mark < 3)
            {
                kil++;
            }
        }
        group[i].kt = kil;
    }
}

void outputSudent(const Student* group, int size) {
    cout << "----------------------------------------------------\n";
    cout << "ПІБ          |№ Зал книжки|";
    for (int i = 0; i < 5; i++)
        cout << group[0].subjects[i].s_name.substr(0, 4) << "|";
    cout << "\n----------------------------------------------------\n";
    for (int i = 0; i < size; ++i) 
    {
        cout << group[i].name << "\t | " << group[i].number << "\t  | ";
        for (int j = 0; j < 5; j++)
        {
            cout << group[i].subjects[j].mark << "  | ";
        }
        cout << " \n";
        
    }
}

void SortSubject(const Student* group, int size) {
    cout << "\n";
    cout << "Успішність студентів:\n";
    cout << "----------------------------------------------------\n";
    cout << "ПІБ          |№ Зал книжки|";
    for (int i = 0; i < 5; i++)
        cout << group[0].subjects[i].s_name.substr(0, 4) << "|";
    cout << "\n----------------------------------------------------\n";
    int k = 5;
    while (k >= 0)
    {
        for (int i = 0; i < size; ++i) {
            if (group[i].kt == k)
            {
                cout << group[i].name << "\t | " << group[i].number << "\t  | ";
                for (int j = 0; j < 5; j++)
                {
                    cout << group[i].subjects[j].mark << "  | ";
                }
                cout << " \n";
            }
        }
        k--;
    }
}
void Vitsotok(const Student* group, int size)
{
    float a = 0;
    for (int i = 0; i < size; ++i)
        if (group[i].kt == 0)
            a++;
    cout << "\n Відсоток студентів з задовільними оцінками: " << fixed << setprecision(2) << a * 100 / size << "%" << endl;
    cout << " Відсоток студентів з незадовільними оцінками: " << fixed << setprecision(2) << 100 - (a * 100 / size) << "%" << endl;
}
void FillFile(Student* group, int size)
{
  string FileName;
  cout << "\n Введіть назву файлу: ";
  cin >> FileName;
  //Student worker;
  // Відкриття файлу для запису в режимі бінарного запису
   fstream f(FileName,  ios:: out| ios::binary);
   // Перевірка, чи файл відкрито
   if (!f.is_open()) 
   {
   cout << "failed to open" << endl;
   }
   // Запис даних у файл
    
         f << "----------------------------------------------------\n";
      f << "ПІБ          |№ Зал книжки|";
      for (int i = 0; i < 5; i++)
          f<< group[0].subjects[i].s_name.substr(0, 4) << "|";
      f << "\n----------------------------------------------------\n";
    for (int i = 0; i < size; ++i)
           {
                f<< "\n"; 
      f << group[i].name << "\t | " << group[i].number << "\t | ";
      for (int j = 0; j < 5; ++j) {
      //   f << group[i].subjects[j].s_name << " - " << group[i].subjects[j].mark << "  | ";
         f << group[i].subjects[j].mark << "  | ";
      }
  }
   // Закриваємо файл
   f.close();
   cout << "Успіх!" << endl;
  } */