 #include<stdio.h>
 #include<stdlib.h>
 int a[5],ch,j;
 int i,n,value,position;
 void create();
 void display();
 void insert();
 void delet();

 int main()
 {
 	int choice;
 	while(1){
 		printf("\n\n..........MENU............\n\n");
 		printf("1.create\n");
 		printf("2.display\n");
 		printf("3.insert\n");
 		printf("4.delet\n");
 		
 		printf("6.exit\n");
 		printf("\nENTER YOUR CHOICE\n");
 		scanf("%d",&choice);
 		switch(choice)
 		{
 			case 1: 
				create();
 			   break;
 			case 2:  
			 display();
			 break;
			case 3:  
				insert();
			 	break;
			case 4:  
				delet();
				break;
			case 5:  
				exit(0);
			    break;
			default: 
				printf("\ninvalid choice\n");		 		 		 		 		           
		 }	
	 }
 }
 void create()
 {
 	 printf("\nEnter the size for the array:\n");
 	 scanf("%d",&n);
 	 printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
 }
 void display()
 {
 	printf("\nThe array elements are..::");
 	for(i=0;i<n;i++)
 	{
 	 	printf("%d\t",a[i]);
 	 	ch++;
	}
 }
 void insert()
 {
 	
 	int i,pos;
 	for(i=0;i<n;i++)
 	{
 		if(a[i]==NULL)
 	
 	{
 		printf("the array is full");
 		exit;
	 }
	 
	 else
	{
 	printf("enter the position of element to be inserted");
 	scanf("%d",&pos);
 	pos=pos-1;
 	printf("enter the value..");
 	scanf("%d",&value);
	for(i=n;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=value;
	n=n+1;
	for(i=0;i<=n;i++)
	{
		printf("%d\t",a[i]);	
	}
	
}
}
 }
 void delet()
 {
 	if(n==0)
{
	 	printf("no item to delete");
}
 	else
 	{
	 
 	printf("enter the position of element to be deleted");
 	scanf("%d",&position);
 	position=position-1;
 	for(i=0;i<n;i++)
 	{
 	value=a[position];
 	for(i=position;i<n-1;i++)
 	{
 		a[i]=a[i+1];
 		
	}
	n=n-1;
	printf("the deleted item is..%d",value);
}
 }
}
 
