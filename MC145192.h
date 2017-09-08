/* 
   MC145192.h - MC145192 PLL library

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   aunsigned long with this program.  If not, see <http://www.gnu.org/licenses/>.

 */
#ifndef MC145192_h
#define MC145192_h

#include "Arduino.h"

class MC145192
{
    public: 
        MC145192();

    private:
        void write(unsigned long);

    private:
        byte _cs_pin;
};
 
#endif
