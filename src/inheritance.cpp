#include <iostream>

class LivingThing
{
public:
    void breathe()
    {
        std::cout << "Breathing..." << "\n";
    }
};

class Person : public LivingThing
{
public:
    void speak()
    {
        std::cout << "Speaking..." << "\n";
    }
};

class Animal : public LivingThing
{
public:
    void make_sound()
    {
        std::cout << "Making sound..." << "\n";
    }
};

/**
 * When the base class has constructor parameters
 */

class Shape
{
protected:
    double area;
    double volume;

public:
    Shape(double area, double volume) : area(area), volume(volume)
    {
    }
};

class Sphere : public Shape
{
private:
    double radius;

public:
    Sphere(double radius) : Shape(4 * M_PI * std::pow(radius, 2), (4 / 3.0) * M_PI * std::pow(radius, 3)), radius(radius)
    {
    }

    const double get_area()
    {
        return this->area;
    }

    const double get_volume()
    {
        return this->volume;
    }
};

int main()
{
    Person person;
    person.breathe();
    person.speak();

    Animal animal;
    animal.breathe();
    animal.make_sound();

    Sphere sphere(6.0);
    std::cout << sphere.get_area() << "\n";
    std::cout << sphere.get_volume() << "\n";
}