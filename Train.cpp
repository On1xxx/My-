#include "Train.hpp"


Train::Train()
{
	Randomize();

}

void Train::Randomize()
{
	srand(time(NULL));
	
	short buff, buff1, buff2, buff3;

	bool feel = false;

	//--------------------------------------------------------------------------

	for (int i = 0; i < 20; i++)
	{
		feel = false;
		while (!feel)
		{
			feel = true;
			buff = rand() % 200 + 1;

			for (int j = 0; j < i; j++)
			{
				if (numberT[j] == buff) feel = false;
			}
		
			if (feel) numberT[i] = buff;		
		}

		//--------------------------------------------------------------------------

		feel = false;

		while (!feel)
		{
			feel = true;
			buff = rand() % 20 + 1;
		
			for (int j = 0; j < i; j++)
			{
				if (numberP[j] == buff) feel = false;
			}
			if (feel)	numberP[i] = buff;
		}

		//--------------------------------------------------------------------------

		buff1 = rand() % 24;
		buff2 = rand() % 24;

		(buff1 == 24) ? hoursF[i] = 0 : hoursF[i] = buff1;
		(buff2 == 24) ? hoursS[i] = 0 : hoursS[i] = buff2;

		//--------------------------------------------------------------------------

		buff3 = rand() % 60 + 1;
		minutesF[i] = buff3;
		buff3 = rand() % 60 + 1;
		minutesS[i] = buff3;

		//--------------------------------------------------------------------------
	}

        	for (int i = 0; i < 6; i++)
			for (int j = 0; j < 20; j++)
				counter[i][j] = j;

                imput();
        	NTsort();
		NPsort();
		Fsort();
		Ssort();
		TimesortF();
		TimesortS();
}
void Train::imput()
{
	std::ifstream ifs;
	ifs.open("�ities.txt");
	
	for (int i = 0; i < 20; i++)
		ifs >> city1[i];
	ifs.close();
	
	int j = 19;
	for (int i = 0; i < 20; i++, j--)
		city2[j] = city1[i];
}

void Train::quickSort(short temp[],short help[],short l, short r)
{
        short arr[20];
	memcpy(arr, temp, sizeof(short)*20);

	int x = arr[l + (r - l) / 2];
	
	int i = l;
	int j = r;

	while (i <= j)
	{
		while (arr[i] < x) i++;
		while (arr[j] > x) j--;
		if (i <= j)
		{
                        std::swap(arr[i], arr[j]);
			std::swap(help[i], help[j]);
			i++;
			j--;
		}
	}
	if (i < r)
		quickSort(arr, help, i, r);

	if (l < j)
		quickSort(arr, help, l, j);
}



void Train::NTsort()
{
	quickSort(numberT, counter[0], 0, 19);

}

void Train::NPsort()
{
	quickSort(numberP, counter[1], 0, 19);

}

void Train::Fsort()
{
	std::string temp[20];
	for (int i = 0; i < 20; i++)
		temp[i] = city1[i];

	for (int i = 0; i < 20; i++)
	{

		for (int j = 19; j > i; j--)
		{
			if (temp[j] < temp[j - 1])
			{
				std::swap(temp[j], temp[j - 1]);
				std::swap(counter[2][j], counter[2][j - 1]);
			}
		}
	}
}

void Train::Ssort()
{
	std::string temp[20];
	for (int i = 0; i < 20; i++)
		temp[i] = city2[i];

	for (int i = 0; i < 20; i++)
	{

		for (int j = 19; j > i; j--)
		{
			if (temp[j] < temp[j - 1])
			{
				std::swap(temp[j], temp[j - 1]);
				std::swap(counter[3][j], counter[3][j - 1]);
			}
		}
	}
}

void Train::TimesortF()
{
	short temp[20];
	memcpy(temp, hoursF, sizeof(short) * 20);

	for (int i = 0; i < 20; i++)
		temp[i] = temp[i] * 60 + minutesF[i];

	quickSort(temp, counter[4], 0, 19);
}

void Train::TimesortS()
{
	short temp[20];
	memcpy(temp, hoursS, sizeof(short) * 20);

	for (int i = 0; i < 20; i++)
		temp[i] = temp[i] * 60 + minutesS[i];

	quickSort(temp, counter[5], 0, 19);
}

AnsiString Train::getTime(short _h, short _m)
{
	std::stringstream time;

	if ((_h < 10) && (_m < 10))
	{
		time << '0' << _h << ':' << '0' << _m;
	
	}
	else if (_h < 10)
	{
		time << '0' << _h << ':' << _m;
		

	}
	else if (_m < 10)
	{
		time << _h << ':' << '0' << _m;
		
	}
	else
		 time << _h << ':'  << _m;

        std::string res = time.str();
       AnsiString s = AnsiString (res.c_str());

	return   s;
}

AnsiString Train::StrToAnsi (std::string _s)
{
        AnsiString res = AnsiString(_s.c_str());
        return res;
}

