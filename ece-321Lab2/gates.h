
#include <stdio.h>
#include <stdbool.h>

bool and(bool x, bool y);
bool or(bool x, bool y);

bool nand(bool x, bool y);

bool nor(bool x, bool y);

bool xor(bool x, bool y);
bool xnor(bool x, bool y);
bool not(bool x);

bool AND_N(bool *x,bool *y, int size, int divideFactor,int xDivideGroup,int yDivideGroup);
bool OR_N(bool *x,bool *y, int size, int divideFactor,int xDivideGroup,int yDivideGroup);
