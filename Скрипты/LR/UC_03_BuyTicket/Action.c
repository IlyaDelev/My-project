Action()
{

	lr_start_transaction("UC_03_BuyTicket");

	lr_start_transaction("UC03_01_HomePage");

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_concurrent_start(NULL);
	
	web_url("header.html", 
		"URL=http://localhost:1080/WebTours/header.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_reg_find("Text=Welcome to the Web Tours site.",
		LAST);
	
	web_url("home.html", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t6.inf", 
		"Mode=HTTP", 
		LAST);

/*Correlation comment - Do not change!  Original value='138791.182827055HVDQAHVptzzzzzzHtciDtptcii' Name ='userSession' Type ='ResponseBased'*/
	web_reg_save_param_attrib(
		"ParamName=userSession",
		"TagName=input",
		"Extract=value",
		"Name=userSession",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_url("nav.pl", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("UC03_01_HomePage", LR_AUTO);

	lr_think_time(5);
	
	lr_start_transaction("UC03_02_Login");

	web_reg_find("Fail=Found",
		"Text=User password was not correct.",
		LAST);

	web_submit_data("login.pl",
		"Action=http://localhost:1080/cgi-bin/login.pl",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t11.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value={username}", ENDITEM,
		"Name=password", "Value={password}", ENDITEM,
		"Name=login.x", "Value=71", ENDITEM,
		"Name=login.y", "Value=5", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		LAST);

	web_concurrent_start(NULL);

	web_url("nav.pl_2", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t12.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("login.pl_2", 
		"URL=http://localhost:1080/cgi-bin/login.pl?intro=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("UC03_02_Login", LR_AUTO);

	web_concurrent_end(NULL);

	lr_think_time(5);

	lr_start_transaction("UC03_03_TicketSearch");

	web_reg_find("Text=User has returned to the search page",
		LAST);

	web_url("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t80.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("nav.pl_3",
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in={in}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search",
		"Snapshot=t81.inf",
		"Mode=HTTP",
		LAST);

/*Correlation comment - Do not change!  Original value='roundtrip' Name ='.cgifields' Type ='ResponseBased'*/
	web_reg_save_param_attrib(
		"ParamName=.cgifields",
		"TagName=input",
		"Extract=name",
		"Type=checkbox",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='seatPref' Name ='Name' Type ='ResponseBased'*/
	web_reg_save_param_attrib(
		"ParamName=Name",
		"TagName=input",
		"Extract=name",
		"Type=radio",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='seatType' Name ='Name_1' Type ='ResponseBased'*/
	web_reg_save_param_attrib(
		"ParamName=Name_1",
		"TagName=input",
		"Extract=name",
		"Type=radio",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_url("reservations.pl", 
		"URL=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t82.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("UC03_03_TicketSearch", LR_AUTO);

	web_concurrent_end(NULL);

	lr_think_time(5);

	lr_start_transaction("UC03_04_DateEntry");
	
		web_reg_save_param_ex(
		"ParamName=outboundFlight",
		"LB=name=\"outboundFlight\" value=\"",
		"RB=\" checked",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	web_reg_find("Fail=NotFound",
				"Text=<B>{depart}</B> to <B>{arrive}</B> on <B>{departDate}</B>",
				LAST);
	
	web_submit_data("reservations.pl_2",
		"Action=http://localhost:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome",
		"Snapshot=t86.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=depart", "Value={depart}", ENDITEM,
		"Name=departDate", "Value={departDate}", ENDITEM,
		"Name=arrive", "Value={arrive}", ENDITEM,
		"Name=returnDate", "Value={{returnDate}}", ENDITEM,
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=seatPref", "Value={seatPref}", ENDITEM,
		"Name=seatType", "Value={seatType}", ENDITEM,
		"Name=findFlights.x", "Value=45", ENDITEM,
		"Name=findFlights.y", "Value=11", ENDITEM,
		"Name=.cgifields", "Value=roundtrip", ENDITEM,
		"Name=.cgifields", "Value=seatType", ENDITEM,
		"Name=.cgifields", "Value=seatPref", ENDITEM,
		LAST);

	lr_end_transaction("UC03_04_DateEntry", LR_AUTO);

	lr_think_time(5);
	
	lr_start_transaction("UC03_05_Timing");

	web_reg_find("Text=Payment Details",
		LAST);

	web_submit_data("reservations.pl_3",
		"Action=http://localhost:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/reservations.pl",
		"Snapshot=t87.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=seatType", "Value={seatType}", ENDITEM,
		"Name=seatPref", "Value={seatPref}", ENDITEM,
		"Name=reserveFlights.x", "Value=38", ENDITEM,
		"Name=reserveFlights.y", "Value=12", ENDITEM,
		LAST);

	lr_end_transaction("UC03_05_Timing", LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("UC03_06_BuyTicket");

	web_reg_find("Text=Reservation Made!",
		LAST);

	web_submit_data("reservations.pl_4",
		"Action=http://localhost:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/reservations.pl",
		"Snapshot=t27.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=firstName", "Value={firstname}", ENDITEM,
		"Name=lastName", "Value={lastname}", ENDITEM,
		"Name=address1", "Value={address1}", ENDITEM,
		"Name=address2", "Value={address2}", ENDITEM,
		"Name=pass1", "Value={pass1}", ENDITEM,
		"Name=creditCard", "Value={creditcard}", ENDITEM,
		"Name=expDate", "Value={expdate}", ENDITEM,
		"Name=oldCCOption", "Value=", ENDITEM,
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=seatType", "Value={seatType}", ENDITEM,
		"Name=seatPref", "Value={seatPref}", ENDITEM,
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=returnFlight", "Value=", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		"Name=buyFlights.x", "Value=49", ENDITEM,
		"Name=buyFlights.y", "Value=7", ENDITEM,
		"Name=.cgifields", "Value=saveCC", ENDITEM,
		LAST);

	lr_end_transaction("UC03_06_BuyTicket", LR_AUTO);

	/* Logout */

	web_revert_auto_header("Origin");

	lr_think_time(5);

	lr_start_transaction("UC03_07_Logout");

	web_reg_find("Text=The server options can be set via the Admin page",
		LAST);

	web_url("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("nav.pl_3", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t21.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("home.html_2", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Resource=0", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t22.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("UC03_07_Logout", LR_AUTO);

	web_concurrent_end(NULL);

	lr_think_time(5);

	lr_end_transaction("UC_03_BuyTicket", LR_AUTO);

	return 0;
}