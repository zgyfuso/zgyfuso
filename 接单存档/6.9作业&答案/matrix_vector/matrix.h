#pragma once
#include <iostream>
#include "vector.h"
using namespace std;

class Matrix
{
public:
	Matrix(int _row, int _col){
		row = _row;
		col = _col;
		p_data = new double[row * col];
	}

	Matrix(const Matrix& _ma)
	{
		row = _ma.row;
		col = _ma.col;
		p_data = new double[row * col];
		for (int i = 0; i < row*col; i++)
			p_data[i] = _ma.p_data[i];
	}
	~Matrix()
	{
		delete[] p_data;
	}

	void init(double value)
	{
		for (int i = 0; i < row*col; i++)
			p_data[i] = value;
	}

	double getdata(int i, int j)
	{
		return p_data[i*col + j];
	}
	double& data(int i, int j)
	{
		return p_data[i*col + j];
	}

	// this matrix * _ma
	Matrix multiply(Matrix& _ma)
	{
		if (col != _ma.row)
			cerr << "this matrix.col != _ma.row" << endl;

		int rownew = row, colnew = _ma.col;
		Matrix c(rownew, colnew);
		for (int i = 0; i < rownew; i++)
		{
			for (int j = 0; j < colnew; j++)
			{
				double sum = 0.;
				for (int k = 0; k < col; k++)
					sum += p_data[i*col + k] * _ma.p_data[k*_ma.col + j];

				c.p_data[i*colnew + j] = sum;
			}
		}
		return c;
	}

	Vector& multiply(Vector& _vec)
	{
		if (col != _vec.getsize())
			cerr << "size is not correct!" << endl;
		Vector *c = new Vector(row);
		for (int i = 0; i < row; i++)
		{
			double sum = 0.;
			for (int j = 0; j < col; j++)
				sum += p_data[i*col+j] * _vec.data(j);
			c->data(i) = sum;
		}
		return *c;
	}

	Matrix& multiply2(Matrix& _ma)
	{
		if (col != _ma.row)
			cerr << "this matrix.col != _ma.row" << endl;

		int rownew = row, colnew = _ma.col;
		Matrix *c= new Matrix(rownew, colnew); 
		for (int i = 0; i < rownew; i++)
		{
			for (int j = 0; j < colnew; j++)
			{
				double sum = 0.;
				for (int k = 0; k < col; k++)
					sum += p_data[i*col + k] * _ma.p_data[k*_ma.col + j];

				c->p_data[i*colnew + j] = sum;
			}
		}
		return *c;
	}

	friend Matrix multiply(Matrix &a, Matrix &b);

	void print()
	{
		cout<<"Output matrix "<<endl;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
				cout << p_data[i*col + j] << "  ";
			cout << endl;
		}
	}

private:
	int    row, col;
	double *p_data;
};