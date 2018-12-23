 #include<stdio.h>
 #include<stdlib.h>
 int *a,ch,j;
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
 	printf("\nEnter the size of the array elements:\t");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("\nEnter the elements for the array:\n");
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
 	int b[n+1],i,pos;
 	for(i=0;i<n;i++)
 	{
 		b[i]=a[i];
	}
 	printf("enter the position of element to be inserted");
 	scanf("%d",&pos);
 	pos=pos-1;
 	printf("enter the value..");
 	scanf("%d",&value);
	for(i=n+1;i>pos;i--)
	{
		b[i]=b[i-1];
	}
	b[pos]=value;
	for(i=0;i<=n;i++)
	{
		printf("%d",b[i]);	
	} 
 }
 void delet()
 {
 	printf("enter the position of element to be deleted");
 	scanf("%d",&position);
 	value=a[position];
 	for(i=position;i<n-1;i++)
 	{
 		a[i]=a[i+1];
 		
	}
	n=n-1;
	printf("the deleted item is..%d",value);
 }
 
 
