#if 0
	time_t t = time(0);
	char tmp[64];
	strftime( tmp, sizeof(tmp), "%Y/%m/%dT%X",localtime(&t) );
	strcpy(p->time,tmp);
#endif
