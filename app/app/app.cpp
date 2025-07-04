/////////////////////////////////////////////////////////////////////////////
//===========================================================================﻿
#include <iostream>
#include <Windows.h>

#include "run_1.hpp"
#include "run_2.hpp"
#include "run_3.hpp"


/////////////////////////////////////////////////////////////////////////////
//===========================================================================﻿
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::wcout.imbue(std::locale("ko_KR.UTF-8"));
    std::wcin.imbue(std::locale("ko_KR.UTF-8"));

    std::wcout << L"시작" << std::endl;

    run_1();
    run_2();
    run_3();

    std::wcout << L"종료" << std::endl;

	return 0;
}
