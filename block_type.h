#ifndef PEACFUL_BLOCK_TYPE_H
#define PEACFUL_BLOCK_TYPE_H

#include "size.h"
#include "size_proportions.h"

enum class BlockType {
	FULL_MIDDLE,
	FULL_RIGHT_CORNER,
	FULL_LEFT_CORNER,
	NONE
};

inline Size getBoundaries(BlockType type, SizeProportions& sizes) {
	switch (type) {
		case BlockType::FULL_MIDDLE:
		case BlockType::FULL_LEFT_CORNER:
		case BlockType::FULL_RIGHT_CORNER:
			return sizes.getBlockSize();
		case BlockType::NONE:
		default:
			return Size(0, 0);
	}
}


#endif