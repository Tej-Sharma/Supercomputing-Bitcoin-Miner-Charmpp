#include "miner.decl.h"

#include "miner.h"
#include "main.decl.h"

extern CProxy_Main mainProxy;
extern int numElements;

Miner::Miner() {
	// Initialize member variables if any
}

Miner::Miner(CkMigrateMessage *msg) {}

void Miner::startMining(int from) {
	CkPrintf("Started mining on char # %d on processor %d\n",
			thisIndex, CkMyPe());
	// Run mining logic...
	// TODO: insert mining logic
	
	// Also, call the next available char as long if there is another
	if (thisIndex  + 1 < numElements) {
		thisProxy[thisIndex + 1].startMining(thisIndex);
	} else {
		mainProxy.done();
	}
}
#include "miner.def.h"

