#include <fstream>
#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string>
using namespace std;

class figure
{
protected:
    string type = "Фигура";
    int sides = 0;
public:
    figure()
    {
        sides = 0;
    }
    void print_sides()
    {
        cout << type << ": " << sides << endl;
    }
};
class triangle: public figure
{
public:
    triangle()
    {
        type = "Треугольник";
        sides = 3;
    }
};
class qangle : public figure
{
public:
    qangle()
    {
        type = "Четырехугольник";
        sides = 4;
    }
};


int main()
{
    setlocale(0, "");
    SetConsoleCP(1251); //перевод на русский
    SetConsoleOutputCP(1251);
    cout << "Количество сторон: \n";
    figure figure;
    figure.print_sides();
    triangle triangle;
    triangle.print_sides();
    qangle qangle;
    qangle.print_sides();
}

