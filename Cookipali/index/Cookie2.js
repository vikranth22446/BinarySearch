
	function changefunc() {
		
    document.getElementById("5 star").selected = "true";
	
	}
	function isNumeric(n) {
	return !isNaN(parseFloat(n)) && isFinite(n);
	}
		function starwarslight()
	{
		var x=prompt("Good Job! You Joined the Light Side!Have you joined the light side on google","Type Yes or No");
		x=x.toLowerCase();
		if(x=="yes")
		{
			alert("You have completed Joining the Light Side good Job");
		}
		else if(x=="no")
		{
			var sign=prompt("Do you want to sighn up now", "Type yes if you want to sign up now and anything else if you don't");
			sign=sign.toLowerCase();
			if(sign=="yes")
			{
				window.location="https://www.google.com/starwars/";
			}
			else
			{
				
			}
		}
		else
		{
			alert("I see that you have not typed the write words, Looks like you need to meditate in the force");
		}
	}	
	
	function starwarsdark()
	{
		var x=prompt("You have made a grave Descion, and will be infamous for your power. Have you joined your side on google","Type Yes or No");
		x=x.toLowerCase();
		if(x=="yes")
		{
			alert("You have completed your journey to the Dark Side");
		}
		else if(x=="no")
		{
			var sign=prompt("Do you want to sighn up now", "Type yes if you want to sign up now and anything else if you don't");
			sign=sign.toLowerCase();
			if(sign=="yes")
			{
				window.location="https://www.google.com/starwars/";
			}
		}
		else
		{
			alert("I see that you have not typed the write words, Looks like you need more hate to stabilize");
		}
	}	
	function MahYes()
	{
		alert("You have followed the path of Cookipali. Remeber Don't swear");
	}
	function MahNo()
	{
		alert("Good Job! You have done the right thing");
	}
	
	
	window.onbeforeunload = function (e) {
  return 'You are about to Leave The Awesome Cookipali Hiring Website'; };

	
		