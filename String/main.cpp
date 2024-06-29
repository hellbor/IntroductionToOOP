#include"String.h"

//#define CONSTRUCTORS_CHECK
#define OPERATOR_PLUS_CHECK
//#define CALLING_CONSTRUCTORS


void main()
{
	setlocale(LC_ALL, "");
#ifdef CONSTRUCTORS_CHECK
	String str1;		//Default constructor
	str1.print();

	//String str2 = 8;	//Conversion from 'int' to 'String'
	String str2(8);		//SingleArgument 'int' constructor
	str2.print();

	String str3 = "Hello";
	str3 = str3;
	str3.print();

	String str4 = "World";
	str4.print();

	cout << str3 << endl;
	cout << str4 << endl;

	//String str5 = str3 + str4;
	String str5;
	str5 = str3 + str4;		//Copy assignment
	str5.print();
	cout << str5 << endl;
#endif // CONSTRUCTORS_CHECK

#ifdef OPERATOR_PLUS_CHECK
	String str1 = "Hello";
	String str2 = "World";

	cout << delimiter << endl;
	//String str3 = str1 + str2;
	String str3;
	str3 = str1 + str2;	//Move assignment
	cout << str3 << endl;
	cout << delimiter << endl;

	cout << str1 << endl;
	cout << str2 << endl;
#endif // OPERATOR_PLUS_CHECK

#ifdef CALLING_CONSTRUCTORS
	String str1;	//Default constructor
	str1.print();

	//Single argument constructor 'int'
	//String str2 = 8;	//explicit constructor так вызвать невозможно
	String str2(8);		//explicit constructor можно вызвать только так
	str2.print();

	String str3 = "Hello";	//Single-Argument constructor 'char'
	str3.print();

	String str4();	//Здесь НЕ вызывается никакой конструктор, и не создается объект
					//здесь объявляется функция str4(), которая не принимает никаких параметров
					// и возвращает значение типа 'String'
					//т.е., таким образом DefaultConstructor вызвать невозможно
	//str4.print();
	//Если нужно вызвать DefaultConstructor, это делается следующим образом:
	String str5{};	//Явный вызов конструктора по умолчанию
	str5.print();

	//String str6 = str3;	//CopyConstructor
	// String str6(str3);	//CopyConstructor
	String str6{ str3 };	//CopyConstructor
	str6.print();
	//Следовательно, абсолютно любой конструктор можно вызвать при помощи () и {}
#endif // CALLING_CONSTRUCTORS


}