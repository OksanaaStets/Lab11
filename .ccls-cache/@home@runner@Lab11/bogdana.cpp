/*#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string read_file(const string& filename);
void double_char(string& text, char target_char);
void write_file(const string& filename, const string& content);

int main() {
    string filename;
    char target_char;

    cout << "Введіть ім'я файлу: ";
    cin >> filename;

    // Читаємо вміст файлу
    string content = read_file(filename);

    if (!content.empty()) {
        cout << "Введіть символ для подвоєння: ";
        cin >> target_char;

        // Подвоюємо заданий символ
        double_char(content, target_char);

        // Записуємо змінений вміст назад у файл
        write_file(filename, content);

        cout << "Подвоєний символ '" << target_char << "' додано до файлу." << endl;
    }

    return 0;
}

// Функція для читання вмісту файлу та повернення його у вигляді рядка
string read_file(const string& filename) {
    ifstream file(filename);
    string content;

    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            content += line + "\n";
        }
        file.close();
    } else {
        cout << "Не вдалося відкрити файл " << filename << endl;
    }

    return content;
}

// Функція для запису вмісту у файл
void write_file(const string& filename, const string& content) {
    ofstream file(filename);

    if (file.is_open()) {
        file << content;
        file.close();
    } else {
        cout << "Не вдалося відкрити файл " << filename << " для запису" << endl;
    }
}

// Функція для подвоєння заданого символу у тексті
void double_char(string& text, char target_char) {
    for (size_t i = 0; i < text.length(); ++i) {
        if (text[i] == target_char) {
            text.insert(i, 1, target_char);
            ++i;  // Збільшуємо індекс, оскільки ми вставили додатковий символ
        }
    }
}*/