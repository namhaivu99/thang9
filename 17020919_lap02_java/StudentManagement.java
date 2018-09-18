package qlSV.java;
import java.util.Scanner;
public class StudentManagement {
	  public static Student arr[]=new Student[100];
	  public static int size;
	
		public static boolean sameGroup(Student s1,Student s2)
		{
			if(s1.getGrop()==s2.getGrop()) {return true;}
			return false;
		}
		public static void studentsBuyGroup() {
			int n=size;
			boolean kt[]=new boolean[n];
			for(int i=0;i<n;i++)
			{
				kt[i]=true;
			}
			for(int i=0;i<n;i++)
			{
				if(kt[i]== true)
				{
					kt[i]=false;
					arr[i].getInfo();
					
					for(int j=i+1;j<n;j++)
					{
						System.out.println(arr[j].getGrop()+"  "+arr[i].getGrop());
						System.out.println(kt[j]);
						if(arr[i].getGrop().equals(arr[j].getGrop()))
						{
							arr[j].getInfo();
							kt[j]=false;
						}
					}
					
				}
				
			}
		}
		public static void removeStudent(String id)
		{
			int i=0;
			while(i < size && !arr[i].getId().equals(id) )
			{
				i++;
			}
			for(int j=i;j<size;j++)
			{
				arr[j]=arr[j+1];
			}
		//	System.out.println(i);
			size=size-1;
		}
		public static void main(String[] args) {
			Student s1=new Student("HAO NAM","17020919","INT22041","AHIHI");
			Student s2=new Student("TRUONG NGAO","17020919","INT22041","AHIHI");
			Student s3=new Student("LAI QUANG THAI","17020343","INT22042","AHIHI");
			
			Scanner cin=new Scanner(System.in);
			int n=cin.nextInt();
			size =n;
			
			cin.nextLine();
			for(int i=0;i<n;i++)
			{
				String x1=new String(); x1=cin.nextLine();
				String x2=new String(); x2=cin.nextLine();
				String x3=new String(); x3=cin.nextLine();
				String x4=new String(); x4=cin.nextLine();
				arr[i]=new Student(x1,x2,x3,x4);
			}
			/*for(int i=0;i<n;i++)
			{
				arr[i].getInfo();
			}*/
			studentsBuyGroup();
			String id=cin.nextLine();
			
			removeStudent( id);
			for(int i=0;i<size;i++)
			{
			    arr[i].getInfo();
			}
			
		}

	}



