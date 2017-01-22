import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only  */
public class prascii
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scanner = new Scanner(System.in);
		char c = scanner.next().charAt(0);
		int temp=(int) c;
		System.out.println(temp);
	}
}
