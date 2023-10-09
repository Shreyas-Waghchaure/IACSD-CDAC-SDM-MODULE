#include "ProductManager.h"
#include "Product.h"

ProductManager::ProductManager()
{
	
}
ProductManager::ProductManager(int id, string title,string desc,double uPrice,int qty,int likes)
{
	this->id = id;
	this->title = title;
	this->description = desc;
	this->unitPrice = uPrice;
	this->quantity = qty;
	this->likes = likes;
}

void ProductManager::add(){
		int id;
		string title;
		string description;
		double unitPrice;
		int quantity;
		int likes;
	cout<<"Enter id:";
	cin>>id;
		cout<<"Enter title:";
	cin>>title;
		cout<<"Enter description:";
	cin>>description;
		cout<<"Enter unit Price:";
	cin>>unitPrice;
		cout<<"Enter quantity:";
	cin>>quantity;
		cout<<"Enter Like count:";
	cin>>likes;
	product.setId(id);
	product.setTitle(title);
	product.setDesc(description);
	product.setPrice(unitPrice);
	product.setQty(quantity);
	product.setLikes(likes);
	
}
void ProductManager::del(){
	
}
void ProductManager::update(){
	
}
void ProductManager::display(){
	cout<<"id:"<<product.getId()<<endl;
	cout<<"title:"<<product.getTitle()<<endl;
	cout<<"description:"<<product.getDesc()<<endl;
	cout<<"Unit Price:"<<product.getPrice()<<endl;
	cout<<"quantity:"<<product.getQty()<<endl;
}


