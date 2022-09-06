#pragma once

class Car {
protected:
	string _make;
	string _model;
	short _year;

	Car(string make, string model, short year) :_make(make), _model(model), _year(year) {}

public:


	string get_make()const { return _make; }

	string get_model()const { return _model; }

	short get_year()const { return _year; }

	virtual int number_of_pedals() {
		return 0;
	}

	virtual void to_string() {
		cout << "Make: " << _make << endl
			<< "Model: " << _model << endl
			<< "Year: " << _year << endl;
	}
};

class Manual : public Car {
	string _type;
	int _number_of_gear;

public:
	Manual(int number_of_gears, string type, string make, string model, short year) :Car(make, model, year){
		this->_type = type;
		this->_number_of_gear = number_of_gears;
	}

	int number_of_pedals() override { return 2; }

	void to_string() override {
		cout << "Make: " << _make << endl
			<< "Model: " << _model << endl
			<< "Year: " << _year << endl
			<< "Type: " << _type << endl
			<< "Number Of Gears: " << _number_of_gear << endl;
		cout << "Number Of Pedals: ";
		cout << number_of_pedals() << endl << endl;
	}

};

class Automatic :public Car{

	string _type;
	int _number_of_gear;

public:

	Automatic(int number_of_gears, string type, string make, string model, short year) :Car(make, model, year) {
		this->_type = type;
		this->_number_of_gear = number_of_gears;
	}



	int number_of_pedals() override { return 3; }

	void to_string() override {
		cout << "Make: " << _make << endl
			<< "Model: " << _model << endl
			<< "Year: " << _year << endl
			<< "Type: " << _type << endl
			<< "Number Of Gears: " << _number_of_gear << endl;
		cout << "Number Of Pedals: ";
		cout << number_of_pedals() << endl << endl;
	}
};
