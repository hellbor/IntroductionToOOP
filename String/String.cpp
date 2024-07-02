#include"String.h"

/// -------------------------------------------------///

/////////////////////////////////////////////////////////////////////////
//////////		Определение класса (Class definition)		////////////
int String::get_size()const
{
	return size;
}
const char* String::get_str()const
{
	return str;
}
char* String::get_str()
{
	return str;
}


//			Constructors:
String::String(int size) :size(size), str(new char[size] {})
{
	//this->size = size;
	//this->str = new char[size] {};
	cout << "Constructor:\t" << this << endl;
}
String::String(const char str[]) :String(strlen(str) + 1)
{
	//this->size = strlen(str) + 1;
	//Функция strlen() возвращает размер строки в символах,
	//и нам нужно добавить еще один байт для NULL-Terminator-a
	//this->str = new char[size] {};
	for (int i = 0; i < size; i++)this->str[i] = str[i];
	cout << "Constructor:\t" << this << endl;
}
String::String(const String& other) :String(other.str)
{
	//Deep copy (Побитовое копирование):
	//this->size = other.size;
	//this->str = new char[size]{};
	//for (int i = 0; i < size; i++)this->str[i] = other.str[i];
	cout << "CopyConsructor:\t" << this << endl;
}
String::String::String(String&& other)noexcept :size(other.size), str(other.str)	//r-value reference
{
	//Shallow copy:
	//this->size = other.size;
	//this->str = other.str;	//Shallow copy

	//Reset other:
	other.size = 0;
	other.str = nullptr;
	cout << "MoveConstructor:\t" << this << endl;
}
String::~String()
{
	delete[] str;
	cout << "Destructor:\t\t" << this << endl;
}

//			Operators:
String& String::operator=(const String& other)
{
	//Deep copy (Побитовое копирование):
	if (this == &other)return *this;
	delete[] this->str;
	this->size = other.size;
	this->str = new char[size] {};
	for (int i = 0; i < size; i++)this->str[i] = other.str[i];
	cout << "CopyAssignment:\t\t" << this << endl;
	return *this;
}
String& String::operator=(String&& other)noexcept //r-value reference
{
	if (this == &other)return *this;
	delete[] this->str;
	this->size = other.size;
	this->str = other.str;
	other.size = 0;
	other.str = nullptr;
	cout << "MoveAssignment:\t\t" << this << endl;
	return *this;
}
char& String::operator[](int i)
{
	return str[i];
}
const char& String::operator[](int i)const
{
	return str[i];
}

//			Methods:
void String::print()const
{
	cout << "Obj:\t\t" << this << endl;
	cout << "Size:\t\t" << size << endl;
	cout << "Addr:\t\t" << &str << endl;
	cout << "Str:\t\t" << str << endl;
	cout << delimiter << endl;
}

String operator+(const String& left, const String& right)
{
	//cout << delimiter << endl;
	cout << "Operator + " << endl;
	String buffer(left.get_size() + right.get_size() - 1);
	//buffer.print();
	for (int i = 0; i < left.get_size(); i++)
		buffer[i] = left[i];
	//buffer.get_str()[i] = left.get_str()[i];
	for (int i = 0; i < right.get_size(); i++)
		buffer[i + left.get_size() - 1] = right[i];
	//buffer.get_str()[i + left.get_size() - 1] = right.get_str()[i];
	return buffer;
}
std::ostream& operator<<(std::ostream& os, const String& obj)
{
	return os << obj.get_str();
}

//////////		Конец определение класса (Class definition end)		/////
/////////////////////////////////////////////////////////////////////////
