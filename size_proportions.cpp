#include "size_proportions.h"

SizeProportions::SizeProportions(Size window, Size block):
	window_size(window), block_size(block), map_size(window.width / block.width, window.height / block.height) {}

SizeProportions::SizeProportions(Size& window, Size& block): 
	window_size(window), block_size(block), map_size(window.width / block.width, window.height / block.height) {}

Size& SizeProportions::getWindowsSize() {
	return window_size;
}

Size& SizeProportions::getBlockSize() {
	return block_size;
}

Size& SizeProportions::getMapSize() {
	return map_size;
}