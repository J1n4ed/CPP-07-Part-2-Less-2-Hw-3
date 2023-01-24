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
    std::wstring city;
    std::wstring street;
    int buildingNum;
    int flatNum;
    int postIndex;
};

/*
    Функция печати экземпляра адреса
*/
void print_address(const address &);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    address adr1 = { L"Москва", L"Шоссе Энтузиастов", 220, 82, 150380};
    address adr2 = { L"Новосибирск", L"Проспект Ленина", 51, 23, 250580 };
    address adr3 = { L"Мурманск", L"ул. Коминтерна", 18, 5, 850180 };

    print_address(adr1);
    print_address(adr2);
    print_address(adr3);

    std::wcout << std::endl;

    system("pause");
    return 0;
}

/*
    Функция печати экземпляра адреса
*/
void print_address(const address& adr)
{
    std::wcout << std::endl << L"----------------------------------";
    std::wcout << L"\nГород: " << adr.city
        << L"\nУлица: " << adr.street
        << L"\nНомер дома: " << adr.buildingNum
        << L"\nНомер квартиры: " << adr.flatNum
        << L"\nПочтовый индекс: " << adr.postIndex;
    std::wcout << "\n----------------------------------\n";        
}