#include <iostream>
using namespace std;
#include "MobilePhone.h"
#include "Component.h"
#include "Camera.h"
#include "Display.h"
#include "Processor.h"

void onOf(MobilePhone* mobilePhone, int state) {
	if (mobilePhone->turnOnOff(state) == true)
	{
		cout << "Phone is on" << endl;
	}
	else
	{
		cout << "Phone is off" << endl;
	}

}

int main()
{
	MobilePhone* mobilePhone = new MobilePhone();

	int state = 0;

	onOf(mobilePhone, state);

	cout << "To turn the phone on enter - 1, turn off - 0\n";
	cin >> state;

	onOf(mobilePhone, state);

	mobilePhone->touchDisplay();
	mobilePhone->useCamera();
	mobilePhone->proc();

}
