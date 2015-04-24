# Place the names of all your tracks here (as RRA filenames)

RRA = melodyRap.rra bassRap.rra drum.rra
SRRA = stereo.rra
INCLUDE=/usr/local/include/songlib/
LIB=/usr/local/lib/

all : $(RRA)

# comment out the rplay line if you don't want automatic playing

%.rra	: %.x
		./$<
#		.rplay $@

%.x		: %.c
		gcc -Wall -g -o $@ -I$(INCLUDE) $< -L$(LIB) -lsong -lm

mix		: $(RRA)
		rrafastmixer -a0.5 $(RRA) | rplay

mixstereo	: $(RRA)
			rrafastmixer -a0.5 $(RRA) | rplay

mix.rra	: $(RRA)
		rrafastmixer -a0.5 $(RRA) > mix.rra

play	: $(RRA)
		rplay $(RRA)

playmix : mix.rra
		rplay mix.rra

playmaster: $(SRRA)
		rrafastmixer $(SRRA) | rramaster ! rplay

master.rra: $(SRRA)
		rrafastmixer $(SRRA) | rramaster > master.rra

master.mp3: master.rra
		rra2mp3 master.rra

rraidentity		: rraidentity.c
				gcc -Wall -g -o rraidentity -I$(INCLUDE) rraidentity.c -L$(LIB) -lsong -lm

.PHONY : clean

clean :
		rm -f $(RRA) $(SRRA) mix.rra *.x
	
