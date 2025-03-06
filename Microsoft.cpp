#include <iostream>
#include <string>



int main() {
    int age = 25;
    float height = 5.9f;
    double weight = 75.5;
    char initial = 'A';
    bool isStudent = true;

    int numbers[5] = {1, 2, 3, 4, 5};
    char name[10] = "John";

    int* pAge = &age;
    float* pHeight = nullptr;

    struct Person {
        std::string name;
        int age;
    };

    Person person1 = {"Alice", 30};

    class Car {
    public:
            std::string brand;
            int year;

            void display() {
                std::cout << "Brand: " << brand << ", Year: " << year <<
                                std::endl;
            }
    };


    Car myCar = {"Toyota", 2020};

    const int daysInWeek = 7;
    const float pi = 3.14159f;

    auto num = 42;
    auto rate = 3.14;
    auto flag = true;

        std::cout << "Age: " << age << "\nHeight: " << height << "\nWeight: " <<
    weight << "\n";
        std::cout << "Initial: " << initial << "\nIs Student: " << isStudent <<
    "\n";
        std::cout << "First number: " << numbers[0] << "\nName: " << name <<
    "\n";
        std::cout << "Person1: " << person1.name << ", " << person1.age << "\n";
        myCar.display();

     return 0;
 }
