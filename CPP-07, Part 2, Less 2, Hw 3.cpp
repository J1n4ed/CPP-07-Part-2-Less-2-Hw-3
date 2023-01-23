// CPP-07, Part 2, Less 2, Hw 3.cpp

/*
  23.01.2023
  ���� 2, ������� 2
  ������ 3, ����� ���������
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
    ������� ������ ���������� ������
*/
void printAddress(const address &);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    address adr1 = { "������", "����� �����������", 220, 82, 150380 };    
    address adr2 = { "�����������", "�������� ������", 51, 23, 250580 };
    address adr3 = { "��������", "��. ����������", 18, 5, 850180 };

    printAddress(adr1);
    printAddress(adr2);
    printAddress(adr3);

    std::cout << std::endl;

    system("pause");
    return 0;
}

/*
    ������� ������ ���������� ������
*/
void printAddress(const address& adr)
{
    std::cout << std::endl << "----------------------------------";
    std::cout << "\n�����: " << adr.city
        << "\n�����: " << adr.street
        << "\n����� ����: " << adr.buildingNum
        << "\n����� ��������: " << adr.flatNum
        << "\n�������� ������: " << adr.postIndex;
    std::cout << "\n----------------------------------\n";        
}