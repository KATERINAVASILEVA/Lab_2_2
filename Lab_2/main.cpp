#include <iostream>
#include "Cube.hpp"

// Куб, расчет площади, объема и длины диагонали.


int main()
{
    float a;
    std::cin >> a;
    mt::Cube a1(a);
    mt::Cube q;

    a1.Print();
}










/*class Cube
{
    float m_a;

public:
    Cube(float a)
    {
        setA(a);
    }

    float Area()
    {
        return pow(m_a, 2) * 6;
    }

    float Volume()
    {
        return pow(m_a, 3);
    }

    float Diagonal()
    {
        return sqrt(3 * pow(m_a, 2));
    }

    void setA(float a)
    {
        if (a < 0)
        {
            std::cout << "Error - side < 0"<< '\n';
            return;
        }
        m_a = a;
    }

    void Print()
    {
        std::cout << "Cube:" << '\n'<< "Area - " << Area() << '\n' \
            << "Volume - " << Volume() << '\n' << "Diagonal - " << Diagonal();
    }
};

*/