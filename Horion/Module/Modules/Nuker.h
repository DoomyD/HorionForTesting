#pragma once
#include "Module.h"

class Nuker : public IModule {
private:
	int delay = 0;
	int nukerRadius = 4;
	bool veinMiner = false;
	bool autodestroy = true;
	bool autotool = true;
	bool DoomyMine = false;
	bool MezoMine = false;
	bool findTool();
	//void findTool();
	int Ticks{0};



public:
	Nuker();
	~Nuker();

	
	inline bool isAutoMode() { return autodestroy; };
	int getNukerRadius() { return nukerRadius; };

	inline bool isVeinMiner() { return veinMiner; };
	// Inherited via IModule
	virtual const char* getModuleName() override;
	virtual void onTick(C_GameMode* gm) override;
	
	void isItInBoard(int x,int y,int z) {
		
	}
};