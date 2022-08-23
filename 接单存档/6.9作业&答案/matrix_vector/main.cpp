#include <iostream>
#include "matrix.h"
#include "vector.h"

using namespace std;

Matrix multiply(Matrix &a, Matrix &b)
{
	if(a.col != b.row)
	{
		cout<<"the two matrix cannot multiply"<<endl;
		exit(0);
	}
	Matrix  c(a.row, b.col);
	for(int i=0; i<a.row; i++)
	{
		for(int j=0; j<b.col; j++)
		{
			double ss = 0.;
			for(int k=0; k<a.col; k++)
				ss += a.data(i,k) * b.data(k,j);

			c.data(i,j) = ss;
		}
	}

	return c;
}

int main()
{
	Matrix a(3, 4);
	a.init(3.);
	a.data(2,3)= 2; a.data(1,3)= 1.; 
	a.print();
	cout << "----------------" << endl;
	
	Matrix b(a);
	b.print();
	b.~Matrix();
	a.print();  
	cout << "----------------" << endl;

	Matrix c(4, 3);
	c.init(2.);
	c.data(2,3)=5.; c.data(1,4)= 6.;
	c.print();
	cout<<"----------------"<<endl;

	Matrix d = a.multiply(c);
	d.print();
	cout << "----------------" << endl;

	Matrix dd= multiply(a, c);
	dd.print();
	cout << "----------------" << endl;

	Matrix &e = a.multiply2(c);
	e.print();
	cout << "----------------" << endl;

	Vector f(4);
	f.data(0) = 0.5;
	f.data(1) = 1.;
	f.data(2) = 2.;
	f.data(3) = 3.;
	Vector &g = a.multiply(f);
	g.print();

	return 0;
}