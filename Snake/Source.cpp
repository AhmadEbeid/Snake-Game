#include "ccc_win.h"
#include <chrono>
#include <thread>
#include "Key.h"
#include "Winuser.h"
#include "Windows.h"


int ccc_win_main(){

	while (1){
		short x = GetAsyncKeyState(VK_UP);
	};


	float x1 = 0.0, x2 = 4.0;
	float y1 = 0.0, y2 = 0.0;
	Point p1(x1, y1), p2(x2, y2);
	Line l1(p1, p2);
	cwin << l1;
	

	return 0;
}