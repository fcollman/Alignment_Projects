

#pragma once


/* --------------------------------------------------------------- */
/* Globals ------------------------------------------------------- */
/* --------------------------------------------------------------- */

extern int	wkid, nwks;	// my workid, count

/* --------------------------------------------------------------- */
/* Functions ----------------------------------------------------- */
/* --------------------------------------------------------------- */

void MPIInit( int& argc, char**& argv );

void MPIExit();

void MPIWaitForOthers();


