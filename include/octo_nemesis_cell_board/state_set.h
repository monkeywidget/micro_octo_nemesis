#include "color.h"

#ifndef STATESET_H
#define STATESET_H

class StateSet {

	private:
		Color* state_colors;
		bool states_wrapP;

	public:
		Color StateSet::ColorForState(State state_index);
		State StateSet::NStatesAfterState(int increment, State state_index);

};
#endif
