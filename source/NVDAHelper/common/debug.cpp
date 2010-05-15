/*
This file is a part of the NVDA project.
URL: http://www.nvda-project.org/
Copyright 2006-2010 NVDA contributers.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License version 2.1, as published by
the Free Software Foundation.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
This license can be found at:
http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
*/

#include <fstream>
#include "debug.h"

using namespace std;

wostream* _debugFile=NULL;

void debug_start(wostream* s) {
	if(!_debugFile) {
		_debugFile=s;
		(*_debugFile)<<L"Debugging started"<<endl;
	}
}

void debug_end() {
	if(_debugFile) {
		(*_debugFile)<<L"Debugging ended"<<endl;
		_debugFile=NULL;
	}
}
