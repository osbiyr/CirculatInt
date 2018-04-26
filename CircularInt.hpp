#pragma once
#include <vector>
#include <string>

#include <iostream>

#include <sstream>

using namespace std;

class CircularInt {

private:

public:

	int first, last, temp;

	CircularInt(int min, int max);

	CircularInt(const CircularInt& other);

	friend const CircularInt operator+(const int num, const CircularInt& c);

	friend const CircularInt operator-(const int num, CircularInt const& c);

	friend const CircularInt operator*(const int num, const CircularInt& c);

	friend const CircularInt operator+(CircularInt const& c1, CircularInt const& c2);

	friend const CircularInt operator-(const CircularInt& c1, const CircularInt& c2);

	friend const CircularInt operator-(const CircularInt& c, const int num);

	friend const CircularInt operator/(CircularInt const& c, const int num);

	friend const CircularInt operator+(const CircularInt& c, const int num);

	friend const CircularInt operator*(const CircularInt& c, const int num);

	friend const CircularInt operator%(const CircularInt& c, const int num);

	friend ostream& operator<<(std::ostream& os, CircularInt const& obj);

	friend istream& operator>>(istream& input, CircularInt& obj);

	CircularInt operator-();

	CircularInt& operator++();

	CircularInt operator++(const int other);

	CircularInt& operator--();

	CircularInt operator--(const int other);

	friend bool operator<=(const CircularInt c1, const CircularInt c2);

	friend bool operator<(const CircularInt c1, const CircularInt c2);

	CircularInt& operator=(const int num);

	CircularInt& operator=(const CircularInt& c);

	friend bool operator!=(const CircularInt c1, const CircularInt c2);

	friend bool operator>=(const CircularInt c1, const CircularInt c2);

	friend bool operator>(const CircularInt c1, const CircularInt c2);

	friend bool operator==(const CircularInt c1, const CircularInt c2);



	CircularInt& operator*=(const int other);

	CircularInt& operator%=(const int other);

	CircularInt& operator-=(const int other);

	CircularInt& operator/=(const int other);

	CircularInt& operator-=(const CircularInt& other);

	CircularInt& operator+=(const int other);

	CircularInt& operator*=(const CircularInt& other);

	CircularInt& operator+=(const CircularInt& other);

	vector<int> operator / (int other);
	friend int operator>=(const CircularInt&c, int other);
	friend int operator>=(int other, const CircularInt&c);
	friend int operator>(const CircularInt&c, int other);
	friend int operator>(int other, const CircularInt&c);
	friend int operator<=(const CircularInt&c, int other);
	friend int operator<=(int other, const CircularInt&c);
	friend int operator<(const CircularInt&c, int other);
	friend int operator<(int other, const CircularInt&c);
	friend int operator==(const CircularInt&c, int other);
	friend int operator==(int other, const CircularInt&c);
	friend int operator!=(const CircularInt&c, int other);
	friend int operator!=(int other, const CircularInt&c);
	//friend CircularInt operator -(const CirculatInt&c);
	friend CircularInt operator -=(const CircularInt&c, int other);
	friend CircularInt operator-=(int other, const CircularInt&c);
	friend CircularInt operator-=(const CircularInt&b, const CircularInt&c);
	friend CircularInt operator*(const CircularInt&b, const CircularInt&c);
	friend CircularInt operator*=(const CircularInt&c, int other);
	friend CircularInt operator*=(int other, const CircularInt&c);
	friend CircularInt operator*=(const CircularInt&b, const CircularInt&c);
	friend CircularInt operator+(const CircularInt&c);
	friend CircularInt operator+=(const CircularInt&c, const int other);
	friend CircularInt operator+=(const int other, const CircularInt&c);
	friend CircularInt operator+=(const CircularInt&b, const CircularInt&c);



};
