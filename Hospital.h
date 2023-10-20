#pragma once
#include "Patient.h"
#include "Doctor.h"
class Hospital {
public:
	Patient Patient[50];
	Doctor Doctor[50];
	int count_patients;
	int count_doctors;
	Hospital(Patient Patient, Doctor Doctor, int count_patients, int count_doctors) {
		Hospital->Patient = Patient;
		Hospital->Doctor = Doctor;
		Hospital->count_patients = count_patients;
		Hospital->count_doctors = count_doctors;
	}
	void SetPatient(Hospital* Hospital, Patient Patient) {
		Hospital->Patient = Patient;
	}
	void SetDoctor(Hospital* Hospital, Doctor Doctor) {
		Hospital->Doctor = Doctor;
	}
};