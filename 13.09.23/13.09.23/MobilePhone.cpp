#include "MobilePhone.h"
void MobilePhone::touchDisplay() {
	display->action();
}
void MobilePhone::useCamera() {
	camera->action();
}
void MobilePhone::proc() {
	processor->action();
}
bool MobilePhone::turnOnOff(int state) {
	if (state == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}