// CPP-07, Part 2, Less 2, Hw 3.cpp

/*
  23.01.2023
  Тема 2, Занятие 2
  Работа 3, Вывод структуры
  CPP-07
  @j1n4ed
*/

#include <iostream>
#include <Windows.h>

struct address
{
    std::string city;
    std::string street;
    int buildingNum;
    int flatNum;
    int postIndex;
};

/*
    Функция печати экземпляра адреса
*/
void printAddress(const address &);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    address adr1 = { "Москва", "Шоссе Энтузиастов", 220, 82, 150380 };    
    address adr2 = { "Новосибирск", "Проспект Ленина", 51, 23, 250580 };
    address adr3 = { "Мурманск", "ул. Коминтерна", 18, 5, 850180 };

    printAddress(adr1);
    printAddress(adr2);
    printAddress(adr3);

    std::cout << std::endl;

    system("pause");
    return 0;
}

/*
    Функция печати экземпляра адреса
*/
void printAddress(const address& adr)
{
    std::cout << std::endl << "----------------------------------";
    std::cout << "\nГород: " << adr.city
        << "\nУлица: " << adr.street
        << "\nНомер дома: " << adr.buildingNum
        << "\nНомер квартиры: " << adr.flatNum
        << "\nПочтовый индекс: " << adr.postIndex;
    std::cout << "\n----------------------------------\n";        
}