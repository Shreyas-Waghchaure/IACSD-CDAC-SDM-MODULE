#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H
#include "Product.h"
class ProductManager
{
		Product product;
		
		int id;
		string title;
		string description;
		double unitPrice;
		int quantity;
		int likes;
	public:
		ProductManager();
		ProductManager(int id,string name,string desc,double uPrice,int qty,int likes);
		void add();
		void del();
		void update();
		void display();
};

#endif
