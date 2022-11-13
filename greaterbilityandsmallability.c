package Name;
import java.util.Scanner;   // we call it Java. util because it utilises the class
public class smaal$greatnumber {
	

	 //our class name
		public static void main(String[]args)
		{
			Scanner input=new Scanner(System.in); // allows inputing of values
			int fnum, snum, tnum;
			System.out.print("input  your first number here");//instruct the user to enter the data
			
			fnum= input.nextInt(); // allows the inputing of data into  the system
	System.out.print("input  your second number here");
			
			snum= input.nextInt();
	System.out.print("input  your third number here");
			
			tnum= input.nextInt();
			if ((fnum>snum)==true) // here we will use the repetition function
			{
				if(fnum>tnum) {
					System.out.print( "the largest number is:"+fnum);
					
				}
				else
				{
					System.out.print("the smallest number is:"+tnum);//output once the boolean turns false
				}
			}
			if ((fnum>snum)==false)
			{
				if(snum>tnum)
				{
					System.out.print( "the largest number is :"+snum);
				}
				else
				{ 
					System.out.print("the smallest number is :"+tnum); // outputs this nce the boolean turns true
				}
			}
			System.out.print("\n");
			//this is to display the smallest
			
			
			if ((fnum<snum)==false) // here we will use the repetition function
			{
				if(fnum<tnum) {
					System.out.print( "the largest number is:"+fnum);
					
				}
				else
				{
					System.out.print("the smallest number is:"+tnum);//output once the boolean turns false
				}
			}
			if ((fnum<snum)==true)
			{
				if(snum<tnum)
				{
					System.out.print( "the largest number is :"+snum);
				}
				else
				{ 
					System.out.print("the smallest number is :"+tnum); // outputs this nce the boolean turns true
				}
			}
		}
				


}
