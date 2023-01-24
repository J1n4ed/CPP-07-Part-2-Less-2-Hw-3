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
    std::wstring city;
    std::wstring street;
    int buildingNum;
    int flatNum;
    int postIndex;
};

/*
    ������� ������ ���������� ������
*/
void print_address(const address &);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    address adr1 = { L"������", L"����� �����������", 220, 82, 150380};
    address adr2 = { L"�����������", L"�������� ������", 51, 23, 250580 };
    address adr3 = { L"��������", L"��. ����������", 18, 5, 850180 };

    print_address(adr1);
    print_address(adr2);
    print_address(adr3);

    std::wcout << std::endl;

    system("pause");
    return 0;
}

/*
    ������� ������ ���������� ������
*/
void print_address(const address& adr)
{
    std::wcout << std::endl << L"----------------------------------";
    std::wcout << L"\n�����: " << adr.city
        << L"\n�����: " << adr.street
        << L"\n����� ����: " << adr.buildingNum
        << L"\n����� ��������: " << adr.flatNum
        << L"\n�������� ������: " << adr.postIndex;
    std::wcout << "\n----------------------------------\n";        
}