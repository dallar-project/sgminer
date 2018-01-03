#ifndef DALLAR_H
#define DALLAR_H

#include "miner.h"

extern int dallar_test(unsigned char *pdata, const unsigned char *ptarget,
			uint32_t nonce);
extern void dallar_regenhash(struct work *work);

#endif /* DALLAR_H */
