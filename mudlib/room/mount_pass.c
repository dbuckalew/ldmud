#include "std.h"

#undef EXTRA_INIT
#define EXTRA_INIT add_action("up"); add_verb("up");\
  		   add_action("up"); add_verb("climb");

TWO_EXIT("room/plane11", "south",
	 "room/mine/tunnel", "north",
	 "Mountain pass",
	 "You are in a pass going into the mountain with a steep slope\nupwards to the north.\nHowever, the path is barred.\nThere is a tunnel entrance to the north.\n"+
	 "It might be possible to climb up, though\n", 1)

up() {
    call_other(this_player(),"move_player", "up#room/ravine");
    return 1;
}
