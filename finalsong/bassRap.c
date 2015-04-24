#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <songlib/util.h>
#include <songlib/songlib.h>

//#define dir "/usr/local/share/samples/mandolin/"
//#define base "sample_"
#define dir "/usr/local/share/samples/piano/"
#define base "bright_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "bassRap";
char *PROGRAM_VERSION = "0.01";

static int last = 0;

static void verseNonChorus(int instrument, int octave) {

	// TESTING
  chord(8.0, instrument, octave, G, 3, 7, (int) 0); // (G, Bb, D)
  chord(8.0, instrument, octave, F, 4, 7, (int) 0);
  chord(8.0, instrument, octave, E, 3, 9, (int) 0);
  chord(8.0, instrument, octave, D, 3, 7, (int) 0); // (D, F, A)

  chord(8.0, instrument, octave, G, 3, 7, (int) 0); // (G, Bb, D)
  chord(8.0, instrument, octave, F, 4, 7, (int) 0);
  chord(8.0, instrument, octave, E, 3, 9, (int) 0);
  chord(8.0, instrument, octave, D, 3, 7, (int) 0); // (D, F, A)

  chord(8.0, instrument, octave, G, 3, 7, (int) 0); // (G, Bb, D)
  chord(8.0, instrument, octave, F, 4, 7, (int) 0);
  chord(8.0, instrument, octave, E, 3, 9, (int) 0);
  chord(8.0, instrument, octave, D, 3, 7, (int) 0); // (D, F, A)

  chord(8.0, instrument, octave, G, 3, 7, (int) 0); // (G, Bb, D)
  chord(8.0, instrument, octave, F, 4, 7, (int) 0);
  chord(8.0, instrument, octave, E, 3, 9, (int) 0);
  chord(8.0, instrument, octave, D, 3, 7, (int) 0); // (D, F, A)
	// END TESTING
}

static void verseStart(int instrument, int octave) {
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
}

static void song(int instrument, int octave)
{
	startMeasure();

	verseStart(instrument, octave);
	verseNonChorus(instrument, octave);
	verseNonChorus(instrument, octave);
    verseNonChorus(instrument, octave); //
    //verseNonChorus(instrument, octave);

	if (last)
        setSustain(0.999999);
	checkMeasure();
}

int main(void)
{
  
  int instrument;
  //int octave = 2;
  int octave = 3;

  songInit();

  instrument = readScale(dir, base);

  setTempo(280);
  setTime(4, 4);
  setStride(0.05);
  setSustain(0.99995);
  setAmplitude(0.4);

  openOutput("bassRap.rra", 0, 0);

  song(instrument, octave);
  //last = 1;
  //verse(instrument, octave);

  closeOutput();
  
  return 0;
}
