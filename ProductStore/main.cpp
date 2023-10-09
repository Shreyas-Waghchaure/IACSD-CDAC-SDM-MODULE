#include <iostream>
#include "Product.h"
#include "ProductManager.h"
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	
		
	int choice;
	int count;
	ProductManager PrdMgr;
	
	cout<<"--------------Product Store--------------"<<endl;
	cout<<"Enter number of products you want to insert:";
	cin>>count;
	ProductManager prd[count];
	cout<<"1.Add Product\n 2.Update Product Details \n 3.Delete Product \n 4.Display Product \n 5.Exit";
	
	do{
		cout<<"Enter choice:"<<endl;
		cin>>choice;
		
		switch(choice){
			case 1:{
		
			
//				PrdMgr.add();
				for(int i = 0;i<count;i++){
					prd[i].add();
				}
				
				break;
			}
			case 4:{
				for(int i = 0;i<count;i++){
					prd[i].display();
				}
				break;
			}
		}
	
	}while(choice != 5);
	return 0;
}
