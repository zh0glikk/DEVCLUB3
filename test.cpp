#include <iostream>

class  Iter {
    public:
         explicit Iter(int start, int step) {
            this->m_start = start;
            this->m_step = step;
            this->m_current = start;
         }
        ~Iter() = default;

        int next() {
            m_current += m_step;
            return m_current;
        }
        int prev() {
            m_current -= m_step;
            return m_current;
        }
    private: 
        int m_start;
        int m_step;
        int m_current;
};

int main() {
    Iter it(0, 10);
    for ( int i = 0; i < 10; i++ ) {
        std::cout << it.next() << std::endl;
    }

    return 0;
}