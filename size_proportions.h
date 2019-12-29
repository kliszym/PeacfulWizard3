#ifndef PEACFUL_SIZE_PROPORTIONS_H
#define PEACFUL_SIZE_PROPORTIONS_H

#include "size.h"

class SizeProportions {
public:
	SizeProportions(Size window, Size block);
	SizeProportions(Size& window, Size& block);
	Size& getWindowsSize();
	Size& getBlockSize();
	Size& getMapSize();

private:
	Size window_size;
	Size block_size;
	Size map_size;
};

#endif