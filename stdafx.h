// stdafx.h: do��cz plik do standardowych systemowych plik�w do��czanych,
// lub specyficzne dla projektu pliki do��czane, kt�re s� cz�sto wykorzystywane, ale
// s� rzadko zmieniane
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Wyklucz rzadko u�ywane rzeczy z nag��wk�w systemu Windows
// Pliki nag��wkowe systemu Windows:
#include <process.h>
#include <Windows.h>
#include <cstring>
#include <string>
#include <fcntl.h>
#include <io.h>
#include <iostream>
#include <winsock.h>
#include <stdarg.h>
#include <stdio.h>
#include <sstream>
#include <ctime>
#include <conio.h>
#include <vector>
#include <algorithm>

#pragma comment(lib, "user32.lib")

// TODO: W tym miejscu odwo�aj si� do dodatkowych nag��wk�w wymaganych przez program
