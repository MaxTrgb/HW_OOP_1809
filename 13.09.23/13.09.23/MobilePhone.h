#pragma once
#include "Display.h"
#include "Camera.h"
#include "Processor.h"
#include "Component.h"

class MobilePhone
{
private:
	Component* display = new Display();
	Component* camera = new Camera();
	Component* processor = new Processor();

public:
	MobilePhone(){}
	bool turnOnOff(int state);
	void touchDisplay();
	void useCamera();
	void proc();
};

