	function validation()
	{
		var firstname=document.getElementById("firstname").value;
		var lastname =document.getElementById("lastname").value;
		var Later=document.getElementById("year").value;
			var ddl = document.getElementById("year");
		var selectedValue = ddl.options[ddl.selectedIndex].value;
			
		if(firstname=="Enter your First Name"||lastname=="Enter your Last Name")
		{
			alert("You have not filled in your full name");
			return false;
		}
		else if (selectedValue == "none")
		{
			alert("Please fill in your Birth Date with the year");
			return false;
		}
		else if(Later=="Later")
		{
			alert("You are to young to be on this site. Sorry for the Inconvience");
			return false;
		}
		else if(phonevalid()==false)
		{
				return false;
		}
		else if(!checkadress())
		{
			return false;
			
		}
		else
		{
			submitform();
			return true;
		}
		
	
	}
	function checkadress()
	{
		
		var address=document.getElementById("address").value;
		var state =document.getElementById("state").value;
		var zip=document.getElementById("zip").value;
		if(address==""||state==""||zip=="")
		{
			alert("You have not filled in all your address");
			return false;
		}
		else
		{
		return true;
		}
	}
	function submitform() {
		leavingprompt();
	}

	function phonevalid()
	{
			var email=document.getElementById("email").value;
		var phone=document.getElementById("phone").value;
		if(email=="Enter your email"||phone=="Enter Phone Number")
		{
			alert("You have not given an email or a phone.");
			return false;
		}
		else
		{
			return true;
		}
		}
	function gendervalid()
	{
				var male=document.getElementById("male").checked;
		var female =document.getElementById("female").checked;
		var other=document.getElementById("other").checked;
		if(!male||!female||!other)
		{
			alert("You have not chosen a gender!");
			return false;
		}
		else
		{
			return true;
		}
	}
	