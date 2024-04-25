Action()
{

	/* Login */

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"124\", \"Google Chrome\";v=\"124\", \"Not-A.Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Dest", 
		"frame");

	web_concurrent_start(NULL);

	web_url("header.html", 
		"URL=http://localhost:1080/WebTours/header.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Dest", 
		"frame");

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-Goog-Update-AppId", 
		"onbkopaoemachfglhlpomhbpofepfpom");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-124.0.6367.60");

	lr_think_time(25);

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=124.0.6367.60&lang=ru&acceptformat=crx3,puff&x=id%3Donbkopaoemachfglhlpomhbpofepfpom%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D5%2526e%253D0%2526dr%253D1", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"124\", \"Google Chrome\";v=\"124\", \"Not-A.Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(6);

	web_url("webtours.png", 
		"URL=http://localhost:1080/WebTours/images/webtours.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/WebTours/header.html", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("hp_logo.png", 
		"URL=http://localhost:1080/WebTours/images/hp_logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/WebTours/header.html", 
		"Snapshot=t6.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(12);

	web_url("home.html", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("nav.pl", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t8.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("mer_login.gif", 
		"URL=http://localhost:1080/WebTours/images/mer_login.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t9.inf", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,gcmjkmgdlgnkkcocmoeiminaijmmjnii,neifaoindggfcjicffkgpmnlppeffabd,oimompecagnajdejgnnjijobebaeigek,obedbbhbpmojnkanicioggnmelmoomoc,lmelglejhemejginpboagddgdfbepgmp,niikhdgajlphfehepabhhblakbdgeefj,kiabhabjdbkjdpjbpigfodbdjmbglcoo,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,hfnkpimlhhgieaddgfemjhofmfblmnib,llkgjffcdpffmhiakmfcdcblohccpfmo,ehgidpndbllacpjalkiimkbadgjfnnmc,jflookgnkcckhobaglndicnbbgbonegd,jamhcnnkihinmdlkakkaopbjbbcngflc,"
		"ggkkehgbnfjpeggfpleeakpidbkibbmn,efniojlnjndmcbiieegkicadnoecjjef,laoigpblnllgcgjnjnllmfolckpjlhki,ojhpjlocmbogdgmfpkhlaaeamibhnphh,jflhchccmppkfebkiaminageehmchikm,eeigpngbgcognadeebkilcpcaedhellh,gonpemdgkjcecdgbnaabipppbmgfggbe");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-124.0.6367.60");

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=14:Fd1silzimDdQ5MjqnL3zZDl98KKe3Xhshw2wnQPn2BI&cup2hreq=1f2586f95f53f589b9b72dbc932a0029cfefab9f43a754bf0f4af1a9d268976b", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{83f763e9-de2a-4024-b0ae-56dc8c416301}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{941db0d2-3391-448b-b31f-088fa6459b4d}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\""
		"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{934d33c2-4d3d-4f69-ab62-fe0eda96a44c}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\""
		"ping\":{\"ping_freshness\":\"{ba712a7f-77d0-4e41-b66c-92000be3446c}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"accept_locale\":\"RU500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:2anf@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3a345dbd2774298fd2aecaacfa6d0e55f9bfe8cf378aad2f41a85a001592b789\"}]},\"ping\":{\"ping_freshness\":\""
		"{0349d656-81e2-436c-9a75-8b3aa276789f}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"20230916.566281051.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl/2c7f:2c7l@0.5\",\"cohortname\":\"Rollout\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.8076c3d0dd2cb1f8169cc6e5fd6c194e96cf989ca470815ce8491f77802dc303\"}]},\"ping\":{\"ping_freshness\":\"{04d19daf-e372-48d7-8f40-08000ef3209f}\",\"rd\":6316},\""
		"updatecheck\":{},\"version\":\"443\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6129,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.328bb02153b5f38003c94b120163f5da52156a08a58dc1b6b2701e6df4027dcb\"}]},\"ping\":{\"ping_freshness\":\"{10a3c18d-98d1-4c6b-be0b-ed9cc08c3e07}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2024.4.17.0\"},{\"appid\":\""
		"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6063,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.90b91aaa463ef666bf030c7f14b7046738dee86d64321b28cb834d04bbfea4b3\"}]},\"ping\":{\"ping_freshness\":\"{6367d4e8-577b-47a8-b91f-d16188925540}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2024.3.25.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\""
		"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{7ce80bc1-fa13-4f53-84a7-06a57e52058a}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{532e6752-1437-4ad4-8cd2-b69d11717d33}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a5cc3d30556ac6c3b232d9d508fd29e68481494801c9f3c054e6dbbc886b211e\"}]},\"ping\":{\""
		"ping_freshness\":\"{d7f10a5d-5383-4fa8-a46d-bcbca42446e4}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"8679\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{10abbfb2-692d-4835-8aef-5a949af73ed0}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid"
		"\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{22a6a99a-0454-4dc3-8567-0f82814ee068}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\""
		"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.0bd20c0ed22291b160114420a22e8ae9fd79a002cff2efdff99285f35a15f629\"}]},\"ping\":{\"ping_freshness\":\"{74918e3c-0b9d-47b5-b089-2960dafb6829}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"3026\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package"
		"\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{8258fa28-a763-46c5-bd2c-63b3c3050004}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:2c99@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.905f83845e25579fd4c6ae4bdc81a2740a216023f856918045ced4508329c941\"}]},\"ping\":{\"ping_freshness\":\"{87c1d5fd-7737-44aa-9917-dcd8fbaca3f0}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2023.11.29.1201\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.ccf35420925e20b0e6db8104eb982322ba27f500008f96049781785470937584\"}]},\"ping\":"
		"{\"ping_freshness\":\"{1798b844-cf86-4d7b-ad6d-f99c797187a1}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"927\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{10fa3113-a34d-4b9e-bfdc-9acb0b7e50cc}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\""
		"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{d2f5907f-a768-40bf-a45c-71de301c49dc}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6156,\"lang\":\"ru\",\""
		"packages\":{\"package\":[{\"fp\":\"1.f0b29cccee7e2b3871fc059e827e591bac65949de95c7db736b4d9e5de7b99ca\"}]},\"ping\":{\"ping_freshness\":\"{0b10e037-832f-4ad6-9ab7-40a79fa9a2f8}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2024.4.16.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{26f77588-d5fc-4825-aa88-9a3fabf35c85}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.120a8783d5ccfe1107dea29a51959fbbebbe1d57ad974dc9ee5b65323c90dab4\"}]},\"ping\":{\""
		"ping_freshness\":\"{44d71982-1a6a-42b4-9d26-946d07dfd31c}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2024.3.27.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":7,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.3447\"},\"prodversion\":\"124.0.6367.60\",\"protocol\":\"3.1\",\"requestid\""
		":\"{8e06ccf8-9431-48a7-8915-2a338fd0ec0b}\",\"sessionid\":\"{445a3296-37f5-4cb7-9573-39c4efdcc857}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"124.0.6367.60\"}}", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"124\", \"Google Chrome\";v=\"124\", \"Not-A.Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t11.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=userSession", "Value=138792.279789388HVDQVcHpiQVzzzzHtciDtpHzHDf", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=61", ENDITEM, 
		"Name=login.y", "Value=4", ENDITEM, 
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
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("flights.gif", 
		"URL=http://localhost:1080/WebTours/images/flights.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("itinerary.gif", 
		"URL=http://localhost:1080/WebTours/images/itinerary.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("in_home.gif", 
		"URL=http://localhost:1080/WebTours/images/in_home.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t15.inf", 
		LAST);

	web_url("signoff.gif", 
		"URL=http://localhost:1080/WebTours/images/signoff.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t16.inf", 
		LAST);

	web_concurrent_end(NULL);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	lr_think_time(41);

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0ckFxypPlCPNHCgYIARAAGAwSNwF-L9Irm-ka0dBcyBMGeu6jR-qdB6bpAXPHUFJYboYhCh6TKlzOgp0aLsla89NLUKzdH73xUgo&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

	/* Itinerary */

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"124\", \"Google Chrome\";v=\"124\", \"Not-A.Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(28);

	web_url("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t19.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("nav.pl_3", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("itinerary.pl", 
		"URL=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("in_itinerary.gif", 
		"URL=http://localhost:1080/WebTours/images/in_itinerary.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("home.gif", 
		"URL=http://localhost:1080/WebTours/images/home.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t22.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("cancelreservation.gif", 
		"URL=http://localhost:1080/WebTours/images/cancelreservation.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("cancelallreservations.gif", 
		"URL=http://localhost:1080/WebTours/images/cancelallreservations.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t25.inf", 
		LAST);

	web_concurrent_end(NULL);

	/* Logout */

	lr_think_time(39);

	web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t26.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("nav.pl_4", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t27.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("home.html_2", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Resource=0", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t28.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	return 0;
}