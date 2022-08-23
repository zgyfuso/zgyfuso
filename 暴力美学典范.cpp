#include<stdio.h>

 int main(void)
 {
 	int p,q,r,x,m,n,y,u;
 	p=0;q=0;r=0;
	x=!(!p||q);
 	printf("p=%d	q=%d	r=%d	(p->q)=%d\n",p,q,r,x);
 	
 	p=0;q=0;r=1;
 	x=!(!p||q);
 	printf("p=%d	q=%d	r=%d	(p->q)=%d\n",p,q,r,x);
 	
 	p=0;q=1;r=0;
 	x=!(!p||q);
 	printf("p=%d	q=%d	r=%d	(p->q)=%d\n",p,q,r,x);
 	
 	p=0;q=1;r=1;
 	x=!(!p||q);
 	printf("p=%d	q=%d	r=%d	(p->q)=%d\n",p,q,r,x);
 	
 	p=1;q=0;r=0;
 	x=!(!p||q);
 	printf("p=%d	q=%d	r=%d	(p->q)=%d\n",p,q,r,x);
 	
 	p=1;q=0;r=1;
 	x=!(!p||q);
 	printf("p=%d	q=%d	r=%d	(p->q)=%d\n",p,q,r,x);
 	
 	p=1;q=1;r=0;
 	x=!(!p||q);
 	printf("p=%d	q=%d	r=%d	(p->q)=%d\n",p,q,r,x);
 	
 	p=1;q=1;r=1;
 	x=!(!p||q);
 	printf("p=%d	q=%d	r=%d	(p->q)=%d\n",p,q,r,x);
	 
	p=0;q=0;r=0;
	m=!p;
	printf("p=%d    q=%d    r=%d    !p=%d\n",p,q,r,m);
	
	p=0;q=0;r=1;
	m=!p;
	printf("p=%d    q=%d    r=%d    !p=%d\n",p,q,r,m);
	
	p=0;q=1;r=0;
	m=!p;
	printf("p=%d    q=%d    r=%d    !p=%d\n",p,q,r,m);
	
	p=0;q=1;r=1;
	m=!p;
	printf("p=%d    q=%d    r=%d    !p=%d\n",p,q,r,m);
	
	p=1;q=0;r=0;
	m=!p;
	printf("p=%d    q=%d    r=%d    !p=%d\n",p,q,r,m);
	
	p=1;q=0;r=1;
	m=!p;
	printf("p=%d    q=%d    r=%d    !p=%d\n",p,q,r,m);
	
	p=1;q=1;r=0;
	m=!p;
	printf("p=%d    q=%d    r=%d    !p=%d\n",p,q,r,m);
	
	p=1;q=1;r=1;
	m=!p;
	printf("p=%d    q=%d    r=%d    !p=%d\n",p,q,r,m);	
	
	p=0;q=0;r=0;
	n=!r;
	printf("p=%d    q=%d    r=%d    !r=%d\n",p,q,r,n);
	
	p=0;q=0;r=1;
	n=!r;
	printf("p=%d    q=%d    r=%d    !r=%d\n",p,q,r,n);
	
	p=0;q=1;r=0;
	n=!r;
	printf("p=%d    q=%d    r=%d    !r=%d\n",p,q,r,n);
	
	p=0;q=1;r=1;
	n=!r;
	printf("p=%d    q=%d    r=%d     !r=%d\n",p,q,r,n);
	
	p=1;q=0;r=0;
	n=!r;
	printf("p=%d    q=%d    r=%d     !r=%d\n",p,q,r,n);
	
	p=1;q=0;r=1;
	n=!r;
	printf("p=%d    q=%d    r=%d     !r=%d\n",p,q,r,n);
	
	p=1;q=1;r=0;
	n=!r;
	printf("p=%d    q=%d    r=%d     !r=%d\n",p,q,r,n);
	
	p=1;q=1;r=1;
	n=!r;
	printf("p=%d    q=%d    r=%d     !r=%d\n",p,q,r,n);
	
	p=0;q=0;r=0;
	y=(!p&&!r);
	printf("p=%d    q=%d   r=%d     (!p&!r)=%d\n",p,q,r,y);
	
	p=0;q=0;r=1;
	y=(!p&&!r);
	printf("p=%d    q=%d   r=%d     (!p&!r)=%d\n",p,q,r,y);
	
	p=0;q=1;r=0;
	y=(!p&&!r);
	printf("p=%d    q=%d   r=%d     (!p&!r)=%d\n",p,q,r,y);
	
	p=0;q=1;r=1;
	y=(!p&&!r);
	printf("p=%d    q=%d   r=%d     (!p&!r)=%d\n",p,q,r,y);
	
	p=1;q=0;r=0;
	y=(!p&&!r);
	printf("p=%d    q=%d   r=%d     (!p&!r)=%d\n",p,q,r,y);
	
	p=1;q=0;r=1;
	y=(!p&&!r);
	printf("p=%d    q=%d   r=%d     (!p&!r)=%d\n",p,q,r,y);
	
	p=1;q=1;r=0;
	y=(!p&&!r);
	printf("p=%d    q=%d   r=%d     (!p&!r)=%d\n",p,q,r,y);
	
	p=1;q=1;r=1;
	y=(!p&&!r);
	printf("p=%d    q=%d   r=%d     (!p&!r)=%d\n",p,q,r,y);
	
	p=0;q=0;r=0;
	u=!(!p||q)||(!p&&!r);
	printf("p=%d    q=%d   r=%d     (p->q)->(!p&!r)=%d\n",p,q,r,u);
	
	p=0;q=0;r=1;
	u=!(!p||q)||(!p&&!r);
    printf("p=%d    q=%d   r=%d     (p->q)->(!p&!r)=%d\n",p,q,r,u);
    
    p=0;q=1;r=0;
    u=!(!p||q)||(!p&&!r);
    printf("p=%d    q=%d   r=%d     (p->q)->(!p&!r)=%d\n",p,q,r,u);
    
    p=0;q=1;r=1;
    u=!(!p||q)||(!p&&!r);
    printf("p=%d    q=%d   r=%d     (p->q)->(!p&!r)=%d\n",p,q,r,u);
    
    p=1;q=0;r=0;
    u=!(!p||q)||(!p&&!r);
    printf("p=%d    q=%d   r=%d     (p->q)->(!p&!r)=%d\n",p,q,r,u);
    
    p=1;q=0;r=1;
    u=!(!p||q)||(!p&&!r);
    printf("p=%d    q=%d   r=%d     (p->q)->(!p&!r)=%d\n",p,q,r,u);
    
    p=1;q=1;r=0;
    u=!(!p||q)||(!p&&!r);
    printf("p=%d    q=%d   r=%d     (p->q)->(!p&!r)=%d\n",p,q,r,u);
    
    p=1;q=1;r=1;
    u=!(!p||q)||(!p&&!r);
    printf("p=%d    q=%d   r=%d     (p->q)->(!p&!r)=%d\n",p,q,r,u);

return 0;
  } 

