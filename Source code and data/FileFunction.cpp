#include"MainFunction.h"
//Hàm bên ngoài
bool FolderExists(const CString& strFolderName)
{
	return GetFileAttributes(strFolderName) != INVALID_FILE_ATTRIBUTES;
}
void textcolor(int x)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}
void gotoxy(int x, int y)
{
	HANDLE hConsoleOuput;
	COORD Cursor_an_Pos = { x ,y };
	hConsoleOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOuput, Cursor_an_Pos);
}
void Setcolor(int backgound_color, int text_color)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	int color_code = backgound_color * 16 + text_color;
	SetConsoleTextAttribute(hStdout, color_code);
}
void ShowCur(bool CursorVisibility)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO ConCurInf;

	ConCurInf.dwSize = 10;
	ConCurInf.bVisible = CursorVisibility;

	SetConsoleCursorInfo(handle, &ConCurInf);
}
bool is_emptyy(string s)
{
	ifstream filestr;
	string a;
	filestr.open(s, ios::in);
	filestr >> a;
	filestr.close();

	if (a.length() == 0) { return true; }
	else { return false; }
}
bool checkBirth(string birth)
{
	if (birth.length() != 10)
		return false;
	for (int i = 0; i < birth.length(); i++)
	{
		if (i != 2 && i != 5 && isdigit(birth[i]) == 0)
			return false;
		if ((i == 2 || i == 5) && birth[i] != '/')
			return false;
	}
	return true;
}
bool checkFileWithFstream(string path) {
	ifstream isf(path);
	return isf.good();
}
bool CheckClass(string Class)
{
    if (Class.length() == 7)
    {
        if (Class[0] < 48 || Class[0] > 57 || Class[1] < 48 || Class[1] > 57)
        {
            return false;
        }
        int year = 0, vt = 0;
        while (vt < 2)
        {
            year = Class[vt] - '0' + year * 10;
            vt++;
        }
        string pr = "", pr1;
        while (vt < 5)
        {
            pr = pr + Class[vt];
            vt++;
        }
        pr1 = pr + Class[vt];
        if (pr == "CLC")
        {
            int cs = 0;
            while (vt < Class.length())
            {
                cs = Class[vt] - '0' + cs * 10;
                vt++;
            }
            if (cs > 10 || cs < 1)
            {
                return false;
            }
            return true;
        }
        else if (pr1 == "APCS")
        {
            if (Class[6] == '1' || Class[6] == '2')
            {
                return true;
            }
            else return false;
        }
        else return false;
    }
    if (Class.length() == 6)
    {
        if (Class[0] < 48 || Class[0] > 57 || Class[1] < 48 || Class[1] > 57)
        {
            return false;
        }
        if (Class[2] != 'V' || Class[3] != 'P')
        {
            return false;
        }
        return true;
    }
    return false;
}
bool CheckClass_Year(string Class, string Year)
{
    if (!CheckClass(Class) || !checkyear(Year))
    {
        return false;
    }
    if (Class[0] == Year[2] && Class[1] == Year[3])
    {
        return true;
    }
    return false;
}