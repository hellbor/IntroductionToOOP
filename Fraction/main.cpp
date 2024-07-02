#include"Fraction.h"

//#define CONSTRUCTORS_CHECK
//#define ARITHMETICAL_OPERATORS_CHECK
//#define COMPARISON_OPERATORS
//#define IOSTREAM_CHECK
//#define CONVERSIONS_FROM_OTHER_TO_CLASS
//#define CONVERSIONS_HOME_WORK

void main()
{
	setlocale(LC_ALL, "");

#ifdef CONSTRUCTORS_CHECK
	Fraction A;			//Default constructor
	A.print();

	Fraction B = 5;		//Single-argument constructor
	B.print();

	Fraction C(1, 2);
	C.print();

	Fraction D(2, 3, 4);
	D.print();
#endif // CONSTRUCTORS_CHECK

#ifdef ARITHMETICAL_OPERATORS_CHECK
	Fraction A(2, 3, 4);
	A.print();
	Fraction B(3, 4, 5);
	B.print();
	//A.to_improper().print();
	//A.to_proper().print();

	//Fraction C = A / B;
	//C.print();

	A *= B;
	A.print();
	A /= B;
	A.print();
#endif // ARITHMETICAL_OPERATORS_CHECK

#ifdef COMPARISON_OPERATORS

	cout << (Fraction(1, 2) == Fraction(5, 10)) << endl;
	//cout << (Fraction(1, 2) != Fraction(5, 10)) << endl;
	//cout << (Fraction(1, 2) > Fraction(5, 10)) << endl;
	//cout << (Fraction(1, 2) < Fraction(5, 10)) << endl;
	//cout << (Fraction(1, 2) >= Fraction(5, 10)) << endl;
	//cout << (Fraction(1, 2) <= Fraction(5, 10)) << endl;

#endif // COMPARISON_OPERATORS

#ifdef IOSTREAM_CHECK
	Fraction A(3, 5);
	cout << A << endl;

	Fraction B;
	cout << "Введите простую дробь: "; cin >> B;
	cout << B << endl;
	cin >> B;
#endif // IOSTREAM_CHECK

#ifdef CONVERSIONS_FROM_OTHER_TO_CLASS
	Fraction A = (Fraction)5;	//Conversion from less to more (from 'int' to 'Fraction')
					//Single-argument constructor
	cout << A << endl;

	cout << delimiter << endl;

	Fraction B;	//Default constructor
	cout << delimiter << endl;
	B = Fraction(8);		//Conversion from less to more (from 'int' to 'Fraction')
	//CopyAssignment
	cout << delimiter << endl;
	cout << B << endl;

	cout << delimiter << endl;
#endif // CONVERSIONS_FROM_OTHER_TO_CLASS

#ifdef CONVERSIONS_HOME_WORK
	Fraction A = 2.75;
	cout << A << endl;
#endif // CONVERSIONS_HOME_WORK

	Fraction A(2, 3, 4);
	A.to_improper();
	cout << A << endl;

	int a = (int)A;
	cout << a << endl;
	cout << A << endl;

	double da = (double)A;
	cout << da << endl;
}