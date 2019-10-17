#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct food{
	int price;
	char* quality;
};

// char* getFood(){
	// srand(time(NULL));
	// int x = rand() % 3;
	// if 		(x == 0) return "Pizza";
	// else if (x == 1) return "Sushi";
	// else 			 return "Burger";
// }

struct food showStruct(struct food item){
	printf("Price: %d\nQuality: %s\n", item.price, item.quality);
	return item;
}

void changeValues(struct food *item, int newPrice, char* newQuality){
	item -> price = newPrice;
	item -> quality = newQuality;
}

int main(){
	//Initialization
	struct food pizza;
	pizza.price = 2;
	pizza.quality = "Nice";
	
	//Test showStruct function
	showStruct(pizza);
	
	//Test changeValues function
	changeValues(&pizza, 5, "Delicious");
	printf("\nAfter changeValues function\n");
	showStruct(pizza);
}