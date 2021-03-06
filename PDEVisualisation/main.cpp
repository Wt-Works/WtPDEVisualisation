#include "WebApp.h"

#include <Wt/Chart/WCartesian3DChart>

#include <string>

Wt::WApplication *createApplication(const Wt::WEnvironment& env)
{
	return new WebApp(env);
}

int main(int argc, char **argv)
{
	/*
	* Your main method may set up some shared resources, but should then
	* start the server application (FastCGI or httpd) that starts listening
	* for requests, and handles all of the application life cycles.
	*
	* The last argument to WRun specifies the function that will instantiate
	* new application objects. That function is executed when a new user surfs
	* to the Wt application, and after the library has negotiated browser
	* support. The function should return a newly instantiated application
	* object.
	*/
	return WRun(argc, argv, &createApplication);
}

