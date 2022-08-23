#pragma once
#include <iostream>
using namespace std;

class Vector
{
public:
	Vector(int _size){
		size = _size;
		p_data = new double[size];
	}
	Vector(const Vector& _vec)
	{
		size = _vec.size;
		p_data = new double[size];
		for (int i = 0; i < size; i++)
			p_data[i] = _vec.p_data[i];
	}
	~Vector()
	{
		delete[] p_data;
	}

	void init(double value)
	{
		for (int i = 0; i < size; i++)
			p_data[i] = value;
	}

	int getsize()
	{
		return size;
	}

	double getdata(int i)
	{
		return p_data[i];
	}
	double& data(int i)
	{
		return p_data[i];
	}

	double DotProduct(Vector& _vec)
	{
		if (size != _vec.size)
			cerr << "this vector.size != _vec.size" << endl;

		double c = 0.;
		for (int i = 0; i < size; i++)
		{
			c += p_data[i] * _vec.p_data[i];
		}
		return c;
	}

	void print()
	{
		cout<<"output vector:"<<endl;
		for (int i = 0; i < size; i++)
			cout << p_data[i] << "  ";
	}

private:
	int    size;
	double *p_data;
};