Action()
{

	lr_start_transaction("UC_05_DeleteTicket");

	lr_start_transaction("UC05_01_HomePage");

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

	lr_end_transaction("UC05_01_HomePage", LR_AUTO);

	lr_think_time(5);
	
	lr_start_transaction("UC05_02_Login");

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

	lr_end_transaction("UC05_02_Login", LR_AUTO);

	web_concurrent_end(NULL);

	lr_think_time(5);

	lr_start_transaction("UC05_03_ListOfTickets");

	web_reg_find("Text=Invoice sent to:", "SaveCount=Tickets_Count",
		LAST);

	web_url("welcome.pl_2",
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page={page}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home",
		"Snapshot=t19.inf",
		"Mode=HTTP",
		LAST);

	web_concurrent_start(NULL);

	web_url("nav.pl_3",
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in={page}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page={page}",
		"Snapshot=t20.inf",
		"Mode=HTTP",
		LAST);

	web_url("itinerary.pl",
		"URL=http://localhost:1080/cgi-bin/itinerary.pl",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page={page}",
		"Snapshot=t23.inf",
		"Mode=HTTP",
		LAST);

	lr_end_transaction("UC05_03_ListOfTickets", LR_AUTO);

	web_concurrent_end(NULL);
	
	lr_think_time(5);
	
	lr_start_transaction("UC05_04_DeleteTicket");
	
	web_submit_data("itinerary.pl_2",
		"Action=http://localhost:1080/cgi-bin/itinerary.pl",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl",
		"Snapshot=t42.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=flightID", "Value={flightID}", ENDITEM,
		"Name=flightID", "Value={flightID_1}", ENDITEM,
		"Name=flightID", "Value={flightID_2}", ENDITEM,
		"Name=flightID", "Value={flightID_3}", ENDITEM,
		"Name=5", "Value=on", ENDITEM,
		"Name=flightID", "Value={flightID_4}", ENDITEM,
		"Name=removeFlights.x", "Value=67", ENDITEM,
		"Name=removeFlights.y", "Value=5", ENDITEM,
		"Name=.cgifields", "Value=4", ENDITEM,
		"Name=.cgifields", "Value=1", ENDITEM,
		"Name=.cgifields", "Value=3", ENDITEM,
		"Name=.cgifields", "Value=2", ENDITEM,
		"Name=.cgifields", "Value=5", ENDITEM,
		LAST);

	lr_end_transaction("UC05_04_DeleteTicket", LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("UC05_05_Logout");
	
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

	lr_end_transaction("UC05_05_Logout", LR_AUTO);

	web_concurrent_end(NULL);

	lr_think_time(5);

	lr_end_transaction("UC_05_DeleteTicket", LR_AUTO);
	
	return 0;
}