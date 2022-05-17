#pragma once
#include "class.h"
#define X_MENU1 50
#define Y_MENU1 10
#define ROW_WEIGHT_MENU1 20
#define X_MENU2 35
#define Y_MENU2 7
#define Y_MENU3 5
#define ROW_WEIGHT 50
#define ROW_HEIGHT 1
#define X_LOGIN 45
#define Y_LOGIN 8
#define HEIGHT_LOGIN 12
#define WEIGHT_LOGIN 29
#define HEIGHT_CHANGEPASS 15
bool FolderExists(const CString& strFolderName);
void textcolor(int x);
void gotoxy(int x, int y);
void Setcolor(int backgound_color, int text_color);
void ShowCur(bool CursorVisibility);
bool is_emptyy(string s);
bool checkBirth(string birth);
bool checkFileWithFstream(string path);
bool CheckClass(string Class);
bool CheckClass_Year(string Class, string Year);


YearCreated* MakeNodeCreateYear(string year);
int CutYear(string year);
void Push1CreatedYear_Tail(YearCreated*& head, string year);
void Push1CreatedYear_Head(YearCreated*& head, string year);
void PushArrangeCreatedYear(YearCreated*& head, string year);
void OutputCreatedYear_File(YearCreated*& head);
void PushAllCreatedYear_File(YearCreated*& head);
void DeleteListCreatedYear(YearCreated*& head);
void OutputList(YearCreated*& head);
bool checkyear(string Year);
int CutYear(string year);

Something* MakeNodeSomething(string s);
void Push1Something_Tail(Something*& head, string s);
void Push1Something_Head(Something*& head, string s);
void OutputListSomething(Something*& head);
void DeleteListSomething(Something*& head);
bool CheckNameClassInYear(Something*& head, string nameclass);

void DeletetempStudent(tempStudent*& head, string& IDstudent);

void Create_Board_Content(int& x, int y, int& h, int& w, string content, int& ythanhsang, int j = 16);
void Create_n_Board_Col(int n, int x, int y, int h, int w);
void CreateClassMenu(int x, int y, int h, int w, int ythanhsang);
void RegisterCourseMenu(int x, int y, int h, int w, int ythanhsang);
void CourseMenu(int x, int y, int h, int w, int ythanhsang);
void ScoreMenuStaff(int x, int y, int h, int w, int ythanhsang);

void Menu_SinhVien(int& x, int& y, int& h, int& w, int& ythanhsang);
void Menu_GiaoVu(int& x, int& y, int& h, int& w, int& ythanhsang);
bool GiaoDienDoiMatKhau_SinhVien(int x, int y, int h, int w, student& student1);
bool GiaoDienDoiMatKhau_GiaoVu(int x, int y, int h, int w, staff& staff1);
bool Login(int x, int y, int h, int w, bool check, string& path);
void GiaoDienSinhVien(int x, int y, int h, int w, int ythanhsang, string& path, semester& currentsemester, const date& currentday);
void GiaoDienGiaoVu(int x, int y, int h, int w, int ythanhsang, string& path, semester& currentsemester, date& currentday);
void MainProgram(int n, int x, int y, int h, int w);

