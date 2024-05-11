#pragma once

namespace mt
{
    class Cube
    {
        float m_a;

    public:
        Cube();

        Cube(float a);

        float Area();

        float Volume();

        float Diagonal();

        void setA(float a);

        float getA();

        void Print();
    };
}
