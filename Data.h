#pragma once
#include <iostream>
class Data {
public:
	int NumberPas;
	int Height;
	int Weight;
	int Age;
	Data(int temp_NumberPas, int temp_Height, int temp_Weight, int temp_Age) {
		NumberPas = temp_NumberPas;
		Height = temp_Height;
		Weight = temp_Weight;
		Age = temp_Age;
		std::cout << "Person has been created";
	}
	void print_data(){
		std::cout << "NumberPas:" << NumberPas << " Height:" << Height << " Weight:" << Weight << "  Age:" << Age << std::endl;
	}
	void SetNumberPas(Data* Data, int NumberPas) {
		Data->NumberPas = NumberPas;
	}
	void SetHeight(Data* Data, int Height) {
		Data->NumberPas = NumberPas;
	}
	void SetWeight(Data* Data, int Weight) {
		Data->NumberPas = NumberPas;
	}
	void SetAge(Data* Data, int Age) {
		Data->NumberPas = NumberPas;
	}
};