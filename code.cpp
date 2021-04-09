#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

//check

struct mr_da
{
	int p = 0;
	string k = "O";
};


vector<vector<mr_da>> mr_funtik(string p)
{
	vector < vector<mr_da>> a(10, vector<mr_da>(10));
	cout << "    ";
	for (int i = 0; i < 10; i++)
	{
		cout << char(i + 97) << " ";
	}
	cout << endl;
	cout << "    ";
	for (int i = 0; i < 10; i++)
	{
		cout << "__";
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		if (i == 9) cout << i + 1 << "| ";
		else        cout << i + 1 << " | ";
		for (int j = 0; j < 10; j++) cout << "0 ";
		cout << endl;
	}
	cout << p << ", zapolnite svoyo igravoe pole edinichnimi korablyami : " << endl;
	for (int i = 0; i < 4; i++)
	{
		char y1;
		int x, y;
		cin >> x >> y1;
		x--;
		y = y1 - 'a';
		while (true)
		{
			if ((x < 0) || (x > 9) || (y < 0) || (y > 9) || (x > 0 && a[x - 1][y].p != 0) || (x < 9 && a[x + 1][y].p != 0) || (y > 0 && a[x][y - 1].p != 0) || (y < 9 && a[x][y + 1].p != 0) || (x > 0 && y > 0 && a[x - 1][y - 1].p != 0) || (x > 0 && y < 9 && a[x - 1][y + 1].p != 0) || (x < 9 && y < 9 && a[x + 1][y + 1].p != 0) || (x < 9 && y > 0 && a[x + 1][y - 1].p != 0))
			{
				cout << "Ne pravilnie koordinati" << endl;
				cin >> x >> y1;
				x--;
				y = y1 - 'a';
			}
			else break;
		}
		while (a[x][y].p != 0)
		{
			cout << "Ne pravilnie koordinati" << endl;
			cin >> x >> y1;
			x--;
			y = y1 - 'a';
		}
		a[x][y].p = 1;
		system("cls");
		cout << "    ";
		for (int g = 0; g < 10; g++)
		{
			cout << char(g + 97) << " ";
		}
		cout << endl;
		cout << "    ";
		for (int g = 0; g < 10; g++)
		{
			cout << "__";
		}
		cout << endl;
		for (int j = 0; j < 10; j++)
		{
			if (j == 9) cout << j + 1 << "| ";
			else cout << j + 1 << " | ";
			for (int g = 0; g < 10; g++) cout << a[j][g].p << " ";
			cout << endl;
		}
	}
	cout << "dvoyki : " << endl;
	for (int i = 0; i < 3; i++)
	{
		char y1;
		int x, y, h = 0;
		string z;
		cin >> x >> y1 >> z;
		x--;
		y = y1 - 'a';
		while (true)
		{
			h++;
			if ((x < 0) || (x > 9) || (y < 0) || (y > 9) || (x > 0 && a[x - 1][y].p != 0) || (x < 9 && a[x + 1][y].p != 0) || (y > 0 && a[x][y - 1].p != 0) || (y < 9 && a[x][y + 1].p != 0) || (x > 0 && y > 0 && a[x - 1][y - 1].p != 0) || (x > 0 && y < 9 && a[x - 1][y + 1].p != 0) || (x < 9 && y < 9 && a[x + 1][y + 1].p != 0) || (x < 9 && y > 0 && a[x + 1][y - 1].p != 0) || (z != "v" && z != "g"))
			{
				cout << "Ne pravilnie koordinati" << endl;
				cin >> x >> y1 >> z;
				x--;
				y = y1 - 'a';
				h = 0;
				continue;
			}
			else
			{
				if (z == "g" && h < 2)
				{
					y--;
					continue;
				}
				if (z == "v" && h < 2)
				{
					x--;
					continue;
				}
				break;
			}
		}
		if (z == "v") x++;
		else          y++;
		while (a[x][y].p != 0)
		{
			cout << "Ne pravilnie koordinati" << endl;
			cin >> x >> y1 >> z;
			x--;
			y = y1 - 'a';
		}
		if (z == "v")
			for (int i = 0; i < 2; i++) a[x - i][y].p = 2;
		else
			for (int i = 0; i < 2; i++) a[x][y - i].p = 2;
		system("cls");
		cout << "    ";
		for (int g = 0; g < 10; g++)
		{
			cout << char(g + 97) << " ";
		}
		cout << endl;
		cout << "    ";
		for (int g = 0; g < 10; g++)
		{
			cout << "__";
		}
		cout << "    ";
		cout << endl;
		for (int j = 0; j < 10; j++)
		{
			if (j == 9) cout << j + 1 << "| ";
			else cout << j + 1 << " | ";
			for (int g = 0; g < 10; g++) cout << a[j][g].p << " ";
			cout << endl;
		}
	}
	cout << "troyki : " << endl;
	for (int i = 0; i < 2; i++)
	{
		char y1;
		int x, y, h = 0;
		string z;
		cin >> x >> y1 >> z;
		x--;
		y = y1 - 'a';
		while (true)
		{
			h++;
			if ((x < 0) || (x > 9) || (y < 0) || (y > 9) || (x > 0 && a[x - 1][y].p != 0) || (x < 9 && a[x + 1][y].p != 0) || (y > 0 && a[x][y - 1].p != 0) || (y < 9 && a[x][y + 1].p != 0) || (x > 0 && y > 0 && a[x - 1][y - 1].p != 0) || (x > 0 && y < 9 && a[x - 1][y + 1].p != 0) || (x < 9 && y < 9 && a[x + 1][y + 1].p != 0) || (x < 9 && y > 0 && a[x + 1][y - 1].p != 0) || (z != "v" && z != "g"))
			{
				cout << "Ne pravilnie koordinati" << endl;
				cin >> x >> y1 >> z;
				x--;
				y = y1 - 'a';
				h = 0;
				continue;
			}
			else
			{
				if (z == "g" && h < 3)
				{
					y--;
					continue;
				}
				if (z == "v" && h < 3)
				{
					x--;
					continue;
				}
				break;
			}
		}
		if (z == "v") x += 2;
		else          y += 2;
		while (a[x][y].p != 0)
		{
			cout << "Ne pravilnie koordinati" << endl;
			cin >> x >> y1;
			x--;
			y = y1 - 'a';
		}
		if (z == "v")
			for (int i = 0; i < 3; i++) a[x - i][y].p = 3;
		else
			for (int i = 0; i < 3; i++) a[x][y - i].p = 3;
		system("cls");
		cout << "    ";
		for (int g = 0; g < 10; g++)
		{
			cout << char(g + 97) << " ";
		}
		cout << endl;
		cout << "    ";
		for (int g = 0; g < 10; g++)
		{
			cout << "__";
		}
		cout << endl;
		for (int j = 0; j < 10; j++)
		{
			if (j == 9) cout << j + 1 << "| ";
			else cout << j + 1 << " | ";
			for (int g = 0; g < 10; g++) cout << a[j][g].p << " ";
			cout << endl;
		}
	}
	cout << "chetverki : " << endl;
	for (int i = 0; i < 1; i++)
	{
		char y1;
		int x, y, h = 0;
		string z;
		cin >> x >> y1 >> z;
		x--;
		y = y1 - 'a';
		while (true)
		{
			h++;
			if ((x < 0) || (x > 9) || (y < 0) || (y > 9) || (x > 0 && a[x - 1][y].p != 0) || (x < 9 && a[x + 1][y].p != 0) || (y > 0 && a[x][y - 1].p != 0) || (y < 9 && a[x][y + 1].p != 0) || (x > 0 && y > 0 && a[x - 1][y - 1].p != 0) || (x > 0 && y < 9 && a[x - 1][y + 1].p != 0) || (x < 9 && y < 9 && a[x + 1][y + 1].p != 0) || (x < 9 && y > 0 && a[x + 1][y - 1].p != 0) || (z != "v" && z != "g"))
			{
				cout << "Ne pravilnie koordinati" << endl;
				cin >> x >> y1 >> z;
				x--;
				y = y1 - 'a';
				h = 0;
				continue;
			}
			else
			{
				if (z == "g" && h < 4)
				{
					y--;
					continue;
				}
				if (z == "v" && h < 4)
				{
					x--;
					continue;
				}
				break;
			}
		}
		if (z == "v") x += 3;
		else          y += 3;
		while (a[x][y].p != 0)
		{
			cout << "Ne pravilnie koordinati" << endl;
			cin >> x >> y1;
			x--;
			y = y1 - 'a';
		}
		if (z == "v")
			for (int i = 0; i < 4; i++) a[x - i][y].p = 4;
		else
			for (int i = 0; i < 4; i++) a[x][y - i].p = 4;
		system("cls");
		cout << "    ";
		for (int g = 0; g < 10; g++)
		{
			cout << char(g + 97) << " ";
		}
		cout << endl;
		cout << "    ";
		for (int g = 0; g < 10; g++)
		{
			cout << "__";
		}
		cout << endl;
		for (int j = 0; j < 10; j++)
		{
			if (j == 9) cout << j + 1 << "| ";
			else cout << j + 1 << " | ";
			for (int g = 0; g < 10; g++) cout << a[j][g].p << " ";
			cout << endl;
		}
	}
	cout << "vvedite lyubuyu stroku dlya prodoljeniya" << endl;
	string v;
	cin >> v;
	system("cls");
	return a;
}

//   +         +
//  + +       + +
// +   + + + +   +
//+               +
//+    +     +    +
//+       +       +
// +      +      +
//  + + + + + + +
//+               +

int main()
{
	string p1, p2;
	cout << "Player 1 name : ";
	int s1 = 20, s2 = 20;
	cin >> p1;
	cout << "Player 2 name : ";
	cin >> p2;
	cout << "pri corablyah c razmerom bolyshie 1 nujeno vvesti posle koordinat simvol g(gorizontalyno) ili v(vertikalyno)." << endl;
	cout << "koordinati korobley razmerom bolyshe 1 ravni samoy nijney kletke(esli po v) i po samoy pravoy kletke koroblya(esli po g). Naprimer \"2 8 g\" ili \"10 10 v\"." << endl;
	vector<vector<mr_da>> a = mr_funtik(p1), b = mr_funtik(p2);
	int m = 0;
	while (s1 > 0 && s2 > 0)
	{
		cout << p1 << " :" << endl;
		cout << "    ";
		for (int g = 0; g < 10; g++)
		{
			cout << g + 1 << " ";
		}
		cout << endl;
		cout << "    ";
		for (int g = 0; g < 10; g++)
		{
			cout << "__";
		}
		cout << endl;
		for (int j = 0; j < 10; j++)
		{
			if (j == 9) cout << j + 1 << "| ";
			else cout << j + 1 << " | ";
			for (int g = 0; g < 10; g++) cout << a[j][g].p << " ";
			cout << endl;
		}
		cout << p2 << " :" << endl;
		cout << "    ";
		for (int g = 0; g < 10; g++)
		{
			cout << g + 1 << " ";
		}
		cout << endl;
		cout << "    ";
		for (int g = 0; g < 10; g++)
		{
			cout << "__";
		}
		cout << endl;
		for (int j = 0; j < 10; j++)
		{
			if (j == 9) cout << j + 1 << "| ";
			else cout << j + 1 << " | ";
			for (int g = 0; g < 10; g++) cout << b[j][g].p << " ";
			cout << endl;
		}
		cout << endl;
		m++;
		if (m % 2 == 1)
		{
			cout << p1 << " napadaet na koordinati : ";
			int x, y;
			cin >> x >> y;
			if (b[x - 1][y - 1].p == 0) b[x - 1][y - 1].k = "M";
			if (b[x - 1][y - 1].p != 0)
			{
				b[x - 1][y - 1].k = "X";
				s2--;
			}
		}
		if (m % 2 == 0)
		{
			cout << p2 << " napadaet na koordinati : ";
			int x, y;
			cin >> x >> y;
			if (a[x - 1][y - 1].p == 0) a[x - 1][y - 1].k = "M";
			if (a[x - 1][y - 1].p != 0)
			{
				a[x - 1][y - 1].k = "X";
				s2--;
			}
		}
		system("cls");
	}
	if (s1 == 0)
	{
		cout << p2 << " pobedil!";
	}
	if (s2 == 0)
	{
		cout << p1 << " pobedil!";
	}
	cout << "   +         +" << endl;
	cout << "  + +       + +" << endl;
	cout << " +   + + + +   +" << endl;
	cout << "+               +" << endl;
	cout << "+    +     +    +" << endl;
	cout << "+       +       +" << endl;
	cout << " +      +      +" << endl;
	cout << "  + + + + + + +" << endl;
	cout << "+               +" << endl;
}
