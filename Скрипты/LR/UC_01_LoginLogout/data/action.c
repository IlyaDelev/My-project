Action()
{

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

	web_set_sockets_option("SSL_VERSION", "AUTO");

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

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_concurrent_start(NULL);

	web_url("webtours.png", 
		"URL=http://localhost:1080/WebTours/images/webtours.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/WebTours/header.html", 
		"Snapshot=t4.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("hp_logo.png", 
		"URL=http://localhost:1080/WebTours/images/hp_logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/WebTours/header.html", 
		"Snapshot=t5.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Dest", 
		"frame");

	web_concurrent_start(NULL);

	web_url("home.html", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t6.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Dest", 
		"frame");

	web_url("nav.pl", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	lr_think_time(46);

	web_url("mer_login.gif", 
		"URL=http://localhost:1080/WebTours/images/mer_login.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t8.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("ChRDaHJvbWUvMTI0LjAuNjM2Ny42MBIgCU35IjnBRbgwEgUN541ADhIFDc5BTHohSeE1wfpE8PA=", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTI0LjAuNjM2Ny42MBIgCU35IjnBRbgwEgUN541ADhIFDc5BTHohSeE1wfpE8PA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t9.inf", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,neifaoindggfcjicffkgpmnlppeffabd,oimompecagnajdejgnnjijobebaeigek,gcmjkmgdlgnkkcocmoeiminaijmmjnii,obedbbhbpmojnkanicioggnmelmoomoc,lmelglejhemejginpboagddgdfbepgmp,niikhdgajlphfehepabhhblakbdgeefj,kiabhabjdbkjdpjbpigfodbdjmbglcoo,giekcmmlnklenlaomppkphknjmnnpneh,llkgjffcdpffmhiakmfcdcblohccpfmo,hfnkpimlhhgieaddgfemjhofmfblmnib,laoigpblnllgcgjnjnllmfolckpjlhki,jflookgnkcckhobaglndicnbbgbonegd,efniojlnjndmcbiieegkicadnoecjjef,ehgidpndbllacpjalkiimkbadgjfnnmc,"
		"ggkkehgbnfjpeggfpleeakpidbkibbmn,jamhcnnkihinmdlkakkaopbjbbcngflc,khaoiebndkojlmppeemjhbpbandiljpe,ojhpjlocmbogdgmfpkhlaaeamibhnphh,jflhchccmppkfebkiaminageehmchikm,eeigpngbgcognadeebkilcpcaedhellh,gonpemdgkjcecdgbnaabipppbmgfggbe");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-124.0.6367.60");

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=14:govl8MxgrCXcCvyCG1jdMMd7sA7D515CgzwRisJvpOk&cup2hreq=4cdd92815be7250fafc9cdd8a24c020da315d41890622debc2df9afea674c177", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{dec9c75a-f97d-447f-a074-ec54a9e72886}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{b6f233c5-0f9f-492a-9940-5dd6039a147d}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":"
		"\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{c94e8e2a-093b-468b-8934-c4921153eaf1}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},"
		"\"ping\":{\"ping_freshness\":\"{ce5e481a-bdec-4267-947a-92be11b9140b}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"RU500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:2anf@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3a345dbd2774298fd2aecaacfa6d0e55f9bfe8cf378aad2f41a85a001592b789\"}]},\"ping\":{\"ping_freshness\":\""
		"{eb4b0cc5-a240-40f8-b81a-2f1ca9ae8fdf}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"20230916.566281051.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl/2c7f:2c7l@0.5\",\"cohortname\":\"Rollout\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.8076c3d0dd2cb1f8169cc6e5fd6c194e96cf989ca470815ce8491f77802dc303\"}]},\"ping\":{\"ping_freshness\":\"{0437af21-5b90-4a12-b710-01ddd5e16eed}\",\"rd\":6316},\""
		"updatecheck\":{},\"version\":\"443\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6129,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.328bb02153b5f38003c94b120163f5da52156a08a58dc1b6b2701e6df4027dcb\"}]},\"ping\":{\"ping_freshness\":\"{26ae1db9-a57d-4c81-aa9d-2be35e029043}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2024.4.17.0\"},{\"appid\":\""
		"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6063,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.90b91aaa463ef666bf030c7f14b7046738dee86d64321b28cb834d04bbfea4b3\"}]},\"ping\":{\"ping_freshness\":\"{d0dcf379-7c43-46ac-aee9-c1eacdb391b2}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2024.3.25.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\""
		"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{93a93a4f-a7c4-40d5-8941-32f174c6be55}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{fb8bc431-43bf-4d63-8402-44b4bdbdf0be}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.1068376a9359bd7098c646baf1cb6042b4316da3f0c118cda67c4e15e56a2812\"}]},\"ping\":"
		"{\"ping_freshness\":\"{74b02f84-23fc-49b6-a464-52a3baf75790}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"8678\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{3c918684-fd86-4b5f-b952-fed456aeaffc}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":"
		"\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.0bd20c0ed22291b160114420a22e8ae9fd79a002cff2efdff99285f35a15f629\"}]},\"ping\":{\"ping_freshness\":\"{5c8c9245-5580-4acd-82f9-ef143ffcbeb4}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"3026\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\""
		"packages\":{\"package\":[{\"fp\":\"1.ccf35420925e20b0e6db8104eb982322ba27f500008f96049781785470937584\"}]},\"ping\":{\"ping_freshness\":\"{1d024a0c-4f2a-417c-85ef-6bd002f0f7b2}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"927\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{c671d021-bad6-45c9-98ab-557532f56f1a}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:2c99@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.905f83845e25579fd4c6ae4bdc81a2740a216023f856918045ced4508329c941\"}]}"
		",\"ping\":{\"ping_freshness\":\"{7bc12d2b-527f-4daa-b369-f411b51ebe65}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2023.11.29.1201\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{2d330276-1335-4b42-8980-03eae9827714}\",\"rd\":6316},\""
		"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{d31b6be3-8fd2-4387-abbd-e91cecdcd61b}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{a3885a16-0bf3-4ae5-868d-3e306314d5fe}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\""
		":6156,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.f0b29cccee7e2b3871fc059e827e591bac65949de95c7db736b4d9e5de7b99ca\"}]},\"ping\":{\"ping_freshness\":\"{d88d1f83-6410-4b51-9099-e14640d34892}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2024.4.16.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{adbefa6e-3f12-495e-b987-701b8a42909e}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.120a8783d5ccfe1107dea29a51959fbbebbe1d57ad974dc9ee5b65323c90dab4\"}]},\"ping\":{\""
		"ping_freshness\":\"{bcdecb61-a742-4342-a7d0-b31bf2897b95}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2024.3.27.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":7,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.3447\"},\"prodversion\":\"124.0.6367.60\",\"protocol\":\"3.1\",\"requestid\""
		":\"{43189804-8874-4a74-900d-57a5382e70d0}\",\"sessionid\":\"{cc9933d2-042e-42c4-a85a-a8c44264dfaa}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"124.0.6367.60\"}}", 
		LAST);

	/* Login */

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

	lr_think_time(19);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t11.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=userSession", "Value=138791.182827055HVDQAHVptzzzzzzHtciDtptcii", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
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
		"Snapshot=t17.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("X-Client-Data", 
		"CI22yQEIprbJAQipncoBCLnsygEIlKHLAQiFoM0BCN+BzgEItYXOAQiF1cwiGPTJzQEY1d3NARjYhs4B");

	lr_think_time(56);

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=pqis408hzQYl0renptNTXA%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x13delevilya@gmail.com\\x10c\\x18\\x02*\\xD9!\\x12\\x02\\x10\\x01\\x18\\x012\\x99\\x01\\x08\\x88\\x81\\x02\\x12\\x82\\x01 \\x00\\x92\\x01}\n4\n\\x0Echrome_sync_bm\\x12\\x0551!bm\\x1A\\x12\t\\xBEY\\xD0\\x9BN\\x16\\x06\\x00\\x11\\xBEY\\xD0\\x9BN\\x16\\x06\\x00)\\xDE\\xEC\\xD0\\x9BN\\x16\\x06\\x00\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)"
		"\\xE7S\\xD0\\x9BN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xC6\\xA6\\x02\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!pf\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\xA9S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t"
		"\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\x99\\x01\\x08\\xB1\\xE6\\x02\\x12\\x82\\x01 \\x00\\x92\\x01}\n4\n\\x0Echrome_sync_pw\\x12\\x0551!pw\\x1A\\x12\t\\xC9W\\x11\\x9CN\\x16\\x06\\x00\\x11\\xC9W\\x11\\x9CN\\x16\\x06\\x00)\\x13\\xEC\\x11\\x9CN\\x16\\x06\\x00\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t"
		"\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xCF\\xF3\\x03\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!ap\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\x9CS\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03\nE\n"
		"\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xF1\\xF7\\x01\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!af\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)"
		"\\x9AS\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002&\\x08\\xDE\\xD8\\x12\\x12\\x10 \\x00x\\x8B\\x8F\\xB7\\x9B\\x01\\x80\\x01\\xC7\\xCF\\x81\\xDF\\xEC1*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xC9\\x95\\x14\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!wm\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\xD2S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)"
		"\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\"\\x08\\xB9\\xA1/\\x12\\x0C \\x00x\\x00\\x80\\x01\\xC6\\xCC\\x81\\xDF\\xEC1*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xFA\\xC1\\x02\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!tm\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)"
		"\\xCFS\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xF7\\xF7\\x02\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!ex\\x1A\\x12\t"
		"\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\xA1S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xC1\\x01\\x08\\xA2\\xB4\\x05\\x12\\xAA\\x01 \\x00\\x92\\x01\\xA4\\x01\n[\n"
		"\\x16annotation_chrome_sync\\x12\\x0551!se\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\"\\x14\t\\xDB\\x9E\\xCA\\x9BN\\x16\\x06\\x00\\x10\\x04\\x19\\xF0l\\xE9TJ\\xD1a\\xA6)\\xC3S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)"
		"\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xC1\\x01\\x08\\xC7\\x87\\x03\\x12\\xAA\\x01 \\x00\\x92\\x01\\xA4\\x01\n[\n\\x16annotation_chrome_sync\\x12\\x0551!ss\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\"\\x14\t\\xDB\\x9E\\xCA\\x9BN\\x16\\x06\\x00\\x10\\x05\\x19\\xE1@q\\xFB\\xF4\\xEE`\\xA8)\\xCDS\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03\n"
		"E\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xEC\\xF9\\x02\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!pp\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)"
		"\\x8DS\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xE8\\xA9\\x06\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!as\\x1A\\x12\t"
		"\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\x97S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\x9F\\xEF\\x05\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n"
		"\\x16annotation_chrome_sync\\x12\\x0551!es\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\xA4S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xEB\\x95\t"
		"\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!dd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\xA6S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xAC\\xB4\n\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!dc\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\x9ES\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)"
		"\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\x81\\x02\\x08\\x9A\\xB7\t\\x12\\xEA\\x01 \\x00\\x92\\x01\\xE4\\x01\n\\x9A\\x01\n\\x0Echrome_sync_di\\x12\\x0551!di\\x1A\\x12\t\\xC9W\\x11\\x9CN\\x16\\x06\\x00\\x11\\xC9W\\x11\\x9CN\\x16\\x06\\x00\"1\tX\\x9C\\xCA\\x9BN\\x16\\x06\\x00\\x10\\x01\\x19\\xCB\\xF9\\xA0\\xAD\\xD7M\\xC1F \\x01*\\x1951!di:2897554155019396510\"1\t"
		"X\\x9C\\xCA\\x9BN\\x16\\x06\\x00\\x10\\x01\\x19\\xCB\\xF9\\xA0\\xAD\\xD7M\\xC1F \\x01*\\x1951!di:2897554155019396510)\\xEA\\xEB\\x11\\x9CN\\x16\\x06\\x00\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xE1\\xFC\t\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n"
		"\\x16annotation_chrome_sync\\x12\\x0551!pr\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\xABS\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\x94\\x8B\\x19\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!rl\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\xADS\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)"
		"\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\x99\\x01\\x08\\xFC\\xDE$\\x12\\x82\\x01 \\x00\\x92\\x01}\n4\n\\x0Echrome_sync_st\\x12\\x0551!st\\x1A\\x12\t\\xC9W\\x11\\x9CN\\x16\\x06\\x00\\x11\\xC9W\\x11\\x9CN\\x16\\x06\\x00)\\x17\\xEC\\x11\\x9CN\\x16\\x06\\x00\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)"
		"\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xC9\\x8B)\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!wa\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\xD4S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t"
		"\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\x7F\\x08\\x91\\xEB:\\x12i \\x00\\xAA\\x01d\n"
		"\\x0B\\x08\\xA7\\x9B\\x80\\xB1\\x06\\x10\\xD0\\xB5\\x8B\\x06\\x12\\x11\\x08\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\x01\\x10\\x98\\x8C\\xEB\\xDC\\x03\\x1A\\x0B\\x08\\xE1\\xF8\\xFA\\xB0\\x06\\x10\\xE8\\xF3\\xB6_*\\x0B\\x08\\xA7\\x9B\\x80\\xB1\\x06\\x10\\xD0\\xB5\\x8B\\x062\\x0C\\x08\\xE1\\xF8\\xFA\\xB0\\x06\\x10\\xD8\\xB7\\xE6\\xC7\\x02:\\x0C\\x08\\xE1\\x9B\\x80\\xB1\\x06\\x10\\xF0\\xAF\\xE6\\xC7\\x02B\\x0C\\x08\\xE1\\x9B\\x80\\xB1\\x06\\x10\\x90\\xAB\\xE6\\xCB\\x02*\\x0E\\x10\\x00\\x18\\x01 "
		"\\x01(\\x000\\x008\\x00@\\x002\\x83\\x01\\x08\\x8A\\x91?\\x12m \\x00\\x92\\x01G\nE\n\\x16annotation_chrome_sync\\x12\\x0551!cn\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\x8AS\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03\\xA2\\x01\\x1E\n\\x00\\x1A\\x0C\\x08\\xE5\\x9B\\x80\\xB1\\x06\\x10\\xA0\\xE1\\x80\\xC3\\x03\"\\x0C\\x08\\xEB\\xC9\\xF6\\xA2\\x06\\x10\\xF8\\xD8\\xE9\\xAA\\x02*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x000\\x008\\x00@\\x002\\xAB\\x01\\x08\\xCA\\xAA=\\x12\\x94\\x01 \\x00\\x92\\x01\\x8E\\x01\nE\n\\x16annotation_chrome_sync\\x12\\x0551!sg\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)\\xAFS\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)"
		"\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\x99\\x01\\x08\\xAB\\xD26\\x12\\x82\\x01 \\x00\\x92\\x01}\n4\n\\x0Echrome_sync_wk\\x12\\x0551!wk\\x1A\\x12\t\\xC9W\\x11\\x9CN\\x16\\x06\\x00\\x11\\xC9W\\x11\\x9CN\\x16\\x06\\x00)\\x1B\\xEC\\x11\\x9CN\\x16\\x06\\x00\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00\\x11\\x80\\xF6\\x96\\x96N\\x16\\x06\\x00)"
		"\\x84S\\x11\\x9CN\\x16\\x06\\x000\\x80\\xED\\xDB\\xB4\\xE9\\xC9\\x85\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002J\\x08\\x81\\xF5\\x02\\x124 \\x00\\x88\\x01\\xEF\\xF3\\x96\\xA7\\xFA\\x8E\\xD5\\xB4\\x01\\xC2\\x01$0182390c-fec6-51b0-82b7-bb284b448a9b*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00@\\x00H\\x0CP\\x00:%z00000169-3dbd-8dc5-0000-00004f8f046eR&\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\n\\x04\\x18\\x91\\xEB:\n\\x0C\\x12\n"
		"8\\x00@\\x00R\\x02\\x10\\x01`\\x0C\\x10\\x01\\x18\\x00 \\x00Z\\x7F\n}\\x12{Chrome WIN 124.0.6367.60 (8771130bd84f76d855ae42fbe02752b03e352f17-refs/branch-heads/6367@{#798}) channel(stable),gzip(gfe)b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x01", 
		LAST);

	web_custom_request("command_2", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=pqis408hzQYl0renptNTXA%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x13delevilya@gmail.com\\x10c\\x18\\x01\"\\xA2\\x17\n\\xAE\\x04\n$38fc5cce-285a-43dd-b032-e0dee4348483 \\x00(\\xA7\\xE8\\xE9\\xE9\\xEE10\\xA7\\xE8\\xE9\\xE9\\xEE1:`pqis408hzQYl0renptNTXA==-https://mail.yandex.ru/?uid=1130000066125317#message/185773484629033045\\x90\\x01\\x00\\xAA\\x01\\xF0\\x02\\x8A\\xD9\\xD6\\x03\\xEA\\x02\\x08\\xED\\xC3\\xCD\\xE5\\xCE\\x9C\\xDD\\x17\\x12\\x18pqis408hzQYl0renptNTXA==\\x1A\\xB0\\x01\\x08\\x9B\\xEE\\x01\\x12Ghttps://mail.yandex.ru/?uid="
		"1130000066125317#message/185773484629033045\\x1A_\\xD0\\x9F\\xD0\\xB8\\xD1\\x81\\xD1\\x8C\\xD0\\xBC\\xD0\\xBE \\xC2\\xABXSET Load Testing \\xD0\\x9F\\xD0\\xBE\\xD1\\x82\\xD0\\xBE\\xD0\\xBA 7\\xC2\\xBB \\xE2\\x80\\x94 academy academy \\xE2\\x80\\x94 \\xD0\\xAF\\xD0\\xBD\\xD0\\xB4\\xD0\\xB5\\xD0\\xBA\\xD1\\x81 \\xD0\\x9F\\xD0\\xBE\\xD1\\x87\\xD1\\x82\\xD0\\xB0 \\x00\"\n\\x08\\x08\\x10\\x00\\x18\\x00 \\x00(\\x00"
		"(\\x000\\x008\\x9A\\xC7\\x9EA@\\x01H\\xA4\\x85\\xDCJP\\xA5\\x85\\xDCJX\\xBA\\xC8\\xAB\\xB0\\xB5\\x9C\\xDD\\x17`\\xBA\\xC8\\xAB\\xB0\\xB5\\x9C\\xDD\\x17h\\xBA\\xC8\\xAB\\xB0\\xB5\\x9C\\xDD\\x17p\\xC8\\x01z\\x00\\x80\\x01\\x00\\x8A\\x01>https://mail.yandex.ru/u2709/favicon/png/main-favicon/32/0.png\\x98\\x01\\x00\\xA0\\x01\\x00\\xA8\\x01\\x00\\xB0\\x01\\x00\\xB8\\x01\\x00\\xBA\\x01\\x1C1sHsjihINpgRSZonWdfbQQjtwqM=\n\\xD5\\x04\n$b3b76b5d-6f51-4a52-84a0-09f3383a4686 \\x00"
		"(\\xA7\\xE8\\xE9\\xE9\\xEE10\\xA7\\xE8\\xE9\\xE9\\xEE1:\\x87\\x01pqis408hzQYl0renptNTXA==-https://disk.yandex.ru/d/Osbdzo7R1QhkEA/13_%D0%9B%D0%B5%D0%BA%D1%86%D0%B8%D1%8F%2008.04.24/video1710494215.mp4\\x90\\x01\\x00\\xAA\\x01\\xEF\\x02\\x8A\\xD9\\xD6\\x03\\xE9\\x02\\x08\\xC3\\xD4\\xFD\\xE8\\xCE\\x9C\\xDD\\x17\\x12\\x18pqis408hzQYl0renptNTXA==\\x1A\\xA4\\x01\\x08\\x9E\\xEE\\x01\\x12nhttps://disk.yandex.ru/d/Osbdzo7R1QhkEA/13_%D0%9B%D0%B5%D0%BA%D1%86%D0%B8%D1%8F%2008.04.24/video1710494215.mp4\\x1A,7"
		" \\xD0\\x9F\\xD0\\xBE\\xD1\\x82\\xD0\\xBE\\xD0\\xBA XSET \\xE2\\x80\\x94 \\xD0\\xAF\\xD0\\xBD\\xD0\\xB4\\xD0\\xB5\\xD0\\xBA\\xD1\\x81\\xC2\\xA0\\xD0\\x94\\xD0\\xB8\\xD1\\x81\\xD0\\xBA \\x00\"\n\\x08\\x08\\x10\\x00\\x18\\x00 \\x00(\\x00(\\x000\\x008\\xA5\\xDB\\xED=@\\x01H\\xA4\\x85\\xDCJP\\xAF\\x85\\xDCJX\\xBA\\xAF\\xBF\\xE7\\xC4\\x9C\\xDD\\x17`\\xBA\\xAF\\xBF\\xE7\\xC4\\x9C\\xDD\\x17h\\xBA\\xAF\\xBF\\xE7\\xC4\\x9C\\xDD\\x17p\\xC8\\x01z\\x00\\x80\\x01\\x00\\x8A\\x01Ihttps://yastatic.net/s3/psf/"
		"disk-public/_/19WOwVVlF5JwYCln8fnnEGMQs5m.png\\x98\\x01\\x00\\xA0\\x01\\x00\\xA8\\x01\\x00\\xB0\\x01\\x00\\xB8\\x01\\x00\\xBA\\x01\\x1CfvTRgv+LzlQ/DTaViVOBvdLHstU=\n\\x9F\\x04\n$649596eb-07cb-4ae4-a330-40e78c8c3c03 \\x00(\\xA7\\xE8\\xE9\\xE9\\xEE10\\xA7\\xE8\\xE9\\xE9\\xEE1:vpqis408hzQYl0renptNTXA==-https://www.youtube.com/results?search_query=load+runner+"
		"%D1%81%D0%BA%D1%80%D0%B8%D0%BF%D1%82\\x90\\x01\\x00\\xAA\\x01\\xCB\\x02\\x8A\\xD9\\xD6\\x03\\xC5\\x02\\x08\\xD8\\xD8\\xBA\\xE8\\xCE\\x9C\\xDD\\x17\\x12\\x18pqis408hzQYl0renptNTXA==\\x1A\\x89\\x01\\x08\\x9D\\xEE\\x01\\x12]https://www.youtube.com/results?search_query=load+runner+%D1%81%D0%BA%D1%80%D0%B8%D0%BF%D1%82\\x1A\"load runner \\xD1\\x81\\xD0\\xBA\\xD1\\x80\\xD0\\xB8\\xD0\\xBF\\xD1\\x82 - YouTube \\x00\"\n\\x08\\x08\\x10\\x00\\x18\\x00 \\x00(\\x00(\\x000\\x008\\xD7\\x97\\xB1"
		">@\\x01H\\xA4\\x85\\xDCJP\\xA9\\x85\\xDCJX\\x8C\\x80\\xBC\\xAB\\xC3\\x9C\\xDD\\x17`\\x8C\\x80\\xBC\\xAB\\xC3\\x9C\\xDD\\x17h\\x8C\\x80\\xBC\\xAB\\xC3\\x9C\\xDD\\x17p\\xC8\\x01z\\x00\\x80\\x01\\x00\\x8A\\x01@https://www.youtube.com/s/desktop/adea8f15/img/favicon_32x32.png\\x98\\x01\\x00\\xA0\\x01\\x00\\xA8\\x01\\x00\\xB0\\x01\\x00\\xB8\\x01\\x00\\xBA\\x01\\x1CsmOJmRuafTXiQcyjzBIIGUecjWs=\n\\xB5\\x05\n$101969dd-70d7-47b6-9b06-7c505405cc25 \\x00(\\xA7\\xE8\\xE9\\xE9\\xEE10\\xA7\\xE8\\xE9\\xE9\\xEE1"
		":Dpqis408hzQYl0renptNTXA==-https://www.youtube.com/watch?v=BTu1R6d0Z0c\\x90\\x01\\x00\\xAA\\x01\\x93\\x04\\x8A\\xD9\\xD6\\x03\\x8D\\x04\\x08\\x9D\\xE5\\xB9\\xE8\\xCE\\x9C\\xDD\\x17\\x12\\x18pqis408hzQYl0renptNTXA==\\x1A\\xEF\\x01\\x08\\x9C\\xEE\\x01\\x12+https://www.youtube.com/watch?v=BTu1R6d0Z0c\\x1A\\xB9\\x01(32) LoadRunner: \\xD1\\x80\\xD0\\xB0\\xD0\\xB7\\xD1\\x80\\xD0\\xB0\\xD0\\xB1\\xD0\\xBE\\xD1\\x82\\xD0\\xBA\\xD0\\xB0 \\xD0\\xB8 "
		"\\xD0\\xBE\\xD1\\x82\\xD0\\xBB\\xD0\\xB0\\xD0\\xB4\\xD0\\xBA\\xD0\\xB0 \\xD1\\x81\\xD0\\xBA\\xD1\\x80\\xD0\\xB8\\xD0\\xBF\\xD1\\x82\\xD0\\xB0 \\xD0\\xBD\\xD0\\xB0\\xD0\\xB3\\xD1\\x80\\xD1\\x83\\xD0\\xB7\\xD0\\xBE\\xD1\\x87\\xD0\\xBD\\xD0\\xBE\\xD0\\xB3\\xD0\\xBE \\xD1\\x82\\xD0\\xB5\\xD1\\x81\\xD1\\x82\\xD0\\xB8\\xD1\\x80\\xD0\\xBE\\xD0\\xB2\\xD0\\xB0\\xD0\\xBD\\xD0\\xB8\\xD1\\x8F // "
		"\\xC2\\xAB\\xD0\\x9D\\xD0\\xB0\\xD0\\xB3\\xD1\\x80\\xD1\\x83\\xD0\\xB7\\xD0\\xBE\\xD1\\x87\\xD0\\xBD\\xD0\\xBE\\xD0\\xB5 \\xD1\\x82\\xD0\\xB5\\xD1\\x81\\xD1\\x82\\xD0\\xB8\\xD1\\x80\\xD0\\xBE\\xD0\\xB2\\xD0\\xB0\\xD0\\xBD\\xD0\\xB8\\xD0\\xB5\\xC2\\xBB - YouTube \\x00\"\n\\x08\\x08\\x10\\x00\\x18\\x00 \\x00(\\x00(\\x000\\x008\\xE2\\xE6\\xB1"
		">@\\x01H\\xA4\\x85\\xDCJP\\xAC\\x85\\xDCJX\\x9A\\x9C\\xB7\\xBD\\xC3\\x9C\\xDD\\x17`\\x9A\\x9C\\xB7\\xBD\\xC3\\x9C\\xDD\\x17h\\x9A\\x9C\\xB7\\xBD\\xC3\\x9C\\xDD\\x17p\\xC8\\x01z\\x02ru\\x80\\x01\\x00\\x8A\\x01@https://www.youtube.com/s/desktop/adea8f15/img/favicon_32x32.png\\x92\\x01]https://www.youtube.com/results?search_query=load+runner+%D1%81%D0%BA%D1%80%D0%B8%D0%BF%D1%82\\x98\\x01\\x00\\xA0\\x01\\x00\\xA8\\x01\\x00\\xB0\\x01\\x00\\xB8\\x01\\x00\\xBA\\x01\\x1Cz6ckfGU9FwnOI5DBz4bAmj63uf0="
		"\\x12\\x18pqis408hzQYl0renptNTXA==\"\\x9F\\x02\\x08\\x88\\x81\\x02\\x08\\xC6\\xA6\\x02\\x08\\xB1\\xE6\\x02\\x08\\xCF\\xF3\\x03\\x08\\xF1\\xF7\\x01\\x08\\xDE\\xD8\\x12\\x08\\xC9\\x95\\x14\\x08\\xB9\\xA1/\\x08\\xFA\\xC1\\x02\\x08\\xF7\\xF7\\x02\\x08\\xA2\\xB4\\x05\\x08\\xC7\\x87\\x03\\x08\\xEC\\xF9\\x02\\x08\\xE8\\xA9\\x06\\x08\\x9F\\xEF\\x05\\x08\\xEB\\x95\t\\x08\\xAC\\xB4\n\\x08\\x9A\\xB7\t\\x08\\xE1\\xFC\t\\x08\\x94\\x8B\\x19\\x08\\xA6\\xE4\\x1B\\x08\\xEE\\xF7"
		"!\\x08\\xFC\\xDE$\\x08\\xB4\\xD2$\\x08\\xC9\\x8B)\\x08\\xA2\\xBE,\\x08\\x91\\xEB:\\x08\\x8A\\x91?\\x08\\xCA\\xAA=\\x08\\xAB\\xD26\\x08\\x81\\xF5\\x02\\x18\\x00 \\x01*\\x98\\x01d_ZH6q8E6dM:APA91bFGLwYPchYvC4KwLLTRd4RJ_rVJz6MgvdM7gYvHJkVytGa-A3e5j5k_g2bHksCtegR9rdf32llMcET5vlsLT59cCskuIxfgnLuBFTPFdrhB_UtYAXTM0mgHJSxHt8NYSTTAB-910\\x01@\\x012\\x80\\x02DXUcY1j(,\\\\pdQmSn%JNHlsOlt_ DTI!WvPo('WM1esMH(N^h{XosO[i&]ku$g19THtrX'g*ph#Nz(-?_6cmSqoG_V<ul/r\\\\I*=Zn:82|\"Ub@nJ&H gy_ DR~YQVk 0oJ\\\\\\\\r]"
		"ekN4z$.!lCm;!H\"U[ezXh*D1l!g#lhzS&}\"ZXxeyn7x~.|M4b!jTR1aEfq[{&BXpDwY?!;]rB;A^K;8w8Eve|~*Z,M~o~w.#d71d+]F4s%H!x]eUH/7)',4<V;t?:%z00000169-3dbd-8dc5-0000-00004f8f046eR\\x06\\x10\\x01\\x18\\x00 \\x00Z\\x7F\n}\\x12{Chrome WIN 124.0.6367.60 (8771130bd84f76d855ae42fbe02752b03e352f17-refs/branch-heads/6367@{#798}) channel(stable),gzip(gfe)b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x01", 
		LAST);

	/* Logout */

	web_revert_auto_header("X-Client-Data");

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

	lr_think_time(31);

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

	web_concurrent_end(NULL);

	return 0;
}