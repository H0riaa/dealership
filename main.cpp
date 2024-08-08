#include <iostream>
#include <string>

struct Car 
{
    void print(int numaratoare) 
    {
        std::cout << "Car " << numaratoare << ": " << brand << ", " << year << ", " << color << ", " << plateNumber << '\n';
    }

    void read() 
    {
        std::cin >> brand;
        std::cin >> year;
        std::cin >> color;
        std::cin >> plateNumber;
    }

    int year;
    std::string color;
    int plateNumber;
    std::string brand;
};

int main() 
{
    int numCars;
    std::cout << "Enter the number of cars: ";
    std::cin >> numCars;

    Car* cars = new Car[numCars];

    for (int i = 0; i < numCars; ++i) 
    {
        std::cout << "Enter details for car " << (i + 1) << " (Brand, Manufacture Year, Color, and Plate Number): ";
        cars[i].read();
    }

    for (int i = 0; i < numCars; ++i) 
    {
        cars[i].print(i + 1);
    }

    std::string contorColor;
    std::cout << "Enter the color to count: ";
    std::cin >> contorColor;

    int contorMasini = 0;
    for (int i = 0; i < numCars; ++i) 
    {
        if (cars[i].color == contorColor) 
        {
            ++contorMasini;
        }
    }

    std::cout << "Number of cars with color " << contorColor << ": " << contorMasini << '\n';

    std::string contorBrand;
    std::cout << "Enter the brand to count: ";
    std::cin >> contorBrand;

    int contorBrandMasini = 0;
    for(int i = 0; i < numCars; ++i)
    {
        if(cars[i].brand == contorBrand)
        {
            contorBrandMasini++;
        }
    }

    std::cout << "Number of cars with the brand " << contorBrand << ": " << contorBrandMasini << '\n';

    delete[] cars;

    return 0;
}