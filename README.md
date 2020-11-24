## BitCoin Miner With SuperComputing Using Charm++

A concept to allow you to run bitcoin mining processes across supercomputers by utilizing the numerous processors present.

In Charm++, the program is a *charArray*, whic is an array of *chares* (which enacpsulates an asynchronous process). Each process is ran asychronously with a proxy to manage them. For this reason, with this framework, the process of BitCoin mining can be applied to supercomputers by allowing each chare to run a mining process.  

Alternatively, each chare could run a computation. Once all the computations are finished, they can be combined in order to mine the BitCoin.

Note: to specify the number of elements (processes) to create, edit the
`numElements` field in **main.C**
