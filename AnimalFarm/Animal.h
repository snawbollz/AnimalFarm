#pragma once
#include <iostream>
#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
protected:
	std::string name;
	double weight;
	double height;
private:
	void gainWeight();
public:
	Animal();
	Animal(std::string n, double w, double h);
	std::string getName()const;
	double getWeight()const;
	double getHeight()const;
	void setName(std::string n);
	void setWeight(double);
	void setHeight(double);
	//"virtual" makes the eat work in the subclass
	virtual void eat();
	
};
#endif // !BARN_H

Animal::Animal() {
	weight = 0.0;
	height = 0.0;
	name = " ";
}

Animal::Animal(std::string n, double w, double h) {
	weight = w;
	height = h;
	name = n;
}

double Animal::getWeight()const {
	return weight;
}

double Animal::getHeight()const {
	return height;
}

std::string Animal::getName()const {
	return name;
}

void Animal::setHeight(double h) {
	height = h;
}

void Animal::setWeight(double w) {
	weight = w;
}

void Animal::setName(std::string n) {
	name = n;
}

void Animal::eat() {

}

void Animal::gainWeight() {

}