#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"
#define dir "/usr/local/share/samples/"
#define base "drums"
/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */
char *PROGRAM_NAME = "drum";
char *PROGRAM_VERSION = "0.01";

static void verse() {

	int spot;
	drumkitKick(1, 1, "x-------x-------", (char *) 0); //isetLocation(spot);
	drumkitSnare(1,1, "x---------------", (char *) 0); //setLocation(spot);
	//drumkitHHClosed(8, 1, "^-^-^-^-^-^-^-^-", (char *) 0); setLocation(spot);
	drumkitKick(1,1,"x-------x-------", (char *) 0);
	drumkitSnare(1,1, "x---------------", (char *) 0);

	drumkitKick(1,1,"x-------x-------", (char *) 0);
	drumkitSnare(1,1, "x---------------", (char *) 0);

	drumkitKick(1,1,"x-------x-------", (char *) 0);
	drumkitSnare(1,1, "x-----------x---", (char *) 0);

	drumkitKick(1, 1, "x-------x-------", (char *) 0); //isetLocation(spot);
	drumkitSnare(1,1, "x---------------", (char *) 0); //setLocation(spot);
	//drumkitHHClosed(8, 1, "^-^-^-^-^-^-^-^-", (char *) 0); setLocation(spot);
	drumkitKick(1,1,"x-------x-------", (char *) 0);
	drumkitSnare(1,1, "x---------------", (char *) 0);

	drumkitKick(1,1,"x-------x-------", (char *) 0);
	drumkitSnare(1,1, "x---------------", (char *) 0);

	drumkitKick(1,1,"x-------x-------", (char *) 0);
	drumkitSnare(1,1, "x-----------x---", (char *) 0);
}

int main() {
//int instrument;
//int octave = 4;
int spot;
songInit();
//instrument = readScale(dir,base);
setTempo(280);
setTime(4,4);
setStride(0.05);
setSustain(0.99995);
setAmplitude(0.4);
openOutput("drum.rra",0,0);

  rest(8);
  rest(8);
  rest(8);
  rest(8);
	// second measure
  rest(8);
  rest(8);
  rest(8);
  rest(8);
//  rest(8);
//  rest(8);
verse();
verse();
spot = getLocation();
drumkitHHClosed(16, 1, "^-^-^-^-^-^-^-^-", (char *) 0); setLocation(spot);
verse();
verse();
verse();

//
verse();
verse();
//spot = getLocation();
//drumkitHHClosed(16, 1, "^-^-^-^-^-^-^-^-", (char *) 0); setLocation(spot);
verse();
//
//verse();

closeOutput();

return 0;
}
