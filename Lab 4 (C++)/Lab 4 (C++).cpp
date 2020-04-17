// Lab 4 (C++).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "string.h"

using namespace std;

void taskEase18()
{
    cout << "\nTask 18 (ease)" << endl;
    //Для заданой строки определить входит ли в нее хотя бы одна руская буква.

    string s = "dwegМпergewq";
    bool check = false;

    cout << "Заданая строка:" << endl;
    cout << s << endl;

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'а' && s[i] <= 'я') || (s[i] >= 'А' && s[i] <= 'Я')) 
        {
            check = true;
            break;
        }

    }

    if (check)
        cout << "В строку входит руская буква." << endl;
    else
        cout << "В строку не входит руская буква." << endl;
}

void taskMedium18()
{
    cout << "\nTask 18 (medium)" << endl;
    //В заданой строке перед каждой большой латинской буквой поставить (точка, пробел).

    string s = "fDsfsSaaa";
    bool add = true;

    cout << "Заданая строка:" << endl;
    cout << s << endl;

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z'))
        {
            if (i == 0)
                s.insert(i, ". ");
            else {
                if (s[i - 1] != ' ')
                {
                    s.insert(i, ". ");
                }
            }

        }     
    }
    cout << "Строка с пробелами:\n" << s << endl;
}

void taskHard8()
{
    cout << "\nTask 8 (hard)" << endl;
    //В заданой строке расположить в обратном порядке все слова. Разделителями слов считаются пробелы.

    string s = "Lorem ipsum dolor sit amet consectetur adipisicing", val1;
    int y = 1,j = 0;

    cout << "Заданая строка:" << endl;
    cout << s << endl;

    for (int i = 0; i < s.length(); i++)//Сколько слов
    {
        if (s[i] == ' ')
            y++;
    }

    string* arr = new string[y];//Указатель
    j = y - 1;

        for (int i = 0; i < s.length(); i++)//Заполнение массива
        {
            if (s[i] != ' ')
                val1 += s[i];
            if ((s[i] == ' ') || (i == s.length() - 1))
            {
                arr[j] = val1;
                j--;
                val1 = "";
            }
        }

    cout << "Слова в обратном порядке:" << endl;
    string result;
    for (int t = 0; t < y; t++)
    {
        if (t == y - 1)
            result += arr[t];
        else
        {
            if (arr[t].length() == 0)
                result += arr[t];
            else
                result += arr[t] + " ";
        }
          
    }

    cout << result << endl;
}

int main()
{
    setlocale(0, "ru");
    taskEase18();
    taskMedium18();
    taskHard8();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
