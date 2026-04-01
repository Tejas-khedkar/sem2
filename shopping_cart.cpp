#include <iostream>
using namespace std;

class ShoppingCart{
	public:
		double total;
		int ItemCount;
		
		ShoppingCart& addItem(double price){
			this->total+=ItemCount * price;
			return *this;
		}
		
		ShoppingCart& applyDiscount(double percent){
			this->total = total - (total*(percent/100));
			return *this;
		}
		
		void displayTotal(){
			cout<<" Total price = "<<total<<endl;
			cout<<" Item count = "<<ItemCount<<endl;
		}
};

int main(){
	ShoppingCart cart;
	cart.ItemCount= 2;
	cart.addItem(500).addItem(1000).applyDiscount(10).displayTotal();
	return 0;
} 


