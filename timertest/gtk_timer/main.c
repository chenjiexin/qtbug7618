#include<gtk/gtk.h>
#include<time.h>

void  TimePorcFunction ()
{
	printf("ThisTimePorcFunction () \n");
      	return;
}
int main(int argc,char * argv[])
{
	gtk_init(&argc,&argv);
	gtk_timeout_add(1, (GtkFunction)TimePorcFunction, NULL);
	gtk_main();
	return 1;
} 
