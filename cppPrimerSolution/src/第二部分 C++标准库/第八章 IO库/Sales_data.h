/*
 * This file contains code from "C++ Primer, Fifth Edition", by Stanley B.
 * Lippman, Josee Lajoie, and Barbara E. Moo, and is covered under the
 * copyright and warranty notices given in that book:
 * 
 * "Copyright (c) 2013 by Objectwrite, Inc., Josee Lajoie, and Barbara E. Moo."
 * 
 * 
 * "The authors and publisher have taken care in the preparation of this book,
 * but make no expressed or implied warranty of any kind and assume no
 * responsibility for errors or omissions. No liability is assumed for
 * incidental or consequential damages in connection with or arising out of the
 * use of the information or programs contained herein."
 * 
 * Permission is granted for this code to be used for educational purposes in
 * association with the book, given proper citation if and when posted or
 * reproduced.Any commercial use of this code requires the explicit written
 * permission of the publisher, Addison-Wesley Professional, a division of
 * Pearson Education, Inc. Send your request for permission, stating clearly
 * what code you would like to use, and in what specific way, to the following
 * address: 
 * 
 * 	Pearson Education, Inc.
 * 	Rights and Permissions Department
 * 	One Lake Street
 * 	Upper Saddle River, NJ  07458
 * 	Fax: (201) 236-3290
*/ 

#ifndef SALES_DATA_H
#define SALES_DATA_H

#include<iostream>
#include<string>
class Sales_data
{
	friend Sales_data add(const Sales_data& item1, const Sales_data& item2);
	friend std::ostream& print(std::ostream& os, Sales_data& item);
	friend std::istream& read(std::istream& is, Sales_data& item);
private:
	std::string BookString;
	double OnePrice;
	int SaleNumber;
	double TotalPrice = OnePrice * SaleNumber;
	
	
public:
	Sales_data& combine(const Sales_data& rhs);
	Sales_data(const std::string& s1, double s2, int s3) 
		:BookString(s1), OnePrice(s2), SaleNumber(s3) {};
	Sales_data() = default;
	const std::string& isbn() {
		return BookString;
	}
	Sales_data& operator= (const Sales_data& trans) {
		OnePrice = trans.OnePrice;
		SaleNumber = trans.SaleNumber;
		BookString = trans.BookString;
		TotalPrice = trans.TotalPrice;
		return *this;
	}
};

inline Sales_data& Sales_data::combine(const Sales_data& rhs) {
	SaleNumber += rhs.SaleNumber;
	TotalPrice += rhs.TotalPrice;
	return *this;
}
std::istream& read(std::istream& is, Sales_data& item)
{
	is >> item.BookString >> item.SaleNumber >> item.OnePrice;
	//std::cout << item.BookString <<' '<<  item.SaleNumber << std::endl;
	item.TotalPrice = item.OnePrice * item.SaleNumber;
	return is;
}
std::ostream& print(std::ostream& os, Sales_data& item)
{
	os << item.BookString << "\t" << item.SaleNumber << "\t" << item.TotalPrice << "\t" << 
	item.TotalPrice/item.SaleNumber	<< std::endl;
	return os;
}
Sales_data add(const Sales_data& item1, const Sales_data& item2) {
	Sales_data temp = item1;
	temp = temp.combine(item2);
	temp.OnePrice = temp.TotalPrice / temp.SaleNumber;
	return temp;
}
#endif
