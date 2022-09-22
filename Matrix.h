#pragma once

class Matrix {
public:
	Matrix();
	void read();
	void print() const;
	int getValue(int, int) const;
	void setValue(int, int, int);
	Matrix add(Matrix) const;
	Matrix multi(Matrix) const;
private:
	int mat[3][3];
	void initialization();
};