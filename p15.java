/*Create    two    packages,    CE_Dept    &    IT_Dept    with    Machine_Detail_CE    and  Machine_Detail_IT  classes  respectively.  The  class  should  have  a  method  to  display machine   information   (No_of_PC(int),   configuration(String))   for   both   departments. Write a java application that imports both defined packages and call their methods*/

import CE_Dept.Machine_Detail_CE;
import IT_Dept.Machine_Detail_IT;

class p15
{
	public static void main(String[] args)
	{
		Machine_Detail_CE.getInfo();
		Machine_Detail_IT.getInfo();
	}
}
