// aisd_hm2_VS.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <queue>
#include <stack>

//task2
int MaxCorrectSubstring(std::string s)
{
    std::stack <char> str;
    int counter = 0;
    int tmp = 0;

    for (int i = 0; i < s.size(); ++i) {
        if ((str.size() == 0) && (s[i] == ')')) {
            continue;
        }
        if (s[i] == '(') {
            str.push(s[i]);
        }
        if ((s[i] == ')') && (str.size() != 0)) {
            str.pop();
            tmp += 2;
        }
        if (s[i + 1] != ')' || str.size() == 0) {
            if (counter < tmp) {
                counter = tmp;
                tmp = 0;
            }
        }
    }
    return counter;
}

//task4
int TimeOfBuyingTichets(std::queue <int> vec, int k) {
    int counter = 0;
    while (k != -1) {
        int tmp = vec.front();
        tmp -= 1;
        counter += 1;
        if (tmp == 0) {
            vec.pop();
        }
        else {
            vec.pop();
            vec.push(tmp);
            if (k == 0 && tmp == 0) {
                return(counter);
            }
            else if (k == 0) {
                k = vec.size();
            }
        }
        k -= 1;
    }
    return counter;
}


int main()
{
    std::queue <int> vec;
    vec.push(2);
    vec.push(3);
    vec.push(2);
    int k = 0;

    std::cout << foo(vec, k);

    return 0;
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
