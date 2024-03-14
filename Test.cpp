// Fill out your copyright notice in the Description page of Project Settings.


#include "CalendarTest.h"

bool UCalendarTest::isLeapYear(int year)
{
	bool bisLeap;
	//년도를 넘겨받아 윤년/평년을 판단해 윤년이면 true, 평년이면 false를 리턴
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		bisLeap = true;
	}
	else
	{
		bisLeap = false;
	}

	return bisLeap;
}

int UCalendarTest::lastDay(int year, int month)
{
	//인수로 년, 월을 입력받아 그 달의 마지막 날짜를 리턴하는 함수
	int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	monthDays[1] = isLeapYear(year) ? 29 : 28;

	return monthDays[month-1];
}


int UCalendarTest::totalDay(int year, int month, int day)
{
	int total = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
	for (int i = 1; i < month; i++)
	{
		total += lastDay(year, i);
	}
	return total +day;
}

int UCalendarTest::weekDay(int year, int month, int day)
{
	int weekDays;
	weekDays = totalDay(year, month, day) % 7;
	return weekDays;
}

int UCalendarTest::startDay(int year, int month)
{
	int day;
	for (int i = 0; i < weekDay(year, month, 1); i++)
		day = i;
	return day;
}
