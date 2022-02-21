#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

struct time
{
protected:

	int hour;
	int minute;
	int seconds;

public:

	time()
	{
		hour = 0;
		minute = 0;
	}

	time(int hour, int minute)
	{
		this->hour = hour;
		this->minute = minute;
	}

	void AddTime()
	{
		cout << "\nВведите время\n";
		cin >> hour, cin.ignore(1) >> minute;
	}

};


class Railway_station_information_system: public time
{
protected:

	string number_of_train;
	time Dispatch_time;
	string Destination_station;
	char Show[5][50]{ "\nЗаполните данные о поездах\n","\nВведите номер\n","\nВведите время отправления\n","\nВведите станцию назначения\n"};

public:

	Railway_station_information_system()
	{
		number_of_train = "None";
		Destination_station = "None";
	}

	Railway_station_information_system(string number_of_train, time Dispatch_time, string Destination_station)
	{
		this->number_of_train = number_of_train;
		this->Dispatch_time = Dispatch_time;
		this->Destination_station = Destination_station;
	}

	void AddInformation()
	{
		cout << Show[0];
		cout << Show[1];
		cin >> number_of_train;//-сделать проверку на ввод только цифр
		cout << Show[2];
		Dispatch_time.AddTime()//-Сделать проверку на ввод неверного времени
	}


};



int main()
{


	return 0;
}