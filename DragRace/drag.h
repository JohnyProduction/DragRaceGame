#include <iostream>
#include <math.h>
#include <string>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <string>
using namespace std;

void menu();
void gamemenu();
void spacja_zostaje_wcisnieta();
void dragmenu();
void wyscig();
void backtodragmenu();
void loading();
void backtomenu(); 
void upgrade();
void stat();
void endgame();

class pojazd
{
public:
	string typ;
	int numer=0;
	int lvl=0;
	int nr_wyscigu=1;
	int coins = 11;

	
};
class game
{
public:
	int win=0;
	int lose=5;
};
class car_stat
{
	public:
		int km ;
		double przyspieszenie;
		int waga;
		car_stat(int km, double przyspieszenie, int waga);
		void Show();
		void UpgradeW();
};


class przeciwnicy
{
public:
	const double audi = 10.6;
	const double porscheP = 9.6;
	const double Ford = 8.6;
	const double PorscheGT3 = 7.6;
	const double Nissan = 6.6;
};


