#include "AppWindow.h"


//Prezes mi nie placi wiêc robie ten silnik za darmo
//My boss is not paing me for making this engine
int  main()
{
	AppWindow app;
	if (app.init())
	{
		while (app.isRun())
		{
			app.broadcast();
		}
	}
	return 0;
}