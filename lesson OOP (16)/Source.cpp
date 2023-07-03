// Наследование.
/*
class ...
{
	Поля: Приват, Публик, Протектед }} 1 - Наследование, 2 - Реализация. 
	Методы: Приват, Публик, Протектед, диструкторы. Все. }} 1 - Наследование, 2 - Реализация.
};

Типы наследования.

1. Приват. |
2. Публик. | vitrual
3. Протектед. |

// Они включают внутри программу базовую кодовые слова. (override) проверяет на соотвествие на правила полиморфизма. 
1. virtual (в начале) -> override

override пишется в конце. 
1. Совподение названия.
2. Полное совподение аргументов.
3. Помечен как (virtual), в базовом классе метод.

virtual должен быть в обычном классе, а когда наследуешь нужно писать в методе (override).
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

	Derived(int a, int b, int c) : Base(a, b, c) // Плохо будет работать без Base().
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
	// publicMember остаётся публичным.
	// protectedMember становится защищенным.
	// privateMember недоступен.
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
	// Создать базовые классы для растений и плодов.
	
	// Урожай. plant
	// Класс плоды, должен предоставлять возможность пользователем узнавать своё название (задаётся при создании).
	// Узнавать свой вес и цвет (также можно задать при создании).
	
	// Растения. Harwest
	// Базовый класс растения должен знать какой у него размер.
	// Большой, маленький, средний. Цвет и сколько на нём может быть плодов.
	*/

    
	Plant* plant = new Plant ("Cheshny", 3, "Red");
	Plant* plant2 = new Plant ("Apple", 97, "Green");
	Plant* plant3 = new Plant ("Strawberries", 4, "Red");
	plant->ShowData("Cheshny", 3, "Red");
	plant2->ShowData("Apple", 97, "Green");
	plant3->ShowData("Strawberries", 4, "Red");

	return {};
}