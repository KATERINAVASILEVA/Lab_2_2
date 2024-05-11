#include "Cube.hpp"
#include <iostream>

namespace mt {

    void Cube::setA(float a)
    {
        if (a < 0)
        {
            std::cout << "Error - side < 0" << '\n';
            return;
        }
        m_a = a;
    }

    float Cube::getA() {
        return m_a;
    }

    Cube::Cube(float a)
    {
        setA(a);
    } 

    Cube::Cube()
    {
        setA(1);
    }

    float Cube::Area()
    {
        return pow(m_a, 2) * 6;
    }

    float Cube::Volume()
    {
        return pow(m_a, 3);
    }

    float Cube::Diagonal()
    {
        return sqrt(3 * pow(m_a, 2));
    }


    void Cube::Print()
    {
        std::cout << "Cube:" << '\n' << "Area - " << Area() << '\n' \
            << "Volume - " << Volume() << '\n' << "Diagonal - " << Diagonal();
    }

}
