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
		cout << "\n������� �����\n";
		cin >> hour, cin.ignore(1) >> minute;
	}

};


class Railway_station_information_system: public time
{
protected:

	string number_of_train;
	time Dispatch_time;
	string Destination_station;
	char Show[5][50]{ "\n��������� ������ � �������\n","\n������� �����\n","\n������� ����� �����������\n","\n������� ������� ����������\n"};

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
		cin >> number_of_train;//-������� �������� �� ���� ������ ����
		cout << Show[2];
		Dispatch_time.AddTime()//-������� �������� �� ���� ��������� �������
	}


};



int main()
{


	return 0;
}