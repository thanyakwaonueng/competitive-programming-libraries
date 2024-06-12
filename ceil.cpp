//ceil2 work for bot positive and nagative a
//TODO: make sure that b is positive integer
//floor(a/b)
int ceil2(int a,int b){
	int res=a/b;
	if(b*res!=a)res+=(a>0)&(b>0);
	return res;
}
