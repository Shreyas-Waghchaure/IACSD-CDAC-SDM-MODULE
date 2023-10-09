#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
using namespace std;

class Product
{
	private:
		int id;
		string title;
		string description;
		double unitPrice;
		int quantity;
		int likes;
		
	public:
		Product();
		Product(int id,string name,string desc,double uPrice,int qty,int likes);
		~Product();
		
		
		void setId(int id);
		int getId();
		void setTitle(string title);
		string getTitle();
		void setDesc(string desc);
		string getDesc();
		void setPrice(double price);
		double getPrice();
		void setQty(int qty);
		int getQty();
		void setLikes(int likes);
		int getLikes();
		
};

#endif
