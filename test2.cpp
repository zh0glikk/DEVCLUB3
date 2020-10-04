#include <iostream>

class Animal {
public:
    Animal(const std::string& name) 
        : m_name(name)
    {
    };

    void move() {
        std::cout << getName() << " move" << std::endl;
    }

    const std::string& getName() const { return m_name; };

private:
    const std::string m_name;
};

class Fish : public Animal {
public:
    Fish (const std::string& name)
    : Animal(name) 
    {}

    void move() {
        std::cout << getName() << " swims" << std::endl;
    }

    void swim() {
        std::cout << " swim" << std::endl;
    }
};

class Bird : public Animal {
public:
     Bird (const std::string& name)
    : Animal(name) 
    {}

    void move() {
        std::cout << getName() << " flies" << std::endl;
    }

    void fly() {
        std::cout << " fly" << std::endl;
    }
};

class BirdFish : public Bird, public Fish {
public:
    BirdFish (const std::string& name) :
        Bird (name),
        Fish (name)
    {

    }
};

int main() {
    BirdFish bf("gull");

    bf.swim();
    bf.fly();
}