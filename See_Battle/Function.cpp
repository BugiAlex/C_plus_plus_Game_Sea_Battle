	#include<iostream>
	#include<Windows.h>

using namespace std;
//Функция стартового окна
void StartWindow() {

	char s = 176;
	char cd = 220;
	char cu = 223;
	char f = 32;


	cout << "\n\n\t" << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << cu << cu << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s;
	cout << "\n\t" << s << s << s << s << s << s << s << s << s << s << s << s << s << s << f << f << f << f << s << s << s << s << s << s << s << s << s << s << s << s << s << s;
	cout << "\n\t" << s << s << s << s << s << s << s << s << s << s << s << s << s << s << f << f << f << f << s << s << s << s << s << s << s << s << s << s << s << s << s << s;
	cout << "\n\t" << s << s << s << s << s << cu << cu << cu << cu << cu << cu << cu << cu << cu << cu << cu << cu << cu << cu << cu << cu << cu << cu << cu << cu << cu << cu << s << s << s << s << s;
	cout << "\n\t" << s << s << s << s << s << f << f << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << f << f << s << s << s << s << s << "\t _____  ______  _____";
	cout << "\n\t" << s << s << s << s << s << f << f << cu << cu << s << s << cu << cu << s << s << cu << cu << s << s << cu << cu << s << s << cu << cu << f << f << s << s << s << s << s << "\t/     \\|      |/     \\";
	cout << "\n\t" << s << s << s << s << s << s << s << cd << f << s << s << f << f << s << s << f << f << s << s << f << f << s << s << f << cd << s << s << s << s << s << s << s << "\t|   ___|   ___|   |   |";
	cout << "\n\t" << s << s << s << s << s << s << s << s << f << s << s << s << s << s << s << s << s << s << s << s << s << s << s << f << s << s << s << s << s << s << s << s << "\t|      |   ___|   |   |";
	cout << "\n\t" << s << s << s << s << s << s << s << s << cd << s << cu << cu << cu << f << f << s << s << f << f << cu << cu << cu << s << cd << s << s << s << s << s << s << s << s << "\t|___   |      |       |";
	cout << "\n\t" << s << s << s << s << cu << cu << cu << f << f << f << f << f << f << f << f << s << s << f << f << f << f << f << f << f << f << cu << cu << cu << s << s << s << s << "\t|      |      |   |   |";
	cout << "\n\t" << s << s << s << f << f << f << f << f << f << f << f << f << f << f << f << s << s << f << f << f << f << cd << f << f << f << f << f << f << f << s << s << s << "\t\\_____/|______|___|___|";
	cout << "\n\t" << s << s << s << s << f << f << f << f << f << f << f << f << f << f << f << s << s << f << f << f << cu << s << cu << f << f << f << f << f << s << s << s << s << "\t_______   _____  ______________________  _________";
	cout << "\n\t" << s << s << s << s << s << f << f << f << f << f << f << f << f << f << f << s << s << f << f << cd << f << s << f << cd << f << f << f << s << s << s << s << s << "\t|      \\/      \\|        |        |   |  |       |";
	cout << "\n\t" << s << s << s << s << s << s << f << f << f << f << f << f << f << f << f << s << s << f << f << f << cu << cu << cu << f << f << f << s << s << s << s << s << s << "\t|  __   |   |   |        |        |   |  |    ___|";
	cout << "\n\t" << s << s << s << s << s << s << s << f << f << f << f << f << f << f << f << s << s << f << f << f << f << f << f << f << f << s << s << s << s << s << s << s << "\t|      /|   |   |__    __|__    __|   |  |    __|_";
	cout << "\n\t" << s << s << s << s << s << s << s << cd << s << s << s << cd << f << f << cd << s << s << cd << f << f << cd << s << s << s << cd << s << s << s << s << s << s << s << "\t|  __  \\|       |  |  |     |  |  |   |__|       |";
	cout << "\n\t" << cu << cu << f << f << f << cu << cu << cu << f << f << f << cu << cu << cu << cu << f << f << cu << cu << cu << cu << f << f << f << cu << cu << cu << f << f << f << cu << cu << "\t|       |   |   |  |  |     |  |  |      |       | ";
	cout << "\n\t" << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << cd << "\t|_______|___|___|  |__|     |__|  |______|_______|";

	cout << "\n\n\n\t";
	system("pause");

}
//Функция заполниет массивы нулями
void inicializationArray(char arr[][11]) {

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			arr[i][j] = 32;
		}
	}
}

//Функция выводит на экран 2 игровых поля
void PrintField(char aP[][11], char aC[][11], HANDLE hStdOut) {

	char lu = 218;
	char ld = 192;
	char ru = 191;
	char rd = 217;
	char h = 196;
	char v = 179;
	char u = 194;
	char d = 193;
	char l = 195;
	char r = 180;
	char c = 197;
	char pr = 32;

	cout << "\n\t";
	cout << "\n\t    ";
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "A B C D E F G H I J";
	cout << "\t\t\t    A B C D E F G H I J";
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << lu << h << u << h << u << h << u << h << u << h << u << h << u << h << u << h << u << h << u << h << ru;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << lu << h << u << h << u << h << u << h << u << h << u << h << u << h << u << h << u << h << u << h << ru;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t 1 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aP[0][0] << v << aP[0][1] << v << aP[0][2] << v << aP[0][3] << v << aP[0][4] << v << aP[0][5] << v << aP[0][6] << v << aP[0][7] << v << aP[0][8] << v << aP[0][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t 1 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aC[0][0] << v << aC[0][1] << v << aC[0][2] << v << aC[0][3] << v << aC[0][4] << v << aC[0][5] << v << aC[0][6] << v << aC[0][7] << v << aC[0][8] << v << aC[0][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t 2 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aP[1][0] << v << aP[1][1] << v << aP[1][2] << v << aP[1][3] << v << aP[1][4] << v << aP[1][5] << v << aP[1][6] << v << aP[1][7] << v << aP[1][8] << v << aP[1][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t 2 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aC[1][0] << v << aC[1][1] << v << aC[1][2] << v << aC[1][3] << v << aC[1][4] << v << aC[1][5] << v << aC[1][6] << v << aC[1][7] << v << aC[1][8] << v << aC[1][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t 3 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aP[2][0] << v << aP[2][1] << v << aP[2][2] << v << aP[2][3] << v << aP[2][4] << v << aP[2][5] << v << aP[2][6] << v << aP[2][7] << v << aP[2][8] << v << aP[2][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t 3 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aC[2][0] << v << aC[2][1] << v << aC[2][2] << v << aC[2][3] << v << aC[2][4] << v << aC[2][5] << v << aC[2][6] << v << aC[2][7] << v << aC[2][8] << v << aC[2][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t 4 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aP[3][0] << v << aP[3][1] << v << aP[3][2] << v << aP[3][3] << v << aP[3][4] << v << aP[3][5] << v << aP[3][6] << v << aP[3][7] << v << aP[3][8] << v << aP[3][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t 4 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aC[3][0] << v << aC[3][1] << v << aC[3][2] << v << aC[3][3] << v << aC[3][4] << v << aC[3][5] << v << aC[3][6] << v << aC[3][7] << v << aC[3][8] << v << aC[3][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t 5 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aP[4][0] << v << aP[4][1] << v << aP[4][2] << v << aP[4][3] << v << aP[4][4] << v << aP[4][5] << v << aP[4][6] << v << aP[4][7] << v << aP[4][8] << v << aP[4][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t 5 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aC[4][0] << v << aC[4][1] << v << aC[4][2] << v << aC[4][3] << v << aC[4][4] << v << aC[4][5] << v << aC[4][6] << v << aC[4][7] << v << aC[4][8] << v << aC[4][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t 6 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aP[5][0] << v << aP[5][1] << v << aP[5][2] << v << aP[5][3] << v << aP[5][4] << v << aP[5][5] << v << aP[5][6] << v << aP[5][7] << v << aP[5][8] << v << aP[5][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t 6 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aC[5][0] << v << aC[5][1] << v << aC[5][2] << v << aC[5][3] << v << aC[5][4] << v << aC[5][5] << v << aC[5][6] << v << aC[5][7] << v << aC[5][8] << v << aC[5][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t 7 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aP[6][0] << v << aP[6][1] << v << aP[6][2] << v << aP[6][3] << v << aP[6][4] << v << aP[6][5] << v << aP[6][6] << v << aP[6][7] << v << aP[6][8] << v << aP[6][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t 7 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aC[6][0] << v << aC[6][1] << v << aC[6][2] << v << aC[6][3] << v << aC[6][4] << v << aC[6][5] << v << aC[6][6] << v << aC[6][7] << v << aC[6][8] << v << aC[6][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t 8 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aP[7][0] << v << aP[7][1] << v << aP[7][2] << v << aP[7][3] << v << aP[7][4] << v << aP[7][5] << v << aP[7][6] << v << aP[7][7] << v << aP[7][8] << v << aP[7][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t 8 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aC[7][0] << v << aC[7][1] << v << aC[7][2] << v << aC[7][3] << v << aC[7][4] << v << aC[7][5] << v << aC[7][6] << v << aC[7][7] << v << aC[7][8] << v << aC[7][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t 9 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aP[8][0] << v << aP[8][1] << v << aP[8][2] << v << aP[8][3] << v << aP[8][4] << v << aP[8][5] << v << aP[8][6] << v << aP[8][7] << v << aP[8][8] << v << aP[8][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t 9 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aC[8][0] << v << aC[8][1] << v << aC[8][2] << v << aC[8][3] << v << aC[8][4] << v << aC[8][5] << v << aC[8][6] << v << aC[8][7] << v << aC[8][8] << v << aC[8][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t10 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aP[9][0] << v << aP[9][1] << v << aP[9][2] << v << aP[9][3] << v << aP[9][4] << v << aP[9][5] << v << aP[9][6] << v << aP[9][7] << v << aP[9][8] << v << aP[9][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t10 ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << v << aC[9][0] << v << aC[9][1] << v << aC[9][2] << v << aC[9][3] << v << aC[9][4] << v << aC[9][5] << v << aC[9][6] << v << aC[9][7] << v << aC[9][8] << v << aC[9][9] << v;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\n\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << ld << h << d << h << d << h << d << h << d << h << d << h << d << h << d << h << d << h << d << h << rd;
	SetConsoleTextAttribute(hStdOut, 252);
	cout << "\t\t   ";
	SetConsoleTextAttribute(hStdOut, 158);
	cout << ld << h << d << h << d << h << d << h << d << h << d << h << d << h << d << h << d << h << d << h << rd;
	SetConsoleTextAttribute(hStdOut, 240);

}

//Функция считывает строку символов и преобразовавает его в int значения координат
void readEnterSring(int* i, int* j)
{
	bool a = true;


	while (a)
	{
		char line[4];
		cout << "\n\tEnter coordinates: ";
		
		if (cin.peek() == '\n')
		{
			cin.get();
		}
		gets_s(line);

		if (strlen(line) == 3)
		{
			if ((line[0] == '1' && line[1] == '0' && (line[2] > 64 && line[2] < 75) || (line[2] > 96 && line[2] < 107)) ||
				(line[1] == '1' && line[2] == '0' && (line[0] > 64 && line[0] < 75) || (line[0] > 96 && line[0] < 107)))
			{
				a = false;

				if (line[0] == '1')
				{
					if (line[2] == 65 || line[2] == 97) { *i = 9; *j = 0; }
					if (line[2] == 66 || line[2] == 98) { *i = 9; *j = 1; }
					if (line[2] == 67 || line[2] == 99) { *i = 9; *j = 2; }
					if (line[2] == 68 || line[2] == 100) { *i = 9; *j = 3; }
					if (line[2] == 69 || line[2] == 101) { *i = 9; *j = 4; }
					if (line[2] == 70 || line[2] == 102) { *i = 9; *j = 5; }
					if (line[2] == 71 || line[2] == 103) { *i = 9; *j = 6; }
					if (line[2] == 72 || line[2] == 104) { *i = 9; *j = 7; }
					if (line[2] == 73 || line[2] == 105) { *i = 9; *j = 8; }
					if (line[2] == 74 || line[2] == 106) { *i = 9; *j = 9; }
				}
				else
				{
					if (line[0] == 65 || line[0] == 97) { *i = 9; *j = 0; }
					if (line[0] == 66 || line[0] == 98) { *i = 9; *j = 1; }
					if (line[0] == 67 || line[0] == 99) { *i = 9; *j = 2; }
					if (line[0] == 68 || line[0] == 100) { *i = 9; *j = 3; }
					if (line[0] == 69 || line[0] == 101) { *i = 9; *j = 4; }
					if (line[0] == 70 || line[0] == 102) { *i = 9; *j = 5; }
					if (line[0] == 71 || line[0] == 103) { *i = 9; *j = 6; }
					if (line[0] == 72 || line[0] == 104) { *i = 9; *j = 7; }
					if (line[0] == 73 || line[0] == 105) { *i = 9; *j = 8; }
					if (line[0] == 74 || line[0] == 106) { *i = 9; *j = 9; }
				}
			}
			else
			{
				cout << "\n\n\tError! Wrong Operation! Try again!";
			}
		}
		else
		{
			if (strlen(line) == 2)
			{
				if ((line[0] > 48 && line[0] < 58 && (line[1] > 64 && line[1] < 75 || line[1]>96 && line[1] < 107)) ||
					(line[1] > 48 && line[1] < 58 && (line[0] > 64 && line[0] < 75 || line[0]>96 && line[0] < 107)))
				{
					a = false;
					if (line[0] > 47 && line[0] < 58)
					{
						if (line[0] == '1') { *i = 0; }
						if (line[0] == '2') { *i = 1; }
						if (line[0] == '3') { *i = 2; }
						if (line[0] == '4') { *i = 3; }
						if (line[0] == '5') { *i = 4; }
						if (line[0] == '6') { *i = 5; }
						if (line[0] == '7') { *i = 6; }
						if (line[0] == '8') { *i = 7; }
						if (line[0] == '9') { *i = 8; }

						if (line[1] == 65 || line[1] == 97) { *j = 0; }
						if (line[1] == 66 || line[1] == 98) { *j = 1; }
						if (line[1] == 67 || line[1] == 99) { *j = 2; }
						if (line[1] == 68 || line[1] == 100) { *j = 3; }
						if (line[1] == 69 || line[1] == 101) { *j = 4; }
						if (line[1] == 70 || line[1] == 102) { *j = 5; }
						if (line[1] == 71 || line[1] == 103) { *j = 6; }
						if (line[1] == 72 || line[1] == 104) { *j = 7; }
						if (line[1] == 73 || line[1] == 105) { *j = 8; }
						if (line[1] == 74 || line[1] == 106) { *j = 9; }
					}
					if (line[1] > 47 && line[1] < 58)
					{
						if (line[1] == '1') { *i = 0; }
						if (line[1] == '2') { *i = 1; }
						if (line[1] == '3') { *i = 2; }
						if (line[1] == '4') { *i = 3; }
						if (line[1] == '5') { *i = 4; }
						if (line[1] == '6') { *i = 5; }
						if (line[1] == '7') { *i = 6; }
						if (line[1] == '8') { *i = 7; }
						if (line[1] == '9') { *i = 8; }

						if (line[0] == 65 || line[0] == 97) { *j = 0; }
						if (line[0] == 66 || line[0] == 98) { *j = 1; }
						if (line[0] == 67 || line[0] == 99) { *j = 2; }
						if (line[0] == 68 || line[0] == 100) { *j = 3; }
						if (line[0] == 69 || line[0] == 101) { *j = 4; }
						if (line[0] == 70 || line[0] == 102) { *j = 5; }
						if (line[0] == 71 || line[0] == 103) { *j = 6; }
						if (line[0] == 72 || line[0] == 104) { *j = 7; }
						if (line[0] == 73 || line[0] == 105) { *j = 8; }
						if (line[0] == 74 || line[0] == 106) { *j = 9; }
					}
				}
				else
				{
					cout << "\n\n\tError! Wrong Operation! Try again!";
				}
			}
			else
			{
				cout << "\n\n\tError! Wrong Operation! Try again!";
			}
		}
	}
}

//Функция выводит на экран одно игровое поле (используется при заполнении массива вручную)
void printAligment(char aP[][11]) {
	char lu = 218;
	char ld = 192;
	char ru = 191;
	char rd = 217;
	char h = 196;
	char v = 179;
	char u = 194;
	char d = 193;
	char l = 195;
	char r = 180;
	char c = 197;
	char pr = 32;

	cout << "\n\t";
	cout << "\n\t    A B C D E F G H I J";
	

	cout << "\n\t   " << lu << h << u << h << u << h << u << h << u << h << u << h << u << h << u << h << u << h << u << h << ru;
	
	cout << "\n\t 1 " << v << aP[0][0] << v << aP[0][1] << v << aP[0][2] << v << aP[0][3] << v << aP[0][4] << v << aP[0][5] << v << aP[0][6] << v << aP[0][7] << v << aP[0][8] << v << aP[0][9] << v;
	
	cout << "\n\t   " << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	
	cout << "\n\t 2 " << v << aP[1][0] << v << aP[1][1] << v << aP[1][2] << v << aP[1][3] << v << aP[1][4] << v << aP[1][5] << v << aP[1][6] << v << aP[1][7] << v << aP[1][8] << v << aP[1][9] << v;
	

	cout << "\n\t   " << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	
	cout << "\n\t 3 " << v << aP[2][0] << v << aP[2][1] << v << aP[2][2] << v << aP[2][3] << v << aP[2][4] << v << aP[2][5] << v << aP[2][6] << v << aP[2][7] << v << aP[2][8] << v << aP[2][9] << v;
	

	cout << "\n\t   " << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	
	cout << "\n\t 4 " << v << aP[3][0] << v << aP[3][1] << v << aP[3][2] << v << aP[3][3] << v << aP[3][4] << v << aP[3][5] << v << aP[3][6] << v << aP[3][7] << v << aP[3][8] << v << aP[3][9] << v;
	

	cout << "\n\t   " << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	
	cout << "\n\t 5 " << v << aP[4][0] << v << aP[4][1] << v << aP[4][2] << v << aP[4][3] << v << aP[4][4] << v << aP[4][5] << v << aP[4][6] << v << aP[4][7] << v << aP[4][8] << v << aP[4][9] << v;
	

	cout << "\n\t   " << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	
	cout << "\n\t 6 " << v << aP[5][0] << v << aP[5][1] << v << aP[5][2] << v << aP[5][3] << v << aP[5][4] << v << aP[5][5] << v << aP[5][6] << v << aP[5][7] << v << aP[5][8] << v << aP[5][9] << v;
	

	cout << "\n\t   " << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	
	cout << "\n\t 7 " << v << aP[6][0] << v << aP[6][1] << v << aP[6][2] << v << aP[6][3] << v << aP[6][4] << v << aP[6][5] << v << aP[6][6] << v << aP[6][7] << v << aP[6][8] << v << aP[6][9] << v;
	

	cout << "\n\t   " << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	
	cout << "\n\t 8 " << v << aP[7][0] << v << aP[7][1] << v << aP[7][2] << v << aP[7][3] << v << aP[7][4] << v << aP[7][5] << v << aP[7][6] << v << aP[7][7] << v << aP[7][8] << v << aP[7][9] << v;
	

	cout << "\n\t   " << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	
	cout << "\n\t 9 " << v << aP[8][0] << v << aP[8][1] << v << aP[8][2] << v << aP[8][3] << v << aP[8][4] << v << aP[8][5] << v << aP[8][6] << v << aP[8][7] << v << aP[8][8] << v << aP[8][9] << v;
	

	cout << "\n\t   " << l << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << c << h << r;
	
	cout << "\n\t10 " << v << aP[9][0] << v << aP[9][1] << v << aP[9][2] << v << aP[9][3] << v << aP[9][4] << v << aP[9][5] << v << aP[9][6] << v << aP[9][7] << v << aP[9][8] << v << aP[9][9] << v;
	

	cout << "\n\t   " << ld << h << d << h << d << h << d << h << d << h << d << h << d << h << d << h << d << h << d << h << rd;
}

//Функция автоматически заполняет игровые поля кораблями
void shipAlignmentAutomatically(char arrrayy[][11]) {

	int positionVerHor = 0;

	int i;
	int j;


	for (int g = 1; g < 5; g++)
	{
		for (int z = 0; z < g; z++)
		{
			bool a = true;

			while (a)
			{

				positionVerHor = rand() % 2 + 1;

				if (positionVerHor == 1)
				{

					i = rand() % 10;
					j = rand() % 6 + g;
					for (int l = 0; l < 5 - g; l++)
					{

						if (arrrayy[i][j - 1 + l] == '*' ||
							arrrayy[i - 1][j - 1 + l] == '*' ||
							arrrayy[i - 1][j + l] == '*' ||
							arrrayy[i - 1][j + 1 + l] == '*' ||
							arrrayy[i][j + 1 + l] == '*' ||
							arrrayy[i + 1][j - 1 + l] == '*' ||
							arrrayy[i + 1][j + l] == '*' ||
							arrrayy[i + 1][j + 1 + l] == '*' ||
							arrrayy[i][j] == '*')
						{
							break;
						}
						if (l == 4 - g)
						{
							for (int h = 0; h < 5 - g; h++)
							{
								arrrayy[i][j + h] = '*';

								a = false;
							}
						}
					}
				}
				else
				{
					i = rand() % 6 + g;
					j = rand() % 10;
					for (int h = 0; h < 5 - g; h++)
					{
						if (arrrayy[i + h][j - 1] == '*' ||
							arrrayy[i - 1 + h][j - 1] == '*' ||
							arrrayy[i - 1 + h][j] == '*' ||
							arrrayy[i - 1 + h][j + 1] == '*' ||
							arrrayy[i + h][j + 1] == '*' ||
							arrrayy[i + 1 + h][j - 1] == '*' ||
							arrrayy[i + 1 + h][j] == '*' ||
							arrrayy[i + 1 + h][j + 1] == '*' ||
							arrrayy[i][j] == '*')
						{
							break;
						}
						if (h == 4 - g)
						{
							for (int h = 0; h < 5 - g; h++)
							{
								arrrayy[i + h][j] = '*';

								a = false;
							}
						}
					}
				}
			}

		}
	}
}

//Функция для заполнения игровых полей кораблями вручную
void manualShipPlacement(char arrrayy[][11]) {
	
	char orientationShip = 'h';

	int i;
	int j;


	for (int g = 1; g < 5; g++)
	{
		for (int z = 0; z < g; z++)
		{
			bool a = true;

			while (a)
			{

				system("cls");
				printAligment(arrrayy);

				cout << "\n\tSelect " << 5 - g << " deck ship position.";

				if (5 - g > 1)
				{
					cout << "\n\tChoose ship orientation \n\t\t Horizontal\t - press h \n\t\t Vertical\t - press v";
					cout << "\n\tOrientation ship: ";
					cin >> orientationShip;
				}

				readEnterSring(&i, &j);

				if (orientationShip == 'h' && i >= 0 && i <= 9 && j >= 0 && j < 6 + g)
				{

					for (int l = 0; l < 5 - g; l++)
					{

						if (arrrayy[i][j - 1 + l] == '*' ||
							arrrayy[i - 1][j - 1 + l] == '*' ||
							arrrayy[i - 1][j + l] == '*' ||
							arrrayy[i - 1][j + 1 + l] == '*' ||
							arrrayy[i][j + 1 + l] == '*' ||
							arrrayy[i + 1][j - 1 + l] == '*' ||
							arrrayy[i + 1][j + l] == '*' ||
							arrrayy[i + 1][j + 1 + l] == '*' ||
							arrrayy[i][j] == '*')
						{
							cout << "\n\tWrong operation! Try again.\n\n";
							system("pause");
							break;
						}
						if (l == 4 - g)
						{
							for (int h = 0; h < 5 - g; h++)
							{
								arrrayy[i][j + h] = '*';

								a = false;
							}
						}
					}

				}
				else
				{
					if (orientationShip == 'v' && i >= 0 && i < 6 + g && j >= 0 && j <= 9)
					{
						for (int h = 0; h < 5 - g; h++)
						{
							if (arrrayy[i + h][j - 1] == '*' ||
								arrrayy[i - 1 + h][j - 1] == '*' ||
								arrrayy[i - 1 + h][j] == '*' ||
								arrrayy[i - 1 + h][j + 1] == '*' ||
								arrrayy[i + h][j + 1] == '*' ||
								arrrayy[i + 1 + h][j - 1] == '*' ||
								arrrayy[i + 1 + h][j] == '*' ||
								arrrayy[i + 1 + h][j + 1] == '*' ||
								arrrayy[i][j] == '*')
							{
								cout << "\n\tWrong operation! Try again.\n\n";
								system("pause");
								break;
							}
							if (h == 4 - g)
							{
								for (int h = 0; h < 5 - g; h++)
								{
									arrrayy[i + h][j] = '*';

									a = false;
								}
							}
						}
					}
					else
					{
						cout << "\n\tWrong operation! Try again.\n\n";
						system("pause");
						continue;
					}
				}
			}

		}
	}
	system("cls");
	printAligment(arrrayy);
}

//Функция проверяет после попадания в корабль подбит он или уничтожен 
bool ShipDestructionCheck(char arrCheck[][11], int i, int j) {

	for (int n = 1; n < 4; n++)
	{
		if (arrCheck[i][j - n] == '*')
		{
			
			return true;
		}
		if (j - n < 0 || arrCheck[i][j - n] == '0' || arrCheck[i][j - n] == ' ')
		{
			break;
		}
	}


	for (int n = 1; n < 4; n++)
	{
		if (arrCheck[i - n][j] == '*')
		{
			
			return true;
		}
		if (i - n < 0 || arrCheck[i - n][j] == '0' || arrCheck[i - n][j] == ' ')
		{
			break;
		}
	}


	for (int n = 1; n < 4; n++)
	{
		if (arrCheck[i][j + n] == '*')
		{
			
			return true;
		}
		if (j + n > 9 || arrCheck[i][j + n] == '0' || arrCheck[i][j + n] == ' ')
		{
			break;
		}
	}


	for (int n = 1; n < 4; n++)
	{
		if (arrCheck[i + n][j] == '*')
		{
			
			return true;
		}
		if (i + n > 9 || arrCheck[i + n][j] == '0' || arrCheck[i + n][j] == ' ')
		{
			break;
		}
	}
	
	return false;
}

//Функция заполняет пространство вокруг уничтоженного корабля "промахами"
void FreeSpace(char humanField[][11], char humanMove[][11], int &i, int &j) {

	if (humanField[i][j - 1] != '+' &&
		humanField[i - 1][j] != '+' &&
		humanField[i][j + 1] != '+' &&
		humanField[i + 1][j] != '+')
	{
		humanMove[i][j - 1] = '0';
		humanMove[i - 1][j - 1] = '0';
		humanMove[i - 1][j] = '0';
		humanMove[i - 1][j + 1] = '0';
		humanMove[i][j + 1] = '0';
		humanMove[i + 1][j + 1] = '0';
		humanMove[i + 1][j] = '0';
		humanMove[i + 1][j - 1] = '0';

		humanField[i][j - 1] = '0';
		humanField[i - 1][j - 1] = '0';
		humanField[i - 1][j] = '0';
		humanField[i - 1][j + 1] = '0';
		humanField[i][j + 1] = '0';
		humanField[i + 1][j + 1] = '0';
		humanField[i + 1][j] = '0';
		humanField[i + 1][j - 1] = '0';
	
	}
	else
	{
		if (humanField[i][j - 1] == '+' || humanField[i][j + 1] == '+')
		{
			humanMove[i - 1][j] = '0';
			humanMove[i + 1][j] = '0';

			humanField[i - 1][j] = '0';
			humanField[i + 1][j] = '0';

			for (int k = 1; k < 5; k++)
			{
				if (humanField[i][j + k] == '0' || humanField[i][j + k] == ' ')
				{
					humanField[i - 1][j + k] = '0';
					humanField[i][j + k] = '0';
					humanField[i + 1][j + k] = '0';

					humanMove[i - 1][j + k] = '0';
					humanMove[i][j + k] = '0';
					humanMove[i + 1][j + k] = '0';

					break;

				}
				else
				{
					if (humanField[i][j + k] == '+')
					{
						humanField[i - 1][j + k] = '0';
						humanField[i + 1][j + k] = '0';

						humanMove[i - 1][j + k] = '0';
						humanMove[i + 1][j + k] = '0';
					}
				}
			}
			for (int k = 1; k < 5; k++)
			{
				if (humanField[i][j - k] == '0' || humanField[i][j - k] == ' ')
				{
					humanField[i - 1][j - k] = '0';
					humanField[i][j - k] = '0';
					humanField[i + 1][j - k] = '0';

					humanMove[i - 1][j - k] = '0';
					humanMove[i][j - k] = '0';
					humanMove[i + 1][j - k] = '0';

					break;

				}
				else
				{
					if (humanField[i][j - k] == '+')
					{
						humanField[i - 1][j - k] = '0';
						humanField[i + 1][j - k] = '0';

						humanMove[i - 1][j - k] = '0';
						humanMove[i + 1][j - k] = '0';
					}
				}
			}
		}

		if (humanField[i - 1][j] == '+' || humanField[i + 1][j] == '+')
		{
			humanField[i][j - 1] = '0';
			humanField[i][j + 1] = '0';

			humanMove[i][j - 1] = '0';
			humanMove[i][j + 1] = '0';

			for (int k = 1; k < 5; k++)
			{
				if (humanField[i + k][j] == '0' || humanField[i + k][j] == ' ')
				{
					humanField[i + k][j - 1] = '0';
					humanField[i + k][j] = '0';
					humanField[i + k][j + 1] = '0';

					humanMove[i + k][j - 1] = '0';
					humanMove[i + k][j] = '0';
					humanMove[i + k][j + 1] = '0';
					break;

				}
				else
				{
					if (humanField[i + k][j] == '+')
					{
						humanField[i + k][j - 1] = '0';
						humanField[i + k][j + 1] = '0';

						humanMove[i + k][j - 1] = '0';
						humanMove[i + k][j + 1] = '0';
					}
				}
			}
			for (int k = 1; k < 5; k++)
			{
				if (humanField[i - k][j] == '0' || humanField[i - k][j] == ' ')
				{
					humanField[i - k][j - 1] = '0';
					humanField[i - k][j] = '0';
					humanField[i - k][j + 1] = '0';

					humanMove[i - k][j - 1] = '0';
					humanMove[i - k][j] = '0';
					humanMove[i - k][j + 1] = '0';

					break;

				}
				else
				{
					if (humanField[i - k][j] == '+')
					{
						humanField[i - k][j - 1] = '0';
						humanField[i - k][j + 1] = '0';

						humanMove[i - k][j - 1] = '0';
						humanMove[i - k][j + 1] = '0';
					}
				}
			}
		}

	}
}

//Функция проверяет уничтожены ли все корабли
bool CheckVictoty(char arr[][11]) {

	int countHit = 0;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i][j] == '+')
			{
				countHit++;

			}
		}
	}

	if (countHit == 20)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Функция ходов человека
void HumanMove(char humanField[][11], char computerField[][11], char humanMove[][11], HANDLE hStdOut) {

	
	bool a = true;
	

		while (a)
		{

			int i;
			int j;

			system("cls");
			PrintField(humanField, humanMove, hStdOut);
			cout << "\n\n\tYour move!\n";
			readEnterSring(&i, &j);

			if (computerField[i][j] == '*')
			{
				humanMove[i][j] = '+';
				computerField[i][j] = '+';

				

				if (ShipDestructionCheck(computerField, i, j) == false)
				{
					FreeSpace(computerField, humanMove, i, j);
					system("cls");
					PrintField(humanField, humanMove, hStdOut);
					cout << "\n\n\tYou destroy ship!!! \n\n\t";
					system("pause");
				}
				else
				{
					system("cls");
					PrintField(humanField, humanMove, hStdOut);
					cout << "\n\n\tYou hit!!!\n\n\t";
					system("pause");
				}
				
				if (CheckVictoty(computerField))
				{
					cout << "\n\tYOU WIN!\n\n\t";
					system("pause");
					exit(0);
				}
			}
			else
			{
				if (computerField[i][j] == '+'|| computerField[i][j] == '0')
				{
					cout << "\n\n\tYou have already shot this sector.\n\n\t";
					system("pause");
					
				}
				else
				{
					humanMove[i][j] = '0';
					computerField[i][j] = '0';
					system("cls");
					PrintField(humanField, humanMove, hStdOut);
					cout << "\n\n\tYou missed.\n\n\t";
					system("pause");
					a = false;
				}
			}
		}
}

//Функция ходов компьютера
void ComputerMove(char humanField[][11], bool* state, int* i, int* j) {

	bool checkVic = false;

	if (!*state)
	{
		*i = rand() % 10;
		*j = rand() % 10;

		if (humanField[*i][*j] == '*')
		{
			humanField[*i][*j] = '+';

			if (CheckVictoty(humanField))
			{
				cout << "\n\tComputer win!\n\n\t";
				system("pause");
				exit(0);
			}
			*state = ShipDestructionCheck(humanField, *i, *j);			
			if (!*state)
			{
				FreeSpace(humanField, humanField, *i, *j);
			}
			return ComputerMove(humanField, state, i, j);
		}
		else
		{
			if (humanField[*i][*j] == '0'|| humanField[*i][*j] == '+')
			{
				return ComputerMove(humanField, state, i, j);
			}
			else
			{
				if (humanField[*i][*j] == ' ')
				{
					humanField[*i][*j] = '0';
					return;
				}
			}
		}
	}
	else
	{
		if (humanField[*i][*j - 1] == '+' ||
			humanField[*i - 1][*j] == '+' ||
			humanField[*i][*j + 1] == '+' ||
			humanField[*i + 1][*j] == '+')
		{
			if (humanField[*i][*j - 1] == '+')
			{
				for (int k = 1; k < 3; k++)
				{
					if (humanField[*i][*j + k] == '*')
					{
						humanField[*i][*j + k] = '+';
						
						if (CheckVictoty(humanField))
						{
							cout << "\n\tComputer win!\n\n\t";
							system("pause");
							exit(0);
						}

						*state = ShipDestructionCheck(humanField, *i, *j);

						if (!*state)
						{
							FreeSpace(humanField, humanField, *i, *j);
							return ComputerMove(humanField, state, i, j);
						}

					}
					else
					{
						if (humanField[*i][*j + k] == ' ')
						{
							humanField[*i][*j + k] = '0';
							return;
						}
					}
				}
			}

			if (humanField[*i - 1][*j] == '+')
			{
				for (int k = 1; k < 3; k++)
				{
					if (humanField[*i + k][*j] == '*')
					{
						humanField[*i + k][*j] = '+';

						if (CheckVictoty(humanField))
						{
							cout << "\n\tComputer win!\n\n\t";
							system("pause");
							exit(0);
						}

						*state = ShipDestructionCheck(humanField, *i, *j);
						if (!*state)
						{
							FreeSpace(humanField, humanField, *i, *j);
							return ComputerMove(humanField, state, i, j);
						}
					}
					else
					{
						if (humanField[*i + k][*j] == ' ')
						{
							humanField[*i + k][*j] = '0';
							return;
						}
					}
				}
			}

			if (humanField[*i][*j + 1] == '+')
			{
				for (int k = 1; k < 3; k++)
				{
					if (humanField[*i][*j - k] == '*')
					{
						humanField[*i][*j - k] = '+';
						
						if (CheckVictoty(humanField))
						{
							cout << "\n\tComputer win!\n\n\t";
							system("pause");
							exit(0);
						}

						*state = ShipDestructionCheck(humanField, *i, *j);
						if (!*state)
						{
							FreeSpace(humanField, humanField, *i, *j);
							return ComputerMove(humanField, state, i, j);
						}
					}
					else
					{
						if (humanField[*i][*j - k] == ' ')
						{
							humanField[*i][*j - k] = '0';
							return;
						}
					}
				}
			}

			if (humanField[*i + 1][*j] == '+')
			{
				for (int k = 1; k < 3; k++)
				{
					if (humanField[*i - k][*j] == '*')
					{
						humanField[*i - k][*j] = '+';

						if (CheckVictoty(humanField))
						{
							cout << "\n\tComputer win!\n\n\t";
							system("pause");
							exit(0);
						}

						*state = ShipDestructionCheck(humanField, *i, *j);
						if (!*state)
						{
							FreeSpace(humanField, humanField, *i, *j);
							return ComputerMove(humanField, state, i, j);
						}
					}
					else
					{
						if (humanField[*i - k][*j] == ' ')
						{
							humanField[*i - k][*j] = '0';
							return;
						}
					}
				}
			}
		}
		else
		{
			int a = 0;
			a = rand() % 4 + 1;
			
			if (a == 1)
			{
				for (int l = 1; l < 4; l++)
				{
					if (humanField[*i][*j - l] == '*')
					{
						humanField[*i][*j - l] = '+';

						if (CheckVictoty(humanField))
						{
							cout << "\n\tComputer win!\n\n\t";
							system("pause");
							exit(0);
						}

						*state = ShipDestructionCheck(humanField, *i, *j);
						if (!*state)
						{
							FreeSpace(humanField, humanField, *i, *j);
							return ComputerMove(humanField, state, i, j);
						}
					}
					else
					{
						if (humanField[*i][*j - l] == '0' || *i < 0 || *i > 9 || *j < 0 || *j > 9)
						{
							return ComputerMove(humanField, state, i, j);
						}
						else
						{
							humanField[*i][*j - l] = '0';
							return;
						}
					}
				}
			}
			if (a == 2)
			{
				for (int l = 1; l < 4; l++)
				{
					if (humanField[*i - l][*j] == '*')
					{
						humanField[*i - l][*j] = '+';

						if (CheckVictoty(humanField))
						{
							cout << "\n\tComputer win!\n\n\t";
							system("pause");
							exit(0);
						}

						*state = ShipDestructionCheck(humanField, *i, *j);
						if (!*state)
						{
							FreeSpace(humanField, humanField, *i, *j);
							return ComputerMove(humanField, state, i, j);
						}
					}
					else
					{
						if (humanField[*i - l][*j] == '0' || *i < 0 || *i > 9 || *j < 0 || *j > 9)
						{
							return ComputerMove(humanField, state, i, j);
						}
						else
						{
							humanField[*i - l][*j] = '0';

							return;
						}
					}
				}
			}
			if (a == 3)
			{
				for (int l = 1; l < 4; l++)
				{
					if (humanField[*i][*j + l] == '*')
					{
						humanField[*i][*j + l] = '+';

						if (CheckVictoty(humanField))
						{
							cout << "\n\tComputer win!\n\n\t";
							system("pause");
							exit(0);
						}

						*state = ShipDestructionCheck(humanField, *i, *j);

						if (!*state)
						{
							FreeSpace(humanField, humanField, *i, *j);
							return ComputerMove(humanField, state, i, j);
						}
					}
					else
					{
						if (humanField[*i][*j + l] == '0' || *i < 0 || *i > 9 || *j < 0 || *j > 9)
						{
							return ComputerMove(humanField, state, i, j);
						}
						else
						{
							humanField[*i][*j + l] = '0';
							return;
						}
					}
				}

			}
			if (a == 4)
			{
				for (int l = 1; l < 4; l++)
				{
					if (humanField[*i + l][*j] == '*')
					{
						humanField[*i + l][*j] = '+';

						if (CheckVictoty(humanField))
						{
							cout << "\n\tComputer win!\n\n\t";
							system("pause");
							exit(0);
						}

						*state = ShipDestructionCheck(humanField, *i, *j);
						if (!*state)
						{
							FreeSpace(humanField, humanField, *i, *j);
							return ComputerMove(humanField, state, i, j);
						}
					}
					else
					{
						if (humanField[*i+l][*j] == '0' || *i < 0 || *i > 9 || *j < 0 || *j > 9)
						{
							return ComputerMove(humanField, state, i, j);
						}
						else
						{
							humanField[*i + l][*j] = '0';
							return;
						}
					}
				}
			}
		}
	}
}



