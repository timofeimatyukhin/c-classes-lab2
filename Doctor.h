#pragma once
#include <iostream>
#include "Data.h"
#include "Patient.h"
class Doctor {
public:
	Data Data;
	Patient Patient;
	int Count;
	Doctor(Data temp_Data, Patient Patient, int temp_Count) {
		Data = temp_Data;
		Patient = temp_Paient;
		Count = temp_Count;
		std::cout << "Person has been created";
	}
	void print_doctor() {
		std::cout << "NumberPas:" << Doctor.Data.NumberPas << " Height:" << Doctor.Data.Height << " Weight:" << Doctor.Data.Weight << "  Age:" << Doctor.Data.Age << std::endl;
	}
	
	void PrintPatients(Doctor Doctor) {
		for (int i = 0; i < Doctor.Count; i++) {
			PrintPatient(Doctor.Patient[i]);
		}
	}
};