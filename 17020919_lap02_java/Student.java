package qlSV.java;
import java.nio.charset.MalformedInputException;

public class Student {
	
	

	
		private String name;
		private String id;
		private String group;
		private String email;
		public Student(){
			name="Student";
			id="000";
			group="INT22041";
			email="uet@vnu.edu.vn";

		}
		public Student(String name,String id,String group,String email)
		{
			this.name=name;
			this.id=id;
			this.group=group;
			this.email=email;
			
		}
		public Student(Student s)
		{
			this.name=s.name;
			this.id=s.id;
			this.group=s.group;
			this.email=s.email;
		}
		public String getName()
		{
			return this.name;
		}
		public String getId()
		{
			return this.id;
		}
		public String getGrop()
		{
			return this.group;
		}
		public String getEmail()
		{
			return this.email;
		}
		public void setName(String name)
		{
			this.name=name;
		}
		public void setId(String id)
		{
			this.id=id;
		}
		public void setGrop(String grop)
		{
			this.group=grop;
		}
		public void setEmail(String email)
		{
			this.email=email;
		}
		public void getInfo()
		{
			System.out.println("Name of Sv :"+this.name);
			System.out.println("ID of Student :"+this.id);
			System.out.println("Grop of Student :"+this.group);
			System.out.println("Email of Student :"+this.email);
			System.out.println("-------------------------------");
		}

	}



