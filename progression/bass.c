#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <songlib/util.h>
#include <songlib/songlib.h>

#define dir "/usr/local/share/samples/mandolin/"
#define base "sample_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "bass";
char *PROGRAM_VERSION = "0.01";

static int last = 0;

static void verse(int instrument, int octave)
{
  startMeasure();
  
  // line 1
  /*
  play(2.0, instrument, 2, F);
  play(2.0, instrument, 2, G);
  play(2.0, instrument, 2, A);
	play(2.0, instrument, 2, Bb);
	play(2.0, instrument, 3, C);
	play(2.0, instrument, 3, D);
  play(2.0, instrument, 3, E);
  play(2.0, instrument, 3, F);
  */
  // start repeat
	chord(4.0, instrument, octave, F, 4, 7, (int) 0);
  chord(2.0, instrument, octave, F, 4, 7, (int) 0);
  chord(8.0, instrument, octave, E, 3, 8, (int) 0);
  rest(2);
	chord(4.0, instrument, octave, Bb, 4, 7, (int) 0);
  chord(2.0, instrument, octave, Bb, 4, 7, (int) 0);
  chord(8.0, instrument , octave, F, 4, 7, (int) 0);
  rest(2);
  //
  //
  chord(4.0, instrument, octave, F, 4, 7, (int) 0);
  chord(2.0, instrument, octave, F, 4, 7, (int) 0);
  chord(8.0, instrument, octave, E, 3, 8, (int) 0);
  rest(2);
  chord(4.0, instrument, octave, Bb, 4, 7, (int) 0);
  chord(2.0, instrument, octave, Bb, 4, 7, (int) 0);
  chord(8.0, instrument , octave, F, 4, 7, (int) 0);
  rest(2);
  
	chord(4.0, instrument, octave, F, 4, 7, (int) 0);
  chord(2.0, instrument, octave, F, 4, 7, (int) 0);
  chord(8.0, instrument, octave, E, 3, 8, (int) 0);
  rest(2);
  chord(4.0, instrument, octave, Bb, 4, 7, (int) 0);
  chord(2.0, instrument, octave, Bb, 4, 7, (int) 0);
  chord(8.0, instrument, octave, F, 4, 7, (int) 0);
  rest(2);
	// end repeat
  chord(4.0, instrument, octave, F, 4, 7, (int) 0);
  chord(2.0, instrument, octave, F, 4, 7, (int) 0);
  chord(8.0, instrument, octave, E, 3, 8, (int) 0);
  rest(2);
	chord(4.0, instrument, octave, Bb, 4, 7, (int) 0);
  chord(2.0, instrument, octave, Bb, 4, 7, (int) 0);
  chord(6.0, instrument, octave, F, 4, 7, (int) 0); // dotted quater note
  chord(4.0, instrument, octave, E, 3, 9, (int) 0);
  
  
  chord(8.0, instrument, octave, G, 3, 7, (int) 0); // (G, Bb, D)
  chord(8.0, instrument, octave, F, 4, 7, (int) 0);
  chord(8.0, instrument, octave, E, 3, 9, (int) 0);
  chord(8.0, instrument, octave, D, 3, 7, (int) 0); // (D, F, A)
	//rest(0.5);
  chord(8.0, instrument, octave, D, 3, 8, (int) 0); // (D, F, Bb)
  chord(8.0, instrument, octave, E, 3, 8, (int) 0);


	// repeat
  // start repeat
	chord(4.0, instrument, octave, F, 4, 7, (int) 0);
  chord(2.0, instrument, octave, F, 4, 7, (int) 0);
  chord(8.0, instrument, octave, E, 3, 8, (int) 0);
  rest(2);
	chord(4.0, instrument, octave, Bb, 4, 7, (int) 0);
  chord(2.0, instrument, octave, Bb, 4, 7, (int) 0);
  chord(8.0, instrument , octave, F, 4, 7, (int) 0);
  rest(2);
  //
  //
  chord(4.0, instrument, octave, F, 4, 7, (int) 0);
  chord(2.0, instrument, octave, F, 4, 7, (int) 0);
  chord(8.0, instrument, octave, E, 3, 8, (int) 0);
  rest(2);
  chord(4.0, instrument, octave, Bb, 4, 7, (int) 0);
  chord(2.0, instrument, octave, Bb, 4, 7, (int) 0);
  chord(8.0, instrument , octave, F, 4, 7, (int) 0);
  rest(2);
  
	chord(4.0, instrument, octave, F, 4, 7, (int) 0);
  chord(2.0, instrument, octave, F, 4, 7, (int) 0);
  chord(8.0, instrument, octave, E, 3, 8, (int) 0);
  rest(2);
  chord(4.0, instrument, octave, Bb, 4, 7, (int) 0);
  chord(2.0, instrument, octave, Bb, 4, 7, (int) 0);
  chord(8.0, instrument, octave, F, 4, 7, (int) 0);
  rest(2);
	// end repeat
  chord(4.0, instrument, octave, F, 4, 7, (int) 0);
  chord(2.0, instrument, octave, F, 4, 7, (int) 0);
  chord(8.0, instrument, octave, E, 3, 8, (int) 0);
  rest(2);
	chord(4.0, instrument, octave, Bb, 4, 7, (int) 0);
  chord(2.0, instrument, octave, Bb, 4, 7, (int) 0);
  chord(6.0, instrument, octave, F, 4, 7, (int) 0); // dotted quater note
  chord(4.0, instrument, octave, E, 3, 9, (int) 0);
  
  
  chord(8.0, instrument, octave, G, 3, 7, (int) 0); // (G, Bb, D)
  chord(8.0, instrument, octave, F, 4, 7, (int) 0);
  chord(8.0, instrument, octave, E, 3, 9, (int) 0);
  chord(8.0, instrument, octave, D, 3, 7, (int) 0); // (D, F, A)
	//rest(0.5);
  chord(8.0, instrument, octave, D, 3, 8, (int) 0); // (D, F, Bb)
  chord(8.0, instrument, octave, E, 3, 8, (int) 0);

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

  openOutput("bass.rra", 0, 0);

  verse(instrument, octave);
  //last = 1;
  //verse(instrument, octave);

  closeOutput();
  
  return 0;
}
