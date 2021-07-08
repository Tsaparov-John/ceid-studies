typedef struct utypes
{
	char *name;
	struct utypes *nptr;
}utypes;

utypes *uTable=(utypes *)0;
utypes *uinsert();
utypes *ucheck();


utypes * uinsert( char *name)
{
	utypes *ptr;
	ptr=(utypes *)malloc(sizeof(utypes));
	ptr->name=(char *)malloc(strlen(name)+1);
	strcpy(ptr->name,name);
	ptr->nptr=(struct utypes *)uTable;
	uTable=ptr;
	return ptr;
}

utypes * ucheck(char *name)
{
	utypes *ptr;
	for (ptr=uTable;ptr!= (utypes *)0;ptr=(utypes *)ptr->nptr)
	{
		if(strcmp(name,ptr->name)==0)
		{			
			return ptr;		
		}	
	}
		
	return 0;
}

typedef struct ufunc
{
	char *name;
	struct ufunc *nptr;
}ufunc;

ufunc *fTable=(ufunc *)0;
ufunc *finsert();
ufunc *fcheck();


ufunc * finsert( char *name)
{
	ufunc *ptr;
	ptr=(ufunc *)malloc(sizeof(ufunc));
	ptr->name=(char *)malloc(strlen(name)+1);
	strcpy(ptr->name,name);
	ptr->nptr=(struct ufunc *)uTable;
	fTable=ptr;
	return ptr;
}

ufunc * fcheck(char *name)
{
	ufunc *ptr;
	for (ptr=fTable;ptr!= (ufunc *)0;ptr=(ufunc *)ptr->nptr)
	{
		if(strcmp(name,ptr->name)==0)
		{			
			return ptr;		
		}	
	}
		
	return 0;
}

typedef struct uvar
{
	char *name;
	struct uvar *nptr;
}uvar;

uvar *vTable=(uvar *)0;
uvar *vinsert();
uvar *vcheck();


uvar * vinsert( char *name)
{
	uvar *ptr;
	ptr=(uvar *)malloc(sizeof(uvar));
	ptr->name=(char *)malloc(strlen(name)+1);
	strcpy(ptr->name,name);
	ptr->nptr=(struct uvar *)vTable;
	vTable=ptr;
	return ptr;
}

uvar * vcheck(char *name)
{
	uvar *ptr;
	for (ptr=vTable;ptr!= (uvar *)0;ptr=(uvar *)ptr->nptr)
	{
		if(strcmp(name,ptr->name)==0)
		{			
			return ptr;		
		}	
	}
		
	return 0;
}



