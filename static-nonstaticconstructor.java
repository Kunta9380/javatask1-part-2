/** Static constructor can initialize only static variable but non-static constructor can initialize both static and non-static variable. 
 * Static constructor do not have any access specifier but non-static constructor have access specifier*/
package Kunta;

public class nonstatic_static_constructor {
	public class Main {
		static int kunta(int here,int there){// this is the static method
		return here*there;
	}
		
			
			public static void main (String[]args)
			
			{
				
			int hint=nonstatic_static_constructor.product(59,2);//here is the non static constructor
			
			System.out.print(hint);
			}

			private static int product(int tree, int top) {
				// TODO Auto-generated method stub
				return 0;
			}
			
			}

	public static int product(int tree, int top) {
		// TODO Auto-generated method stub
		return 0;
	}

}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
