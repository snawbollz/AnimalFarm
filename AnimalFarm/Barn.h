#pragma once
#include <vector>
#include "Chicken.h"
#include "Cow.h"
#include "Horse.h"
#include "Animal.h"

#ifndef BARN_H
#define BARN_H

class Barn {
private:
	std::vector<Chicken> coop;
	std::vector<Cow> pen;
	std::vector<Horse> stalls;
public:
	Barn();
	void feedChickens();
	void feedCows();
	void feedHorses();
};
#endif // !BARN_H

Barn::Barn() {
	coop.push_back(Chicken("Joe",5,5));
	coop.push_back(Chicken("Big John",17.75,30));

	pen.push_back(Cow("Fsteak",20,100));
	pen.push_back(Cow("Cheese", 19.10, 85.5));

	stalls.push_back(Horse("Juan",40,200));
	stalls.push_back(Horse("Trent", 45.25, 210.5));
}

void Barn::feedChickens() {
	for (int i = 0; i < coop.size(); i++) {
		coop[i].eat();
		std::cout << "\n";
	}
}

void Barn::feedCows() {
	for (int i = 0; i < pen.size(); i++) {
		pen[i].eat();
		std::cout << "\n";
	}
}

void Barn::feedHorses() {
	for (int i = 0; i < stalls.size(); i++) {
		stalls[i].eat();
		std::cout << "\n";
	}
}