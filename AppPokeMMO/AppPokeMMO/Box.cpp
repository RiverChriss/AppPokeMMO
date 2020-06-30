#include "Box.h"

int Box::nbCharBullet(10);
int Box::nbCharVal(7);
int Box::nbBullet(7);
const int Box::nbBordes = 3; /*		| <textLeft> | <textRight> |		for horizontal
							       (1)          (2)           (3)
							*/
							/*
									_____________	(1)
									<title>
									-------------	(2)
									<bullet>
									_____________	(3)					for vertical
							*/