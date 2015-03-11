#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <songlib/util.h>
#include <songlib/songlib.h>

#define dir "/usr/local/share/samples/mandolin/"
#define base "sample_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "melody";
char *PROGRAM_VERSION = "0.01";

static int last = 0;

static void verse(int instrument, int octave)
{
  startMeasure();
	
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
	play(1.0, instrument, 3, F);
  play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, A);
	play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, F);
  play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, A);
	play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, F);
  play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, A);
	play(1.0, instrument, 3, G);
  play(2.0, instrument, 3, F);
  //
	rest(2);
	//
	play(1.0, instrument, 3, F);
	play(1.0, instrument, 3, G);
	play(1.0, instrument, 3, A);
	play(1.0, instrument, 3, G);
	play(1.0, instrument, 3, F);
	rest(1);
	play(2.0, instrument, 3, F);
  play(2.0, instrument, 3, F);
  play(2.0, instrument, 3, C);
	play(2.0, instrument, 3, G);
	play(2.0, instrument, 3, F);
  //
	//
	// second verse
	play(1.0, instrument, 3, F);
  play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, A);
	play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, F);
  play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, A);
	play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, F);
  play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, A);
	play(1.0, instrument, 3, G);
  play(2.0, instrument, 3, F);
  //
	rest(2);
  //
	play(1.0, instrument, 3, F);
	play(1.0, instrument, 3, G);
	play(1.0, instrument, 3, A);
	play(1.0, instrument, 3, G);
	play(1.0, instrument, 3, F);
	rest(1);
	play(2.0, instrument, 3, F);
  play(2.0, instrument, 3, F);
  play(2.0, instrument, 3, G);
	play(2.0, instrument, 3, F);
  //
	//
  play(2.0, instrument, 4, D);
  play(4.0, instrument, 4, D);
  rest(1);
  play(0.5, instrument, 4, C);
	play(0.5, instrument, 3, A);
  play(4.0, instrument, 4, C);
  rest(2);
  play(1.0, instrument, 3, D);
  play(1.0, instrument, 3, F);
  play(2.0, instrument, 3, G);
  play(2.0, instrument, 3, A);
  play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, F);
  play(4.0, instrument, 3, F);
	rest(4);
	// pick-up verse
	play(1.0, instrument, 3, D);
  play(1.0, instrument, 3, F);
  play(2.0, instrument, 3, Bb);
  play(2.0, instrument, 3, A);
  play(2.0, instrument, 4, C);
  play(8.0, instrument, 3, G);
	rest(2);
	

	// repeat
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
	play(1.0, instrument, 3, F);
  play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, A);
	play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, F);
  play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, A);
	play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, F);
  play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, A);
	play(1.0, instrument, 3, G);
  play(2.0, instrument, 3, F);
  //
	rest(2);
	//
	play(1.0, instrument, 3, F);
	play(1.0, instrument, 3, G);
	play(1.0, instrument, 3, A);
	play(1.0, instrument, 3, G);
	play(1.0, instrument, 3, F);
	rest(1);
	play(2.0, instrument, 3, F);
  play(2.0, instrument, 3, F);
  play(2.0, instrument, 3, C);
	play(2.0, instrument, 3, G);
	play(2.0, instrument, 3, F);
  //
	//
	// second verse
	play(1.0, instrument, 3, F);
  play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, A);
	play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, F);
  play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, A);
	play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, F);
  play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, A);
	play(1.0, instrument, 3, G);
  play(2.0, instrument, 3, F);
  //
	rest(2);
  //
	play(1.0, instrument, 3, F);
	play(1.0, instrument, 3, G);
	play(1.0, instrument, 3, A);
	play(1.0, instrument, 3, G);
	play(1.0, instrument, 3, F);
	rest(1);
	play(2.0, instrument, 3, F);
  play(2.0, instrument, 3, F);
  play(2.0, instrument, 3, G);
	play(2.0, instrument, 3, F);
  //
	//
  play(2.0, instrument, 4, D);
  play(4.0, instrument, 4, D);
  rest(1);
  play(0.5, instrument, 4, C);
	play(0.5, instrument, 3, A);
  play(4.0, instrument, 4, C);
  rest(2);
  play(1.0, instrument, 3, D);
  play(1.0, instrument, 3, F);
  play(2.0, instrument, 3, G);
  play(2.0, instrument, 3, A);
  play(1.0, instrument, 3, G);
  play(1.0, instrument, 3, F);
  play(4.0, instrument, 3, F);
	rest(4);
	// pick-up verse
	play(1.0, instrument, 3, D);
  play(1.0, instrument, 3, F);
  play(2.0, instrument, 3, Bb);
  play(2.0, instrument, 3, A);
  play(2.0, instrument, 4, C);
  play(4.0, instrument, 3, G);
  if (last)
    setSustain(0.999999);

  checkMeasure();
}

int main(void)
{
  
  int instrument;
  int octave = 2;

  songInit();

  instrument = readScale(dir, base);

  setTempo(250);
  setTime(4, 4);
  setStride(0.05);
  setSustain(0.99995);
  setAmplitude(0.4);

  openOutput("melody.rra", 0, 0);

  verse(instrument, octave);
  last = 1;
  //verse(instrument, octave);

  closeOutput();
  
  return 0;
}
