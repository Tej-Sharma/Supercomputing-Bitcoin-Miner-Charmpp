#ifndef __MINER_H__
#define __MINER_H__

class Miner : public CBase_Miner {
	public:
		Miner();
		Miner(CkMigrateMessage *msg);

		void startMining(int from);

};

#endif // __MINER_H__
