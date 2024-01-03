#include "AppWindow.h"

//My boss is not paing me for making this engine so it's free to use
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