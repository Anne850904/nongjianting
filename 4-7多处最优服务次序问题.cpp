# include<stdio.h>
# include<stdlib.h>
# include<conio.h>
main()
{
	int **window,*timewindow,*array,num,serve,i,j,k,temp;
	double min;
	scanf("%d\n",&num);           //输入等待服务人数 
	scanf("%d\n",&serve);         //输入服务窗口数 
	array=(int *)malloc((serve+1)*sizeof(int));
	timewindow=(int *)malloc((serve+1)*sizeof(int));
	window=(int **)malloc((serve+1)*sizeof(int *));
    for(i= 0;i <= serve;i++)
    window[i] =(int *)malloc((num + 1)*sizeof(int *));
    for(i= 1;i <= num;i++)    //依次输入服务等待时间 
    scanf("%d",&array[i]);
	for(i= 0; i<= serve;i++){
	timewindow[i] = 0;
	for(j = 0;j <= num; j++)
	window[i][j]= 0; 
	}
	for(i= 1;i <= num; i++)//排序
	{
	for(k=i,j=i+1;j< num; j++)if(array[j] < array[k])
	k=j;
	temp = array[k];
	array[k] = array[i];
	array[i] = temp;
	}
	for(i= 1;i<= num; i++)
	{
	for(k= 1,j= 2;j <= serve;j++)
	if(timewindow[k] > timewindow[j])
	k=j;
	timewindow[k] +=array[i];
	window[k][++window[k][0]] = array[i];}
	for(min=0.0,i= 1;i <= serve;i++)
	for(j= 1;j <= window[i][0];j++)
	min += window[i][j] * (window[i][0] -j +1);
	min /= num;
	printf("%f\n",min);
	getch();  //输出函数 
	
}
