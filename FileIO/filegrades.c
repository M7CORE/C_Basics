#include <stdio.h>
int main () {
   //Create variables of type file for input and output.
   FILE * infile;
   FILE * outfile;
   //Create memeber variables
   int student_ID,j,g1,g2,g3;
   //Open input and output files.
   infile  = fopen(  "students.txt",   "r" );
   outfile = fopen( "new.txt" , "w");

	//Start loop for 5 students.
   for (j =1; j <= 5; j++)
     {	
     	//from the input file get the data.
        fscanf( infile, "%d", &student_ID);
        fscanf( infile," %d %d %d ",  &g1, &g2, &g3);
        //Increase every grade by 10.
        g1 = g1 + 10;
        g2 = g2 + 10;
        g3 = g3 + 10;
        //Print the information onto the screen.
        printf("%d %d %d %d\n", student_ID, g1, g2,g3);
        //Print the information in the output file.
        fprintf(outfile,"%d %d %d  %d \n", student_ID, g1,g2,g3); 
     }
   fclose(infile); // Close both files.
   fclose(outfile);

   system("PAUSE");
   return 0;
}
