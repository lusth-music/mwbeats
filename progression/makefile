# Place the names of all your tracks here (as RRA filenames)

RRAS = melody.rra bass.rra

all : $(RRAS)

# comment out the rplay line if you don't want automatic playing

%.rra	: %.x
		./$<
#		.rplay $@

%.x		: %.c
		gcc $(LOCAL) -Wall -g -o $@ $< -lsong -lm

mix		: $(RRAS)
		rrafastmixer -a0.5 $(RRAS) | rplay

mix.rra	: $(RRAS)
		rrafastmixer -a0.5 $(RRAS) > mix.rra

play	: $(RRAS)
		rrafastmixer -a0.5 $(RRAS) | rplay

playmix : mix.rra
		rplay mix.rra

.PHONY : clean

clean :
		-rm -f $(RRAS)
	
