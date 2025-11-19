#include<stdio.h>

#define USE_LOGGING

//#define LINUX
//#define WINDOWS

#if defined(LINUX) && defined(WINDOWS)
	#error "Both should not be defined."
#elif !defined(LINUX) && !defined(WINDOWS)
	#error "Anyone should must be define ."
#endif

#ifdef USE_LOGGING
	#ifdef LINUX
		#define LOG(msg) printf("LINUX %s\n",msg)
	#else
		#define LOG(msg) printf("WINDOWS %s\n",msg)
	#endif
#else
	#define LOG(msg)
#endif


void main()
{
	LOG("System is Initializing");
}


