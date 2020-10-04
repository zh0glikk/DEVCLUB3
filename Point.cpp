#include <iostream>

template <typename T>
class Point {
    public: 
        explicit Point(T x = 0, T y = 0) 
            : m_x(x)
            , m_y(y)
        {
        };

        ~Point() = default;

        T x() const { return m_x; }
        T y() const { return m_y; }
    private: 
        T m_x;
        T m_y;
};

template <typename T>
std::ostream& operator<<(std::ostream& out, const Point<T>& point) {
    out << "(" << point.x() << ", " << point.y() << ")";
    return out;
}