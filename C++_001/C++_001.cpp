#include <iostream>
using namespace std;

//185. Написать функцию, которая вычисляет объем цилиндра.Параметрами функции должны быть радиус и высота цилиндра.

float cylinderVolume(float radius, float heingt)
{
    const float p = 3.14;
    return p * radius * radius * heingt;
}

//186. Написать функцию, которая возвращает максимальное из двух целых чисел, полученных в качестве аргумента.

int max(int a, int b)
{
    return a > b ? a : b;
}

//187. Написать функцию, которая сравнивает два целых числа и возвращает результат сравнения в виде одного из знаков : > , < или = .

char compares(int a, int b)
{
    return a > b ? '>' : (a < b ? '<' : '=');
}

//188. Написать функцию, которая вычисляет сопротивление цепи, состоящей из двух резисторов.
// Параметрами функции являются величины сопротивлений и тип соединения(последовательное или параллельное).
// Функция должна проверять кор - ректность параметров: если неверно указан тип соединения, то функция должна возвращать - 1.

float circuitResistance(float r1, float r2, bool connectionTypeSerial)
{
    return connectionTypeSerial ? (r1+r2) : ((r1*r2)/(r1+r2));
}

//190. Написать функцию Procent, которая возвращает процент от полученного в качестве аргумента числа.

float procent(float a, float b)
{
    return (a * b) / 100;
}

//191. Написать функцию "Факториал" и программу, использующую эту функцию для вывода таблицы Факториалов.

int factorial(int a)
{
    int b = 1;
    for (size_t i = 1; i <= a; i++)
    {
        b *= i;
    }
    return b;
}

void f()
{
    int n;
    cout << "int n >>";
    cin >> n;

    printf("n\tfactorial\t\n");
    for (size_t i = 1; i <= n; i++)
    {
        printf("%d\t%d\t\n", i, factorial(i));
    }
    return;
}

//192. Написать функцию Dohod, которая вычисляет доход по вкладу.Исходными данными для функции являются : 
// величина вклада, процентная ставка(годовых) и срок вклада(количество дней).

float dohod(float contributionAmount, float interestRate, int depositTerm)
{
    return contributionAmount * interestRate * depositTerm / 100 / 365;
}

//199. Написать функцию, которая вычисляет объем и площадь поверхности параллелепипеда.

void f2(int a, int b, int c)
{
    cout << "S = " + (2 * (a * b + a * c + b * c));
    cout << "V = " + (a*b*c);
}



int main()
{
    std::cout << "Hello World!\n";
}