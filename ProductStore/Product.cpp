#include "Product.h"

#include<iostream>
using namespace std;

Product::Product(){
}
Product::Product(int id, string title,string desc,double uPrice,int qty,int likes)
{
	this->id = id;
	this->title = title;
	this->description = desc;
	this->unitPrice = uPrice;
	this->quantity = qty;
	this->likes = likes;
}

Product::~Product()
{
}

void Product::setId(int id){
	this->id = id;
}
int Product::getId(){
	return id;
}
void Product::setTitle(string title){
	this->title = title;
}
string Product::getTitle(){
	return title;
}

void Product::setDesc(string desc){
	this->description = desc;
}
string Product::getDesc(){
	return description;
}
void Product::setPrice(double price){
	this->unitPrice = price;
}
double Product::getPrice(){
	return unitPrice;
}
void Product::setQty(int qty){
	this->quantity = qty;
}
int Product::getQty(){
	return quantity;
}
void Product::setLikes(int likes){
	this->likes = likes;
}
int Product::getLikes(){
	return likes;
}
