#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <string>
#include <cstdlib>
#include "drag.h"

using namespace std;

pojazd id;
pojazd pkt;
pojazd race;
pojazd Nazwa;
pojazd punkty;
game w;
game g;
przeciwnicy samochod;
car_stat wagen = car_stat(0, 0.0, 0);


void menu()
{
	
	int n=0;
	cout << "Drag Race Project\n";
	cout << "------------------\n";
	cout << "1. Start\n";
	cout << "2. Twórcy\n";
	cout << "3. Zasady\n ";
	cout << "4. Wyjœcie\n ";
	cout << "------------------\n";
	cin >> n;
	switch (n)
	{
	case 1:
		system("CLS");
		gamemenu();
		break;
	case 2:
		system("CLS");
		cout << "Twórca" << endl;
		cout << "------------" << endl;
		cout << "Jan Pêkala" << endl;
		cout << "------------" << endl;
		cout << "Copyright 2021\n";
		cout << endl;
		cout << "Wciœnij enter aby powróciæ\n";
		backtomenu();
		break;
	case 3:
		system("CLS");
		cout << "1. Aby wygraæ musisz wygraæ 5 wyœcigów" << endl;
		cout << "2. Nie szukaj b³edów, poniewa¿ gra jest ich pe³na" << endl;
		cout << "3. Baw siê dobrze" << endl;
		cout << "4. Œcigaj siê ulubionymi pojazdami" << endl;
		cout << "5. Je¿eli przegrasz 5 wyœcigów przegrywasz" << endl;
		cout << "6. Natomiast je¿eli wygrasz 5 wyœcigów jesteœ królem" << endl;
		cout << endl;
		cout << "Wciœnij enter aby powróciæ\n";
		backtomenu();
		break;
	case 4:
		system("Exit");
		break;
	}
}
void backtomenu()
{
	int klawisz;
	do
	{
		klawisz = _getch();
		system("CLS");
		cout << "Wciœnij enter aby powróciæ\n";
		
	} while (klawisz != 13);
	menu();
}
void stat()
{
	system("CLS");
	cout << "Wybierz statystki dla swojego pojazdu:\n";
	cout << "Moc: 90 | Przypieszenie 10.5 | Waga 1500 | <--- Wybierz a\n";
	cout << "Moc: 115 | Przypieszenie 10.5 | Waga 1300 | <--- Wybierz z\n";
	int klawisz;
	do
	{
		klawisz = _getch();
		system("CLS");
		if (klawisz == 97)
		{
			wagen = car_stat(90, 10.5, 1500);
			cout << "Aby rozpocz¹æ rozgrywkê wciœnij spacjê.\n";
			spacja_zostaje_wcisnieta();
		}
		else if (klawisz == 122)
		{
			wagen = car_stat(115, 10.5, 1300);
			cout << "Aby rozpocz¹æ rozgrywkê wciœnij spacjê.\n";
			spacja_zostaje_wcisnieta();
		}
		else
		{
			cout << "Wybierz statystki dla swojego pojazdu:\n";
			cout << "Moc: 90 | Przypieszenie 10.5 | Waga 1500 | <--- Wybierz a\n";
			cout << "Moc: 115 | Przypieszenie 10.5 | Waga 1300 | <--- Wybierz z\n";
		}
	} while (klawisz != 97 || klawisz != 122);
	
}
void gamemenu()
{

	int n = 0;
	system("CLS");
	cout << "Wybierz swój pojazd\n";
	cout << "------------------\n";
	cout << "1. Toyota Supra\n";
	cout << "2. Dodge Challenger III\n";
	cout << "3. Subaru WRX STI\n ";
	cout << "------------------\n";
	cin >> n;
	switch (n)
	{
		
	case 1:
		system("CLS");
		cout << "Wybra³eœ Toyota Supra\n";
		PlaySound(TEXT("start.wav"), NULL, SND_SYNC);
		id.numer = 1;
		Nazwa.typ = "Toyota Supra";
		stat();
		break;
	case 2:
		system("CLS");
		cout << "Wybra³eœ Dodge Challenger III\n";
		PlaySound(TEXT("start.wav"), NULL, SND_SYNC);
		id.numer = 2;
		Nazwa.typ = "Dodge Challenger III";
		stat();
		break;
	case 3:
		system("CLS");
		cout << "Wybra³eœ Subaru WRX STI\n";
		PlaySound(TEXT("start.wav"), NULL, SND_SYNC);
		id.numer = 3;
		Nazwa.typ = "Subaru WRX STI";
		stat();
		break;
	}
}
void spacja_zostaje_wcisnieta()
{
	int klawisz;
	
	do
	{
		klawisz = _getch();
		system("CLS");
		cout << "Wciœnij spacjê aby rozpocz¹æ rozgrywkê\n";
		
	} while (klawisz != 32);
	dragmenu();
}
void backtodragmenu()
{
	int klawisz;
	
	do
	{
		klawisz = _getch();
		system("CLS");
		cout << "Wciœnij enter aby powrócic\n";
		
	} while (klawisz != 13);
	dragmenu();
}
void dragmenu()
{
	system("CLS");
	int n = 0;
	system("CLS");
	cout << "------------------\n";
	cout << "1. Rozpocznij wyœcig\n";
	cout << "2. Zobacz pojazd\n";
	cout << "------------------\n";
	cin >> n;
	switch (n)
	{
	case 1:
		wyscig();
		break;
	case 2:
		if(id.numer==1)
		{
			system("CLS");
			cout << R"(                           
                           
 ___ _   _ _ __  _ __ __ _ 
/ __| | | | '_ \| '__/ _` |
\__ \ |_| | |_) | | | (_| |
|___/\__,_| .__/|_|  \__,_|
          | |              
          |_|              )";
			cout << endl<<"Aby wróciæ wciœnij enter";
			backtodragmenu();
		}
		else if (id.numer == 2)
		{
			system("CLS");
		cout<<R"(
           _______________
         //~~~~~~~~~~~~~~~\\  |
    0  / /_________________\ \| 0
     ---------------------------
   / /======|=D=O=D=G=E=|======\ \
   \_____________________________/
   \    _______       _______    /
   |\ _/|__|__|\_____/|__|__|\_ /|
   |      |`V'  `---'  `V'|      |
   |______|               |______|   
			)"<<"\n";
		cout << "Aby wróciæ wciœnij enter";
		backtodragmenu();
		}
		else if (id.numer == 3)
		{
			system("CLS");
			cout << R"(                                   
                                              88000GGGGGGGG000888888888888                          
                                         0f1;;iii11iiiii;;;:fGf1i;;;;;;;;iii1tLC0                   
                                      0f;..;1ffft11iii111:iLf:,,,,:;1i:,;t111i;:iL8 8888888808      
                                   Gt:.:1LCCLfftt1i;;;:,;LL;,,:,::::;1;:,LLtttt1;:;f8888888888      
                                Gt:,:tCGCLfttftt1i;::,,tC1;ft11i:::::;i;,1L1111111;:iC       88888  
                              Li, :1fft1ii11i;ii::,,,;CC,,88880C;;iiii11:;111iiiii11i;f 888888808   
                   888i;;::;;f00GGCLLLLLLLLfftttttttL8G.,:ii1111ttfffLLLLLCCGGGG0000000888888888G8  
          880000000000GGGGGGGG 8888                  8008000888  88 88888 8888888888800888888888Lt  
      8000000000888888  8888888888888888888888888888880080000000000000GG00G0000000000000088800GGGt8 
    0GGGG0088    8880GCCCGGGft1G888888888  8800088800CCG00000000000000000GGGGGGGGGGGGGG0Ct11tCGCCC8 
   0Ctf;i:i8fii11ff11tt1LCff1tG88888888 0L1:,..,;1C00CCG0GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGi.    .fCCCL8
  0G0C, . L81,:;i111ttttttfLG8800000880f,         .1G0GGGGGGGGGGGGGGGGGGGGCGGGGGCCCCCC: ,:::. :ffft0
 0G000CLfC808888800000GG0088800000000G;  ,::i;,;.   1GCCCCCGGGGGGGGGGCCCCCCCCCCLLLLLL: :,;;;:..ttif 
 Gti;;iifGGGGGGGGGGGGGGGGGGGGGGGGGCCG;  ::i.i::i:,  .CCCCCCCCCCCLLLLLLfffffftttttt1t; .,;i1i:: i1L  
 01:,::, ...,,tGCCCCCCCCCGGGGGGGCG;ff  :i.,1i;1;:i.  tLfffffffffffffffffffLfffffftf1   :;tf;t,f0    
 0Lf;,..       LCLftfLCCCCCCCCCCGf;G:  ;.,it1tti,t, .LLLLLCCLLLLLLLffftt11iiiii;;i:    .iiiiii      
 0LCCLft11t1111LCCCCCCCCCCCCCCCCGLCC.  ;::;tfft.if. ,t111ii;;:::,,.....       .....      .,,,fCG8   
       8800GGGCLLLLLCCCCCCCCCCCCLLL1   ,;,i,;,.;f: ..                  ...,,::;;ii1tttttffLC8088    
  800CLft11ii;:,...........,.......     .ii:1;ii.       ..,,,:;;i1ttfLCCG00888                      
880GCLti;:,..                              ..,..:i1tfLLCGG0888                                      
     88880GCCLft11ii;;;;;;;;;ii11ttfffLfffffLC08                                                                                                                                          
)";
			cout << endl << "Aby wróciæ wciœnij enter";
			backtodragmenu();
		}
		break;
	}
}
void wyscig()
{
	if (w.win == 5)
	{
		system("CLS");
		cout << R"(
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@tiiiC@@@@8tiiiC@@@GffffffffL0@@@@LffG@@@@@GffC@@@@@@@@@LffffL0@@@@@@@@@@@@@8Lfffff0LfG@CffffG@@0ffff@@
@@0t;;iC@@8fi;iL@@Gfi;;;;;;;;;iL0@81;;L@@@@@f;;t@@@@@@@@@f;;;;;10@@@@@@@@@@@8fi;;;;1G1;f@t;;;;iC@Gi;;;@@
@@@0t;;iC0f;;1C@@G1;;;;iiiii;;;;t081;;L@@@@@f;;t@@@@@@@@@8f;;;;;10@@@@@@@@@8f;;;;;1081;f@f;;;;;iCCi;;;@@
@@@@0fi;ii;;10@@@f;;;if0888Gti;;;C@1;;L@@@@@f;;t@@@@@@@@@@8f;;;;;10@@@08@@8f;;;;;10@81;f@f;;;;;;ii;;;;@@
@@@@@@0fi;1C8@@@@f;;;f@@@@@@81;;;C@1;;L@@@@@L;;t@@@@@@@@@@@8fi;;;;1CGti1CGt;;;;;10@@81;f@f;;;;i;;;;;;;@@
@@@@@@@81;L@@@@@@fi;;if0888Gti;;iC81;;L@@@@@f;;t@@@@@@@@@@@@8fi;;;;;;;;;;;;;;;;10@@@81;f@f;;;;LLi;;;;;@@
@@@@@@@81;L@@@@@@8fi;;;iiiii;;;iL@@C1;itG0Gti;if@@@@@@@@@@@@@8fi;;;;itCfi;;;;;10@@@@81;f@t;;;;C@Ci;;;;@@
@@@@@@@0i;f@@@@@@@8Gftiiiiiiitf0@@@@8C1ii1i1fC08@@@@@@@@@@@@@@8GffffG8@@0LfffC8@@@@@8LfC@Cffff0@@Cffff@@
@@@@@@Gtii1L8@@@@@@@@800000008@@@@@@@@800008@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@)";
		PlaySound(TEXT("youwin.wav"), NULL, SND_SYNC);
		cout << endl << endl;
		cout << "Aby powróciæ do g³ównego menu wciœnij enter\n";
		cout << "Aby wyjœæ wciœnij spacje\n";
		endgame();
		
	}
	else if ( g.lose== 0)
	{
		system("CLS");
		cout << R"(                                                                                                    
                                                                                                    
                  000000000000      80000000      800008       00000 8CCCCCCCCCCCCCCCCG             
                8L...,,,,,,,,:0    8L..,,..,C88   C....i88   8G,...; L    .,,,,,,,,,,,;8            
               t,.  1GGGGGGGG0    1:,  fG1  .,t   L     ,:0 f:,    :8L    ;000000000008             
            81i. .fL0          81i. ,fL8 0CL. ,;i8L       ;i,      : L    ;                         
            0,   ,8   8LfffffL80.   :      8,   .0L                : L    ,111111t8                 
            0,   ,8   G;:    .G0.   ,LCCCCCL.   .0L    .;:  .::    : L    .iiiiii18                 
            8:.. ,C0    8:   .G0.    ,,,,,,,    .0L    ;80:.t80.   : L    i                         
             001  .,L8888:   .00.   ,G00000G,   .0L    ;  808 0.   : L    i88888888888              
               0Cf. ,::::    .G0.   :8     8,   .0L    ;      0.   : L    .:::::::::::i8            
                 8Lfffffffffff88ffffL      8LfffL 0ffffC      8LfffL 0ffffffffffffffffL8            
                                                                                                    
                                                                                                    
               GLLLLLLLLLLLG   8CCCCG       CCCCC 8ffffffffffffttttf88CLLLLLLLLLLLLC8               
             0G;  ,,,,,,,  :G0 G.   ;      8,   ,0G.    :::::::::::;0f    .,,,,,,.  f00             
            8:.  ,G888880:  .,00.   ;      8,   .0G.   :8      8888  f    i000888f  ..i             
            0,   ,8      :   .G0.   ;8     8,   .0G.   :8            f    1      L    ;             
            0,   ,8     8:   .G0.   .;iG C1i.   .0G.   .::::::;G     f    1    fi:    ;             
            0,   ,8     8:   .G81i.    if;    ,it8G.   .1tttttt0     f    :ffft, .i1iif             
            0,   ,8      :   .G   1:,       ,:t   G.   :             f    .:,    ,LC8               
            8:.  ,G000000:  .,0    8L..   .,C8    G.   :G00000000000 f    18G,.     f08             
             0Gi .,,,,,,,. :G0      80G: ;00      G.....,,,,,,,,,,,:0L    1  GG;    .,1             
               0CCCCCCCCCCCG           GCG        8GGGGGCCCCCCCCCCCG88CCCC0    0CCCCCCG             
                                                                                              )";
		PlaySound(TEXT("gameover.wav"), NULL, SND_SYNC);
		cout << endl << endl;
		cout << "Aby powróciæ do g³ównego menu wciœnij enter\n";
		cout << "Aby wyjœæ wciœnij spacje\n";
		endgame();
		
	}
	else {
		system("CLS");
		cout << "Wyœcig nr " << race.nr_wyscigu << endl;
		int n = 0;
		cout << "Wybierz przeciwnika\n";
		cout << "------------------\n";
		cout << "1. Audi A4\n";
		cout << "2. Porsche Panamera\n";
		cout << "3. Ford Mustang\n ";
		cout << "4. Porsche 911 GT3\n ";
		cout << "5. Nissan GTR\n ";
		cout << "------------------\n";
		cout << "6. Upgrade pojazdu\n ";
		cin >> n;
		switch (n)
		{
		case 1:
			loading();
			system("CLS");
			cout << Nazwa.typ << " VS " << "Audi A4" << endl;
			loading();
			system("CLS");
			if (wagen.przyspieszenie < samochod.audi)
			{
				cout << "Zwyciêstwo!!!" << endl;
				punkty.coins += 10;
				w.win += 1;
				race.nr_wyscigu += 1;
				loading();
				wyscig();
			}
			else
			{
				g.lose -= 1;
				cout << "Przegra³eœ :(" << endl;
				race.nr_wyscigu += 1;
				punkty.coins += 5;
				loading();
				wyscig();
			}
			break;
		case 2:
			loading();
			system("CLS");
			cout << Nazwa.typ << " VS " << "Porsche Panamera" << endl;
			loading();
			system("CLS");
			if (wagen.przyspieszenie < samochod.porscheP)
			{
				cout << "Zwyciêstwo!!!" << endl;
				punkty.coins += 10;
				w.win += 1;
				race.nr_wyscigu += 1;
				loading();
				wyscig();
			}
			else
			{
				cout << "Przegra³eœ :(" << endl;
				race.nr_wyscigu += 1;
				g.lose -= 1;
				punkty.coins += 5;
				loading();
				wyscig();
			}
			break;
		case 3:
			loading();
			system("CLS");
			cout << Nazwa.typ << " VS " << "Ford Mustang" << endl;
			loading();
			system("CLS");
			if (wagen.przyspieszenie < samochod.Ford)
			{
				cout << "Zwyciêstwo!!!" << endl;
				punkty.coins += 10;
				w.win += 1;
				race.nr_wyscigu += 1;
				loading();
				wyscig();
			}
			else
			{
				cout << "Przegra³eœ :(" << endl;
				race.nr_wyscigu += 1;
				g.lose -= 1;
				punkty.coins += 5;
				loading();
				wyscig();
			}
			break;
		case 4:
			loading();
			system("CLS");
			cout << Nazwa.typ << " VS " << "Porsche GT3" << endl;
			loading();
			system("CLS");
			if (wagen.przyspieszenie < samochod.PorscheGT3)
			{
				cout << "Zwyciêstwo!!!" << endl;
				punkty.coins += 10;
				w.win += 1;
				race.nr_wyscigu += 1;
				loading();
				wyscig();
			}
			else
			{
				cout << "Przegra³eœ :(" << endl;
				race.nr_wyscigu += 1;
				g.lose -= 1;
				punkty.coins += 5;
				loading();
				wyscig();
			}
			break;
		case 5:
			loading();
			system("CLS");
			cout << Nazwa.typ << " VS " << "Nissan GTR" << endl;
			loading();
			system("CLS");
			if (wagen.przyspieszenie < samochod.Nissan)
			{
				cout << "Zwyciêstwo!!!" << endl;
				punkty.coins += 10;
				w.win += 1;
				race.nr_wyscigu += 1;
				loading();
				wyscig();
			}
			else
			{
				cout << "Przegra³eœ :("<<endl;
				race.nr_wyscigu += 1;
				g.lose -= 1;
				punkty.coins += 5;
				loading();
				wyscig();
			}
			break;
		case 6:
			
			wagen.Show();
			cout << endl << endl;
			cout << "Aby wykonaæ upgrade wciœnij a\n";
			cout << "Aby powróciæ do menu wciœnij z\n";
			upgrade();
			break;
		}
	}
	
}
void loading()
{
	for (int i = 0; i < 3; i++)
	{
		cout << ".";
		Sleep(500);
	}
}
void upgrade()
{
	
	int klawisz;
	do
	{
		klawisz = _getch();
		system("CLS");
		if (klawisz == 97) {
			if (punkty.coins >= 10)
			{
				wagen.UpgradeW();
				punkty.coins = punkty.coins - 10;
				loading();
				wyscig();
			}
			else if (punkty.coins < 10)
			{
				system("CLS");
				cout << "Masz za ma³o punktów !!! :(\n";
				loading();
				wyscig();
			}
		}
		else if (klawisz == 122)
		{
			wyscig();
		}
		else {
			cout << "Aby wykonaæ upgrade wciœnij a\n";
			cout << "Aby powróciæ do wyœcigu wciœnij z\n";
		}
	} while (klawisz != 32 || klawisz != 13);
	
}
car_stat::car_stat(int km2, double przyspieszenie2, int waga2)
{
	km = km2;
	przyspieszenie = przyspieszenie2;
	waga = waga2;
};
void car_stat::Show()
{
	system("CLS");
	cout << "Twoje punkty: " << punkty.coins << endl;
	cout << "  _______________________\n";
	cout << " |Moc|Przyspieszenie|Waga|\n";
	cout << " |_______________________|\n";
	cout << " |" << km << "    " << przyspieszenie << "     " << waga << "  |\n";
	cout << " |___|______________|____| \n";
}
void car_stat::UpgradeW()
{
	przyspieszenie = przyspieszenie - 1;
	km = km + 30;
	waga = waga - 50;

}
void endgame()
{
	int klawisz;
	do
	{
		klawisz = _getch();
		system("CLS");
		if (klawisz == 13) {
			menu();
		}
		else if (klawisz == 32)
		{
			system("exit");
				
		}
		else {
			cout << "Aby powróciæ do g³ównego menu wciœnij enter\n";
			cout << "Aby wyjœæ wciœnij spacje\n";
		}
	} while (klawisz != 97 || klawisz != 122);
}