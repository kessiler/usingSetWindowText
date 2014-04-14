#include <Windows.h>
#include <iostream>
using namespace std;

int main() {
	/*	Example with SetWindowText 
		SetWindowText causes a WM_SETTEXT message to be sent to the specified window or control.
	*/
	cout << "searching window calculator" << endl;
	HWND hWnd = FindWindow("CalcFrame", "");
	if (hWnd) {
		cout << "window located and ready to change" << endl;
		SetWindowTextA(hWnd, "SO :)");
	} else {
		cout << "window not found" << endl;
	}
	system("pause");
	return 0;
}