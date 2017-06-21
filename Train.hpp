#ifndef _TRAIN_HPP_
#define _TRAIN_HPP_

#include <iostream>
#include <string>
#include <set>
#include <ctime>
#include <fstream>
#include <sstream>

//###############################################################

class Train
{
	short numberT[20];
	short numberP[20];

	std::string city1[20];
	std::string city2[20];

	short hoursF[20];
	short hoursS[20];
	short minutesF[20];
	short minutesS[20];
	

        short counter[6][20];

public:

	Train();
	~Train() {};
	
	void imput();

	
	void NTsort();
	void NPsort();
	void Fsort();
	void Ssort();
	void TimesortF();
	void TimesortS();

	short* getNT();
	short* getNP();
        std::string*  getC1();
	std::string*  getC2();
	short* getHF();
	short* getHS();
	short* getMF();
	short* getMS();
        short* getCounter(short _c);
	void Randomize();

       AnsiString getTime(short _h, short _m);
       AnsiString StrToAnsi (std::string _s);


	void quickSort(short arr[],short help[], short l, short r);
};


inline short* Train::getNT() 
{
	return numberT;
}

inline short* Train::getNP()
{
	return numberP;
}

inline short* Train::getHF()
{
	return hoursF;
}

inline short* Train::getHS() 
{
	return hoursS;
}

inline short* Train::getMF() 
{
	return minutesF;
}

inline short* Train::getMS()
{
	return minutesS;
}

inline  std::string*  Train::getC1() 
{
	return city1;
}

inline std::string* Train::getC2()
{
	return city2;
}

inline short* Train::getCounter(short _c)
{
	return counter[_c];
}


#endif // _TRAIN_HPP_