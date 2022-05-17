#include"MainFunction.h"
void Create_Board_Content(int& x, int y, int& h, int& w, string content, int& ythanhsang, int j)
{
	for (int i = x; i < x + w; i++)
	{
		gotoxy(i, y); cout << "=";
		gotoxy(i, y + h + 1); cout << "=";
	}
	if (y + 1 == ythanhsang)
	{
		Setcolor(7, 0); gotoxy(x + j, y + 1); cout << content; Setcolor(0, 7);
	}
	else
	{
		gotoxy(x + j, y + 1); cout << content;
	}
	for (int i = y + 1; i <= y + h; i++)
	{
		gotoxy(x, i); cout << char(124);
		gotoxy(x + w - 1, i); cout << char(124);
	}
	gotoxy(0, y + h + 2);
}
void Create_Board(int x, int y, int h, int w)
{
	for (int i = x; i < x + w; i++)
	{
		gotoxy(i, y); cout << "=";
		gotoxy(i, y + h + 1); cout << "=";
	}
	for (int i = y + 1; i <= y + h; i++)
	{
		gotoxy(x, i); cout << char(124);
		gotoxy(x + w - 1, i); cout << char(124);
	}
	gotoxy(0, y + h + 2);
}
void Create_n_Board_Col(int n, int x, int y, int h, int w)
{
	for (int i = 0; i < n; i++)
	{
		Create_Board(x, y + (h + 1) * i, h, w);
	}
}
void CreateClassMenu(int x, int y, int h, int w, int ythanhsang) {
	Create_Board_Content(x, y, h, w, "CREATE CLASSES FROM FILE", ythanhsang);
	Create_Board_Content(x, y + 1 * (h + 1), h, w, "CREATE CLASS", ythanhsang);
	Create_Board_Content(x, y + 2 * (h + 1), h, w, "VIEW LIST CLASS", ythanhsang);
	Create_Board_Content(x, y + 3 * (h + 1), h, w, "GO BACK TO MENU", ythanhsang);
}
void RegisterCourseMenu(int x, int y, int h, int w, int ythanhsang) {
	Create_Board_Content(x, y, h, w, "REGIST COURSE", ythanhsang);
	Create_Board_Content(x, y + h + 1, h, w, "VIEW REGISTED COURSE", ythanhsang);
	Create_Board_Content(x, y + 2 * (h + 1), h, w, "GO BACK TO MENU", ythanhsang);
}
void CourseMenu(int x, int y, int h, int w, int ythanhsang) {
	Create_Board_Content(x, y, h, w, "CREATE COURSE", ythanhsang);
	Create_Board_Content(x, y + 1 * (h + 1), h, w, "LIST COURSE", ythanhsang);
	Create_Board_Content(x, y + 2 * (h + 1), h, w, "REMOVE COURSE", ythanhsang);
	Create_Board_Content(x, y + 3 * (h + 1), h, w, "UPDATE COURSE", ythanhsang);
	Create_Board_Content(x, y + 4 * (h + 1), h, w, "GO BACK TO MENU", ythanhsang);
}
void ScoreMenuStaff(int x, int y, int h, int w, int ythanhsang)
{
	Create_Board_Content(x, y, h, w, "CREATE FILE SCORE", ythanhsang);
	Create_Board_Content(x, y + 1 * (h + 1), h, w, "IMPORT SCORE STUDENT", ythanhsang);
	Create_Board_Content(x, y + 2 * (h + 1), h, w, "UPDATE SCORE STUDENT", ythanhsang);
	Create_Board_Content(x, y + 3 * (h + 1), h, w, "VIEW CLASS SCORE", ythanhsang);
	Create_Board_Content(x, y + 4 * (h + 1), h, w, "VIEW COURSE SCORE", ythanhsang);
	Create_Board_Content(x, y + 5 * (h + 1), h, w, "GO BACK TO MENU", ythanhsang);
}
void Menu_SinhVien(int& x, int& y, int& h, int& w, int& ythanhsang)
{
	Create_Board_Content(x, y, h, w, "YOUR INFORMATION", ythanhsang);
	Create_Board_Content(x, y+h+1, h, w, "EDIT PROFILE", ythanhsang);
	Create_Board_Content(x, y + 2*(h + 1), h, w, "CHANGE PASSWORD", ythanhsang);
	Create_Board_Content(x, y + 3 * (h + 1), h, w, "VIEW MEMBER IN YOUR CLASS", ythanhsang);
	Create_Board_Content(x, y + 4 * (h + 1), h, w, "REGISTER COURSE", ythanhsang);
	Create_Board_Content(x, y + 5 * (h + 1), h, w, "SCORE COURSE", ythanhsang);
	Create_Board_Content(x, y + 6 * (h + 1), h, w, "LOG OUT", ythanhsang);
}
void Menu_GiaoVu(int& x, int& y, int& h, int& w, int& ythanhsang)
{
	Create_Board_Content(x, y, h, w, "YOUR INFORMATION", ythanhsang);
	Create_Board_Content(x, y+h+1, h, w, "EDIT PROFILE", ythanhsang);
	Create_Board_Content(x, y + 2*(h + 1), h, w, "CHANGE PASSWORD", ythanhsang);
	Create_Board_Content(x, y + 3 * (h + 1), h, w, "CREATE SCHOOLYEAR", ythanhsang);
	Create_Board_Content(x, y + 4 * (h + 1), h, w, "CLASS", ythanhsang);
	Create_Board_Content(x, y + 5 * (h + 1), h, w, "CREATE SEMESTER", ythanhsang);
	Create_Board_Content(x, y + 6 * (h + 1), h, w, "COURSE", ythanhsang);
	Create_Board_Content(x, y + 7 * (h + 1), h, w, "ADD STUDENT", ythanhsang);
	Create_Board_Content(x, y + 8 * (h + 1), h, w, "SCORE", ythanhsang);
	Create_Board_Content(x, y + 9 * (h + 1), h, w, "LOG OUT", ythanhsang);
	Create_Board_Content(x, y + 10 * (h + 1), h, w, "CHANGE DAY (BE CAREFUL)", ythanhsang);
}
bool GiaoDienDoiMatKhau_SinhVien(int x, int y, int h, int w, student& student1)
{
	ShowCur(1);
	Setcolor(1, 0);
	string d;
	for (int i = y; i <= y + h + 1; i++)
	{
		for (int j = x; j < x + w; j++)
		{
			gotoxy(j, i); cout << " ";
		}
	}
	Setcolor(0, 7);
	Setcolor(11, 0);
	gotoxy(x, y); cout << "                 Change password                  ";
	Setcolor(0, 7);
	gotoxy(x + 1, y + 3); cout << "Current password:";
	gotoxy(x + 1, y + 7); cout << "New password (max 25char):";
	gotoxy(x + 1, y + 11); cout << "New password again:";
	Setcolor(7, 0);
	gotoxy(x + 8, y + 14); cout << "AFTER ENTER TO SAVE CHANGE PLEASE LOG OUT";
	gotoxy(x + 12, y + 15); cout << "ENTER TO SAVE CHANGE";
	for (int i = x + 1; i < x + w - 1; i++)
	{
		gotoxy(i, y + 4); cout << " ";
		gotoxy(i, y + 8); cout << " ";
		gotoxy(i, y + 12); cout << " ";
	}
	char currentpassword[27]; int j = 0;
	gotoxy(x + 1, y + 4);
	while (true)
	{
		char temp = _getch();
		if (((temp >= 'a' && temp <= 'z') || (temp >= 'A' && temp <= 'Z') || (temp >= '0' && temp <= '9')) && j <= 25)
		{
			currentpassword[j] = temp;
			++j;
			cout << currentpassword[j - 1];
		}
		if (temp == '\b' && j >= 1)
		{
			cout << "\b \b";
			--j;
		}
		if (temp == '\r')
		{
			if (j > 0)
			{
				currentpassword[j] = '\0';
				d = currentpassword;
				if (d == student1.getpassword())
				{
					Setcolor(1, 0);
					gotoxy(x + 1, y + 2); cout << "                ";
					gotoxy(x + 1, y + 5); cout << "                          ";
					Setcolor(7, 0);
					break;
				}
				else
				{
					gotoxy(x + 1, y + 2); cout << "Wrong password !"; gotoxy(x + j + 1, y + 4);
				}
			}
			else
			{
				Setcolor(0, 4);
				gotoxy(x + 1, y + 5); cout << "You didn't type anything !";
				gotoxy(x + 1, y + 4);
				Setcolor(7, 0);
			}
		}
		if (temp == 27)
		{
			Setcolor(0, 7);
			return false;
		}
	}
	char newpassword[27]; int i = 0;
	gotoxy(x + 1, y + 8);
	while (true)
	{
		char temp = _getch();
		if (((temp >= 'a' && temp <= 'z') || (temp >= 'A' && temp <= 'Z') || (temp >= '0' && temp <= '9')) && i <= 25)
		{
			newpassword[i] = temp;
			++i;
			cout << newpassword[i - 1];
		}
		if (temp == '\b' && i >= 1)
		{
			cout << "\b \b";
			--i;
		}
		if (temp == '\r')
		{
			if (i > 0)
			{
				newpassword[i] = '\0';
				d = newpassword;
				Setcolor(1, 0);
				gotoxy(x + 1, y + 9); cout << "                          ";
				Setcolor(7, 0);
				break;
			}
			else
			{
				Setcolor(0, 4);
				gotoxy(x + 1, y + 9); cout << "You didn't type anything !";
				gotoxy(x + 1, y + 8);
				Setcolor(7, 0);
			}
		}
		if (temp == 27)
		{
			Setcolor(0, 7);
			return false;
		}
	}
	char checkpassword[27]; int k = 0;
	gotoxy(x + 1, y + 12);
	while (true)
	{
		char temp = _getch();
		if (((temp >= 'a' && temp <= 'z') || (temp >= 'A' && temp <= 'Z') || (temp >= '0' && temp <= '9')) && k <= 25)
		{
			checkpassword[k] = temp;
			++k;
			cout << checkpassword[k - 1];
		}
		if (temp == '\b' && k >= 1)
		{
			cout << "\b \b";
			--k;
		}
		if (temp == '\r')
		{
			if (k > 0)
			{
				checkpassword[k] = '\0';
				string temp = checkpassword;
				if (temp == d)
				{
					student1.changepassword(d);
					student1.savefile("sinhvien//" + student1.getID() + "//" + student1.getID() + ".txt");
					break;
				}
				else
				{
					gotoxy(x + 1, y + 10); cout << "Wrong password !"; gotoxy(x + k + 1, y + 12);
				}
			}
			else
			{
				Setcolor(0, 4);
				gotoxy(x + 1, y + 13); cout << "You didn't type anything !";
				gotoxy(x + 1, y + 12);
				Setcolor(7, 0);
			}
		}
		if (temp == 27)
		{
			Setcolor(0, 7);
			return false;
		}
	}
	Setcolor(0, 7);
	gotoxy(0, y + h + 2);
	return true;
}
bool GiaoDienDoiMatKhau_GiaoVu(int x, int y, int h, int w, staff& staff1)
{
	ShowCur(1);
	Setcolor(1, 0);
	string d;
	for (int i = y; i <= y + h + 1; i++)
	{
		for (int j = x; j < x + w; j++)
		{
			gotoxy(j, i); cout << " ";
		}
	}
	Setcolor(0, 7);
	Setcolor(11, 0);
	gotoxy(x, y); cout << "                 Change password                  ";
	Setcolor(0, 7);
	gotoxy(x + 1, y + 3); cout << "Current password:";
	gotoxy(x + 1, y + 7); cout << "New password (max 25char):";
	gotoxy(x + 1, y + 11); cout << "New password again:";
	Setcolor(7, 0);
	gotoxy(x + 8, y + 14); cout << "AFTER ENTER TO SAVE CHANGE PLEASE LOG OUT";
	gotoxy(x + 12, y + 15); cout << "ENTER to save change";
	for (int i = x + 1; i < x + w - 1; i++)
	{
		gotoxy(i, y + 4); cout << " ";
		gotoxy(i, y + 8); cout << " ";
		gotoxy(i, y + 12); cout << " ";
	}
	char currentpassword[27]; int j = 0;
	gotoxy(x + 1, y + 4);
	while (true)
	{
		char temp = _getch();
		if (((temp >= 'a' && temp <= 'z') || (temp >= 'A' && temp <= 'Z') || (temp >= '0' && temp <= '9')) && j <= 25)
		{
			currentpassword[j] = temp;
			++j;
			cout << currentpassword[j - 1];
		}
		if (temp == '\b' && j >= 1)
		{
			cout << "\b \b";
			--j;
		}
		if (temp == '\r')
		{
			if (j > 0)
			{
				currentpassword[j] = '\0';
				d = currentpassword;
				if (d == staff1.getpassword())
				{
					Setcolor(1, 0);
					gotoxy(x + 1, y + 2); cout << "                ";
					gotoxy(x + 1, y + 5); cout << "                          ";
					Setcolor(7, 0);
					break;
				}
				else
				{
					gotoxy(x + 1, y + 2); cout << "Wrong password !"; gotoxy(x + j + 1, y + 4);
				}
			}
			else
			{
				Setcolor(0, 4);
				gotoxy(x + 1, y + 5); cout << "You didn't type anything !";
				gotoxy(x + 1, y + 4);
				Setcolor(7, 0);
			}
		}
		if (temp == 27)
		{
			Setcolor(0, 7);
			return false;
		}
	}
	char newpassword[27]; int i = 0;
	gotoxy(x + 1, y + 8);
	while (true)
	{
		char temp = _getch();
		if (((temp >= 'a' && temp <= 'z') || (temp >= 'A' && temp <= 'Z') || (temp >= '0' && temp <= '9')) && i <= 25)
		{
			newpassword[i] = temp;
			++i;
			cout << newpassword[i - 1];
		}
		if (temp == '\b' && i >= 1)
		{
			cout << "\b \b";
			--i;
		}
		if (temp == '\r')
		{
			if (i > 0)
			{
				newpassword[i] = '\0';
				d = newpassword;
				Setcolor(1, 0);
				gotoxy(x + 1, y + 9); cout << "                          ";
				Setcolor(7, 0);
				break;
			}
			else
			{
				Setcolor(0, 4);
				gotoxy(x + 1, y + 9); cout << "You didn't type anything !";
				gotoxy(x + 1, y + 8);
				Setcolor(7, 0);
			}
		}
		if (temp == 27)
		{
			Setcolor(0, 7);
			return false;
		}
	}
	char checkpassword[27]; int k = 0;
	gotoxy(x + 1, y + 12);
	while (true)
	{
		char temp = _getch();
		if (((temp >= 'a' && temp <= 'z') || (temp >= 'A' && temp <= 'Z') || (temp >= '0' && temp <= '9')) && k <= 25)
		{
			checkpassword[k] = temp;
			++k;
			cout << checkpassword[k - 1];
		}
		if (temp == '\b' && k >= 1)
		{
			cout << "\b \b";
			--k;
		}
		if (temp == '\r')
		{
			if (k > 0)
			{
				checkpassword[k] = '\0';
				string temp = checkpassword;
				if (temp == d)
				{
					staff1.changepassword(d);
					staff1.savefile("giaovu//GV" + staff1.getID() + ".txt");
					break;
				}
				else
				{
					gotoxy(x + 1, y + 10); cout << "Wrong password !"; gotoxy(x + k + 1, y + 12);
				}
			}
			else
			{
				Setcolor(0, 4);
				gotoxy(x + 1, y + 13); cout << "You didn't type anything !";
				gotoxy(x + 1, y + 12);
				Setcolor(7, 0);
			}
		}
		if (temp == 27)
		{
			Setcolor(0, 7);
			return false;
		}
	}
	Setcolor(0, 7);
	gotoxy(0, y + h + 2);
	return true;
}
bool Login(int x, int y, int h, int w, bool check, string& path)
{
	ifstream filein;
	string matkhau;
	string d;
	bool checkdone = false;
	bool checkusername = false;
	bool checkpassword = false;
	Setcolor(1, 0);
	for (int i = y; i <= y + h + 1; i++)
	{
		for (int j = x; j < x + w; j++)
		{
			gotoxy(j, i); cout << " ";
		}
	}
	Setcolor(11, 0);
	if (check)
	{
		gotoxy(x, y); cout << "           STUDENT           ";
	}
	else
	{
		gotoxy(x, y); cout << "            STAFF            ";
	}
	Setcolor(0, 7);
	gotoxy(x + 1, y + 3); cout << "Username:";
	gotoxy(x + 1, y + 7); cout << "Password: ";
	Setcolor(7, 0);
	for (int i = x + 1; i < x + w - 1; i++)
	{
		gotoxy(i, y + 4); cout << " ";
		gotoxy(i, y + 8); cout << " ";
	}
	gotoxy(x + 6, y + 10); cout << "ENTER to login";
	gotoxy(x + 6, y + 11); cout << "ESC to go back";
	char s[27]; int j = 0;
	char a[27]; int i = 0;
	do
	{
		gotoxy(x + 1, y + 4);
		while (true)
		{
			char temp = _getch();
			if (((temp >= 'a' && temp <= 'z') || (temp >= 'A' && temp <= 'Z') || (temp >= '0' && temp <= '9')) && j <= 25)
			{
				s[j] = temp;
				++j;
				cout << s[j - 1];
			}
			if (temp == '\b' && j >= 1)
			{
				cout << "\b \b";
				--j;
			}
			if (temp == '\r')
			{
				if (j > 0)
				{
					s[j] = '\0';
					Setcolor(1, 0);
					gotoxy(x + 1, y + 5); cout << "                        ";
					Setcolor(7, 0);
					d = s;
					if (check)
					{
						d = "sinhvien\\" + d + "\\" + d + ".txt";
					}
					else
					{
						d = "giaovu\\" + d + ".txt";
					}
					filein.open(d, ios::in);
					if (filein.fail() == false)
					{
						filein >> matkhau;
						checkusername = true;
					}
					break;
				}
				else
				{
					Setcolor(0, 4);
					gotoxy(x + 1, y + 5); cout << "You did't type anything!";
					gotoxy(x + 1, y + 4);
					Setcolor(7, 0);
				}
			}
			if (temp == 27)
			{
				Setcolor(0, 7);
				return false;
			}
		}
		gotoxy(x + 1, y + 8);
		while (true)
		{
			char temp = _getch();
			if (((temp >= 'a' && temp <= 'z') || (temp >= 'A' && temp <= 'Z') || (temp >= '0' && temp <= '9')) && i <= 25)
			{
				a[i] = temp;
				++i;
				cout << "*";
			}
			if (temp == '\b' && i >= 1)
			{
				cout << "\b \b";
				--i;
			}
			if (temp == '\r' && i > 0)
			{
				a[i] = '\0';
				string mk = a;
				if (matkhau == mk && checkusername == true)
				{
					filein.close();
					Setcolor(1, 0);
					gotoxy(x + 1, y + 2); cout << "                           ";
					Setcolor(7, 0);
					path = d;
					checkdone = true;
					Setcolor(7, 0);
					break;
				}
				else
				{
					filein.close();
					gotoxy(x + 1, y + 2); cout << "Wrong username or password!";
					gotoxy(x + 1, y + 4); cout << "                           ";
					gotoxy(x + 1, y + 8); cout << "                           ";
					i = 0; j = 0;
					checkusername = false;
					matkhau = " ";
					break;
				}
			}
			if (temp == 27)
			{
				Setcolor(0, 7);
				return false;
			}
		}
	} while (checkdone == false);
	Setcolor(0, 7);
	return true;
}
void GiaoDienSinhVien(int x, int y, int h, int w, int ythanhsang, string& path, semester& currentsemester, const date& currentday)
{
	student a;
	a.input_file(path);
	a.InputRegCoursetoList_file(currentsemester);
	while (true)
	{
		if (currentsemester.name != "0")
		{
			gotoxy(55, 1); cout << currentsemester.SchoolYear;
			gotoxy(49, 2); cout << currentsemester.name << " (" << currentsemester.start.day << "/" << currentsemester.start.month << "-" << currentsemester.end.day << "/" << currentsemester.end.month << ")";
			if (currentsemester.checkEndSemester == true)
			{
				cout << " END";
			}
			if (currentsemester.CheckEndReg == false)
			{
				gotoxy(46, 3); cout << "Course registration session (" << currentsemester.StartRegCourse.day << "/" << currentsemester.StartRegCourse.month << "-" << currentsemester.EndRegCourse.day << "/" << currentsemester.EndRegCourse.month << ")";
			}
			else
			{
				gotoxy(42, 3); cout << "Course registration ended or didn't happen";
			}
		}
		if (_kbhit()) {
			char c = _getch();
			if (c == -32)
			{
				c = _getch();
				if (c == 80)
				{
					if (ythanhsang == y + 6 * (h + 1) + 1)
					{
						ythanhsang = y + 1;
					}
					else
					{
						ythanhsang += 2;
					}
				}
				else if (c == 72)
				{
					if (ythanhsang == y + 1)
					{
						ythanhsang = y + 6 * (h + 1) + 1;
					}
					else
					{
						ythanhsang -= 2;
					}
				}

			}
			else if (c == 13)
			{
				system("cls");
				if (ythanhsang == y + 6 * (h + 1) + 1)
				{
					system("cls");
					break;
				}
				else if (ythanhsang == y + 1)
				{
					while (true)
					{
						if (_kbhit())
						{
							char c = _getch();
							if (c == 27)
								break;
						}
						a.output();
					}

				}
				else if (ythanhsang == y + h + 2)
				{
					a.Edit_Profile();
				}
				else if (ythanhsang == y + 2*(h + 1)+1)
				{
					GiaoDienDoiMatKhau_SinhVien(X_MENU2, Y_MENU3, HEIGHT_CHANGEPASS, ROW_WEIGHT, a);
				}
				else if (ythanhsang == y + 3 * (h + 1) + 1)
				{
					cout << "\t\t\t\t\t\t\tClass : " << a.getclass() << endl << endl;
					a.View_Class(a.getclass());
					cout << endl;
					cout << "ENTER TO GO BACK MENU" << endl;
					system("pause");
				}
				else if (ythanhsang == y + 4 * (h + 1) + 1)
				{
					a.register_course(currentsemester);
				}
				else if (ythanhsang == y + 5 * (h + 1) + 1)
				{
					a.View_Score(currentsemester);
					system("pause");
				}
				system("cls");
			}
		}
		ShowCur(0);
		Menu_SinhVien(x, y, h, w, ythanhsang);
	}

}
void GiaoDienGiaoVu(int x, int y, int h, int w, int ythanhsang, string& path, semester& currentsemester, date& currentday)
{
	staff b;
	b.input_file(path);
	YearCreated* headYear = NULL;
	if (is_emptyy("schoolyear.txt") == false)
	{
		PushAllCreatedYear_File(headYear);
	}
	while (true)
	{
		if (currentsemester.name != "0")
		{
			gotoxy(55, 1); cout << currentsemester.SchoolYear;
			gotoxy(50, 3); cout << currentsemester.name << " (" << currentsemester.start.day << "/" << currentsemester.start.month << "-" << currentsemester.end.day << "/" << currentsemester.end.month << ")";
			if (currentsemester.checkEndSemester == true)
			{
				cout << " END";
			}
		}
		if (_kbhit()) {
			char c = _getch();
			if (c == -32)
			{
				c = _getch();
				if (c == 80)
				{
					if (ythanhsang == y + 10 * (h + 1) + 1)
					{
						ythanhsang = y + 1;
					}
					else
					{
						ythanhsang += 2;
					}
				}
				else if (c == 72)
				{
					if (ythanhsang == y + 1)
					{
						ythanhsang = y + 10 * (h + 1) + 1;
					}
					else
					{
						ythanhsang -= 2;
					}
				}
			}
			else if (c == 13)
			{
				system("cls");
				if (ythanhsang == y + 9 * (h + 1) + 1)
				{
					system("cls");
					DeleteListCreatedYear(headYear);
					break;
				}
				else if (ythanhsang == y + 1)
				{
					while (true)
					{
						if (_kbhit())
						{
							char c = _getch();
							if (c == 27)
								break;
						}
						b.output();
					}
				}
				else if (ythanhsang == y + h + 2)
				{
					b.Edit_Profile();
				}
				else if (ythanhsang == y + 2*(h + 1) +1)
				{
					GiaoDienDoiMatKhau_GiaoVu(X_MENU2, Y_MENU3, HEIGHT_CHANGEPASS, ROW_WEIGHT, b);
				}
				else if (ythanhsang == y + 3 * (h + 1) + 1)
				{
					ShowCur(1);
					b.create_schoolyear(headYear, currentday);
				}
				else if (ythanhsang == y + 4 * (h + 1) + 1)
				{
					ShowCur(1);
					b.create_class(headYear);
				}
				else if (ythanhsang == y + 5 * (h + 1) + 1)
				{
					b.create_semester(currentsemester, currentday);
				}
				else if (ythanhsang == y + 6 * (h + 1) + 1)
				{
					b.create_course(currentsemester);
				}
				else if (ythanhsang == y + 7 * (h + 1) + 1)
				{
					ShowCur(1);
					b.add_student();
				}
				else if (ythanhsang == y + 8 * (h + 1) + 1)
				{
					b.Score(currentsemester,currentday);
				}
				else if (ythanhsang == y + 10*(h + 1) + 1)
				{
					ShowCur(1);
					b.change_day(currentsemester,currentday);
				}
				system("cls");
			}
		}
		ShowCur(0);
		Menu_GiaoVu(x, y, h, w, ythanhsang);
	}
}
//Hàm thao tác tất cả
void MainProgram(int n, int x, int y, int h, int w)
{
	ShowCur(0);
	int ythanhsang = y + 1;
	bool check = true;
	string path;
	semester currentsemester;
	date currentday;
	currentsemester.filein_Cur(currentday);
	currentsemester.checkendreg(currentday);
	currentsemester.checkendsemester(currentday);
	while (true)
	{
		if (ythanhsang == y + 1) 
		{
			Setcolor(7, 0);
			gotoxy(x + 6, y + 1); cout << "STUDENT";
			Setcolor(0, 7);
			gotoxy(x + 6, y + 3); cout << "STAFF";
			gotoxy(x + 6, y + 5); cout << "EXIT";
			check = true;
		}
		else if (ythanhsang == y + 3)
		{
			gotoxy(x + 6, y + 1); cout << "STUDENT";
			Setcolor(7, 0);
			gotoxy(x + 6, y + 3); cout << "STAFF";
			Setcolor(0, 7);
			gotoxy(x + 6, y + 5); cout << "EXIT";
			check = false;
		}
		else if (ythanhsang == y + 5)
		{
			gotoxy(x + 6, y + 1); cout << "STUDENT";
			gotoxy(x + 6, y + 3); cout << "STAFF";
			Setcolor(7, 0);
			gotoxy(x + 6, y + 5); cout << "EXIT";
			Setcolor(0, 7);
		}
		if (_kbhit()) {
			char c = _getch();
			if (c == -32)
			{
				c = _getch();
				if (c == 80 && ythanhsang < y + 5) 
				{
					ythanhsang += 2;
				}
				else if (c == 72 && ythanhsang > y + 1)
				{
					ythanhsang -= 2;
				}
			}
			else if (c == 13)
			{
				system("cls");
				if (ythanhsang == y + 5)break;
				while (true)
				{
					ShowCur(1);
					if (Login(X_LOGIN, Y_LOGIN, HEIGHT_LOGIN, WEIGHT_LOGIN, check, path) == false)
					{
						system("cls");
						break;
					}
					system("cls");
					ShowCur(0);
					if (check) 
					{
						GiaoDienSinhVien(X_MENU2, Y_MENU3, ROW_HEIGHT, ROW_WEIGHT, Y_MENU3+1, path, currentsemester, currentday);
					}
					else
					{
						GiaoDienGiaoVu(X_MENU2, Y_MENU3, ROW_HEIGHT, ROW_WEIGHT, Y_MENU3+1, path, currentsemester, currentday);
					}
				}
			}
			else if (c == 27)
			{
				system("cls");
				break;
			}
		}
		ShowCur(0);
		Create_n_Board_Col(n, x, y, h, w);
	}
	cout << "ENTER TO EXIT" << endl;
}