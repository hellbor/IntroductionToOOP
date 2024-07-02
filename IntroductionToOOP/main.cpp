#include"Point.h"

//#define STRUCT_POINT
//#define CONSTRUCTORS_CHECK
//#define DISTANCE_CHECK
//#define ASSIGNMENT_CHECK
//#define ARITHMETICAL_OPERATORS_CHECK
//#define COMPARISON_OPERATORS_CHECK

void main()
{
	setlocale(LC_ALL, "");

#ifdef STRUCT_POINT
	Point A;
	A.x = 2;
	A.y = 3;
	cout << A.x << "\t" << A.y << endl;

	Point* pA = &A;
	cout << pA->x << "\t" << pA->y << endl;
#endif // STRUCT_POINT

#ifdef CONSTRUCTORS_CHECK
	Point A;
	//A.set_x(2);
	//A.set_y(3);
	cout << A.get_x() << "\t" << A.get_y() << endl;
	A.print();

	Point B = 5;
	B.print();

	Point C(2, 3);
	C.print();

	Point D = C;	//Copy constructor
	D.print();

	Point E;
	E = D;			//Copy Assignment
	E.print();

#endif // CONSTRUCTORS_CHECK

#ifdef DISTANCE_CHECK
	Point A(2, 3);
	Point B(7, 8);

	A.print();
	B.print();

	cout << delimeter << endl;
	cout << "Расстояние от точки 'A' до точки 'B':" << A.distance(B) << endl;
	cout << delimeter << endl;
	cout << "Расстояние от точки 'B' до точки 'A':" << B.distance(A) << endl;
	cout << delimeter << endl;
	cout << "Расстояние между точками 'A' и 'B': " << distance(A, B) << endl;
	cout << delimeter << endl;
	cout << "Расстояние между точками 'B' и 'A': " << distance(B, A) << endl;
	cout << delimeter << endl;
#endif // DISTANCE_CHECK

#ifdef ASSIGNMENT_CHECK
	int a, b, c;
	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;

	Point A, B, C;

	cout << delimeter << endl;
	A = B = C = Point(2, 3);	//Point(2, 3) - явно вызываем конструктор
	//и создаем временный безымянный объект,
	//этот объект и передается как параметр в первый CopyAssignment.
	cout << delimeter << endl;
	A.print();
	B.print();
	C.print();
	cout << delimeter << endl;
#endif // ASSIGNMENT_CHECK

#ifdef ARITHMETICAL_OPERATORS_CHECK
	Point A(2, 3);
	A.print();

	Point B(7, 8);
	B.print();
	Point C = A + B;
	C.print();

	Point D = C++;
	C.print();
	D.print();
#endif // ARITHMETICAL_OPERATORS_CHECK

#ifdef COMPARISON_OPERATORS_CHECK

	//cout << (2 == 3) << endl;
	Point(2, 3);
	Point(7, 8);
	//cout << (A == B) << endl;
	cout << (Point(2, 3) == Point(7, 8)) << endl;
#endif // COMPARISON_OPERATORS_CHECK

	Point A(2, 3);
	cout << A << endl;
}