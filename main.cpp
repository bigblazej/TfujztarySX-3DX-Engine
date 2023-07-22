#include "AppWindow.h"


//Prezes mi nie placi
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