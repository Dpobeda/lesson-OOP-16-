// ������������.
/*
class ...
{
	����: ������, ������, ��������� }} 1 - ������������, 2 - ����������. 
	������: ������, ������, ���������, �����������. ���. }} 1 - ������������, 2 - ����������.
};

���� ������������.

1. ������. |
2. ������. | vitrual
3. ���������. |

// ��� �������� ������ ��������� ������� ������� �����. (override) ��������� �� ����������� �� ������� ������������. 
1. virtual (� ������) -> override

override ������� � �����. 
1. ���������� ��������.
2. ������ ���������� ����������.
3. ������� ��� (virtual), � ������� ������ �����.

virtual ������ ���� � ������� ������, � ����� ���������� ����� ������ � ������ (override).
*/

#include <iostream>
#include "Plant.h"

/*
class Base
{
public:
	int publicMember;
	Base() 
	{
		std::cout << this << " Base object created\n";
	}

	Base(int a, int b, int c) : publicMember(a), protectedMember(b), privateMember(c)
	{
		std::cout << this << " Base object created\n";
	}

	~Base()
	{
		std::cout << this << " Base object destructed\n";
	}

protected:
	int protectedMember;
private:
	int privateMember;
};

class Derived : public Base
{
	
public:
	void bar()
	{
		this->protectedMember;
		this->publicMember;
	}

	Derived() : Base()
	{
		std::cout << this << " Derived Base object created\n";
	}

	Derived(int a, int b, int c) : Base(a, b, c) // ����� ����� �������� ��� Base().
	{
		std::cout << this << " Derived Base object created\n";
	}
	
	~Derived()
	{
		std::cout << this << " Derived Base object destructed\n";
	}

};

class Derived2 : protected Base
{
	// publicMember ������� ���������.
	// protectedMember ���������� ����������.
	// privateMember ����������.
public:

	Derived2()
	{
		std::cout << this << " Derived2 Base object created\n";
	}

	~Derived2()
	{
		std::cout << this << " Derived2 Base object destructed\n";
	}


public:
	int pole;
};

class Derived3 : private Base
{
public:
	Derived3()
	{
		std::cout << this << " Derived3 Base object created\n";
	}

	~Derived3()
	{
		std::cout << this << " Derived3 Base object destructed\n";
	}
};
*/

int main()
{
	/*Base obj(2, 5, 7);
	obj.publicMember;
	Derived objDer;
	obj.publicMember;
	Derived2 objDer2;
	objDer2.pole;
	Derived3 obj3;*/

	/*
	// ������� ������� ������ ��� �������� � ������.
	
	// ������. plant
	// ����� �����, ������ ������������� ����������� ������������� �������� ��� �������� (������� ��� ��������).
	// �������� ���� ��� � ���� (����� ����� ������ ��� ��������).
	
	// ��������. Harwest
	// ������� ����� �������� ������ ����� ����� � ���� ������.
	// �������, ���������, �������. ���� � ������� �� �� ����� ���� ������.
	*/

    
	Plant* plant = new Plant ("Cheshny", 3, "Red");
	Plant* plant2 = new Plant ("Apple", 97, "Green");
	Plant* plant3 = new Plant ("Strawberries", 4, "Red");
	plant->ShowData("Cheshny", 3, "Red");
	plant2->ShowData("Apple", 97, "Green");
	plant3->ShowData("Strawberries", 4, "Red");

	return {};
}