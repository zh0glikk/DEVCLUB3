# pragma once

#include <iostream>

template <typename T>
class Point {
    public: 
        explicit Point(T x = 0, T y = 0);
        ~Point() = default;

        T x() const { return m_x; }
        T y() const { return m_y; }


    private: 
        T m_x;
        T m_y;
};

std::ostream& operator<<(std::ostream& out, const Point& point);