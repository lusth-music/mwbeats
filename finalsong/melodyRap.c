#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <songlib/util.h>
#include <songlib/songlib.h>

#define dir "/usr/local/share/samples/piano/"
#define base "bright_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "melodyRap";
char *PROGRAM_VERSION = "0.01";

static int last = 0;

static void verse(int instrument, int octave) {	
	//TESTING START

  
    play(2.0, instrument, octave+1, D);
    play(4.0, instrument, octave+1, D);
    rest(1);
    play(0.5, instrument, octave+1, C);
	play(0.5, instrument, octave, A);
    play(4.0, instrument, octave+1, C);
    rest(2);
    play(1.0, instrument, octave, D);
    play(1.0, instrument, octave, F);
    play(2.0, instrument, octave, G);
    play(2.0, instrument, octave, A);
    play(1.0, instrument, octave, G);
    play(1.0, instrument, octave, F);
    play(4.0, instrument, octave, F);
	rest(4);
// pick-up verse
	play(1.0, instrument, octave, D);
    play(1.0, instrument, octave, F);

  
    play(2.0, instrument, octave+1, D);
    play(4.0, instrument, octave+1, D);
    rest(1);
    play(0.5, instrument, octave+1, C);
	play(0.5, instrument, octave, A);
    play(4.0, instrument, octave+1, C);
    rest(2);
    play(1.0, instrument, octave, D);
    play(1.0, instrument, octave, F);
    play(2.0, instrument, octave, G);
    play(2.0, instrument, octave, A);
    play(1.0, instrument, octave, G);
    play(1.0, instrument, octave, F);
    play(4.0, instrument, octave, F);
	rest(4);
// pick-up verse
	play(1.0, instrument, octave, D);
    play(1.0, instrument, octave, F);

  
    play(2.0, instrument, octave+1, D);
    play(4.0, instrument, octave+1, D);
    rest(1);
    play(0.5, instrument, octave+1, C);
	play(0.5, instrument, octave, A);
    play(4.0, instrument, octave+1, C);
    rest(2);
    play(1.0, instrument, octave, D);
    play(1.0, instrument, octave, F);
    play(2.0, instrument, octave, G);
    play(2.0, instrument, octave, A);
    play(1.0, instrument, octave, G);
    play(1.0, instrument, octave, F);
    play(4.0, instrument, octave, F);
	rest(4);
// pick-up verse
	play(1.0, instrument, octave, D);
    play(1.0, instrument, octave, F);

  
    play(2.0, instrument, octave+1, D);
    play(4.0, instrument, octave+1, D);
    rest(1);
    play(0.5, instrument, octave+1, C);
	play(0.5, instrument, octave, A);
    play(4.0, instrument, octave+1, C);
    rest(2);
    play(1.0, instrument, octave, D);
    play(1.0, instrument, octave, F);
    play(2.0, instrument, octave, G);
    play(2.0, instrument, octave, A);
    play(1.0, instrument, octave, G);
    play(1.0, instrument, octave, F);
    play(4.0, instrument, octave, F);
	rest(4);
	// END TESTING
}

static void verseStart(int instrument, int octave) {
	// first measure
  rest(8);
  rest(8);
	rest(8);
  rest(8);
	// second measure
  rest(8);
  rest(8);
  rest(8);
  rest(8);
  // start repeat
	rest(2);
	play(1.0, instrument, octave, F);
  play(1.0, instrument, octave, G);
  play(1.0, instrument, octave, A);
	play(1.0, instrument, octave, G);
  play(1.0, instrument, octave, F);
  play(1.0, instrument, octave, G);
  play(1.0, instrument, octave, A);
	play(1.0, instrument, octave, G);
  play(1.0, instrument, octave, F);
  play(1.0, instrument, octave, G);
  play(1.0, instrument, octave, A);
	play(1.0, instrument, octave, G);
  play(2.0, instrument, octave, F);
  //
	rest(2);
	//
	play(1.0, instrument, octave, F);
	play(1.0, instrument, octave, G);
	play(1.0, instrument, octave, A);
	play(1.0, instrument, octave, G);
	play(1.0, instrument, octave, F);
	rest(1);
	play(2.0, instrument, octave, F);
  play(2.0, instrument, octave, F);
  play(2.0, instrument, octave, C);
	play(2.0, instrument, octave, G);
	play(2.0, instrument, octave, F);
  //
	//
	// second verse
	play(1.0, instrument, octave, F);
  play(1.0, instrument, octave, G);
  play(1.0, instrument, octave, A);
	play(1.0, instrument, octave, G);
  play(1.0, instrument, octave, F);
  play(1.0, instrument, octave, G);
  play(1.0, instrument, octave, A);
	play(1.0, instrument, octave, G);
  play(1.0, instrument, octave, F);
  play(1.0, instrument, octave, G);
  play(1.0, instrument, octave, A);
	play(1.0, instrument, octave, G);
  play(2.0, instrument, octave, F);
  //
	rest(2);
  //
	play(1.0, instrument, octave, F);
	play(1.0, instrument, octave, G);
	play(1.0, instrument, octave, A);
	play(1.0, instrument, octave, G);
	play(1.0, instrument, octave, F);
	rest(1);
	play(2.0, instrument, octave, F);
  play(2.0, instrument, octave, F);
  play(2.0, instrument, octave, G);
	play(2.0, instrument, octave, F);
}

static void song(int instrument, int octave)
{
	startMeasure();

	verseStart(instrument, octave);
	verse(instrument, octave);
    rest(8);
    rest(8);
    rest(8);
    rest(8);
	//
	rest(8);
	rest(8);
	//
    verse(instrument, octave);
    verse(instrument, octave);

	if (last)
	    setSustain(0.999999);

  	checkMeasure();
}

int main(void)
{
  
  int instrument;
  int octave = 4;

  songInit();

  instrument = readScale(dir, base);

  setTempo(280);
  setTime(4, 4);
  setStride(0.05);
  setSustain(0.99995);
  setAmplitude(0.4);

  openOutput("melodyRap.rra", 0, 0);

  song(instrument, octave);
  last = 1;
  //verse(instrument, octave);

  closeOutput();
  
  return 0;
}
