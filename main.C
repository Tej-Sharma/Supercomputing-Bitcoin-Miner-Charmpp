#include "main.decl.h"
#include "main.h"
#include "miner.decl.h"

CProxy_Main mainProxy;
int numElements;


Main::Main(CkArgMsg* msg) {
	// Entry point
	numElements = 6;

	CkPrintf("BitCoin Miner starting...\n");
	CkPrintf("Started with %d elements on %d processors\n", 
			numElements, CkNumPes());
	mainProxy = thisProxy;

	CProxy_Miner minerArray = CProxy_Miner::ckNew(numElements);
	minerArray[0].startMining(-1);
}

Main::Main(CkMigrateMessage* msg) { }

/* 
 * When the miner is done running, this will be called.
 * At this point, the miner will run, 
 * */
void Main::done() {
	CkExit();
}

#include "main.def.h"
