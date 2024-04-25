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

	lr_think_time(44);

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
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,gcmjkmgdlgnkkcocmoeiminaijmmjnii,neifaoindggfcjicffkgpmnlppeffabd,obedbbhbpmojnkanicioggnmelmoomoc,kiabhabjdbkjdpjbpigfodbdjmbglcoo,giekcmmlnklenlaomppkphknjmnnpneh,llkgjffcdpffmhiakmfcdcblohccpfmo,khaoiebndkojlmppeemjhbpbandiljpe,niikhdgajlphfehepabhhblakbdgeefj,efniojlnjndmcbiieegkicadnoecjjef,lmelglejhemejginpboagddgdfbepgmp,jflookgnkcckhobaglndicnbbgbonegd,jamhcnnkihinmdlkakkaopbjbbcngflc,ggkkehgbnfjpeggfpleeakpidbkibbmn,ojhpjlocmbogdgmfpkhlaaeamibhnphh,"
		"laoigpblnllgcgjnjnllmfolckpjlhki,oimompecagnajdejgnnjijobebaeigek,ehgidpndbllacpjalkiimkbadgjfnnmc,hfnkpimlhhgieaddgfemjhofmfblmnib,jflhchccmppkfebkiaminageehmchikm,eeigpngbgcognadeebkilcpcaedhellh,gonpemdgkjcecdgbnaabipppbmgfggbe");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-124.0.6367.60");

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=14:PbFucaIg5OgjZJbUv8vCSrVAFsg__2QzIJlOQs-Cm_U&cup2hreq=f140328be3531cdf4bc5c843b2d91262fbfa5ab2a71b405d8120f87aaf7ea852", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{d649b386-09ed-4a92-89bf-cc3ae6b4dced}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{ed9cec97-5ca0-4b0d-b564-092dd0bc850a}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\""
		"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{201913d2-8b4a-41f1-81d0-025f1606862f}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"accept_locale\":\"RU500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:2anf@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\""
		":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3a345dbd2774298fd2aecaacfa6d0e55f9bfe8cf378aad2f41a85a001592b789\"}]},\"ping\":{\"ping_freshness\":\"{beb62ab6-5a96-4e13-87cc-06cf13d840a3}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"20230916.566281051.14\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6063,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.90b91aaa463ef666bf030c7f14b7046738dee86d64321b28cb834d04bbfea4b3\"}]},\"ping\":{\"ping_freshness\":\"{d15732f9-4b62-4b3a-abac-8b9e6d6bf42c}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2024.3.25.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\""
		"ping_freshness\":\"{fa537bca-955f-4dbc-9417-ff9e33d8f665}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{5c00a02a-f2f7-40e6-818c-59df2178bd53}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":"
		"\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{dfdbd43e-ba1c-4b2f-be1f-cb5247b9f805}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto "
		"Main Cohort.\",\"enabled\":true,\"installdate\":6129,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.328bb02153b5f38003c94b120163f5da52156a08a58dc1b6b2701e6df4027dcb\"}]},\"ping\":{\"ping_freshness\":\"{68852260-f102-463a-8d14-b1e6ca890f48}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2024.4.17.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\""
		"package\":[{\"fp\":\"1.ccf35420925e20b0e6db8104eb982322ba27f500008f96049781785470937584\"}]},\"ping\":{\"ping_freshness\":\"{4802241f-0bde-4e04-b3f8-cd99dba0ae9b}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"927\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl/2c7f:2c7l@0.5\",\"cohortname\":\"Rollout\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.8076c3d0dd2cb1f8169cc6e5fd6c194e96cf989ca470815ce8491f77802dc303\"}]},\"ping\":{\"ping_freshness\":\"{e10e44c2-57fd-41b5-892c-0119c2daf334}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"443\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.0bd20c0ed22291b160114420a22e8ae9fd79a002cff2efdff99285f35a15f629\"}]},\"ping\":{\"ping_freshness\""
		":\"{27ff988f-16a6-454c-945c-42a27345f97f}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"3026\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{cc06d5c4-f460-456d-8fd5-a42aa9fe61a0}\",\"rd\":6316},\"updatecheck\":{},\"version\":\""
		"120.0.6050.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:2c99@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.905f83845e25579fd4c6ae4bdc81a2740a216023f856918045ced4508329c941\"}]},\"ping\":{\"ping_freshness\":\"{68eaafec-e3ba-4eb1-8913-4d3789547375}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2023.11.29.1201\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{62c41c1c-4668-42af-b6ba-9caa19602a26}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\""
		":5917,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{8629f5a6-bcd0-4a02-818b-ec68f9077f83}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{94aec459-c262-4a1b-895c-f669312e4fd5}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\""
		"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{5d2a65f9-830b-457b-ab58-231c0d0af350}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname"
		"\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a5cc3d30556ac6c3b232d9d508fd29e68481494801c9f3c054e6dbbc886b211e\"}]},\"ping\":{\"ping_freshness\":\"{b3aec429-555c-4076-934f-ee805c5f7638}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"8679\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6156,\"lang\":\"ru\",\"packages\":{\""
		"package\":[{\"fp\":\"1.f0b29cccee7e2b3871fc059e827e591bac65949de95c7db736b4d9e5de7b99ca\"}]},\"ping\":{\"ping_freshness\":\"{43c6ace2-cba1-49b0-9ebe-d0bcb57e4c85}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2024.4.16.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},"
		"\"ping\":{\"ping_freshness\":\"{adf786df-1fa4-48a4-a78d-82274e5a7558}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.120a8783d5ccfe1107dea29a51959fbbebbe1d57ad974dc9ee5b65323c90dab4\"}]},\"ping\":{\"ping_freshness\":\"{17937f5b-a431-422b-a5cb-01ae1b300249}\",\"rd\":6316},\""
		"updatecheck\":{},\"version\":\"2024.3.27.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":7,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.3447\"},\"prodversion\":\"124.0.6367.60\",\"protocol\":\"3.1\",\"requestid\":\"{b3bc43da-0429-464e-89be-af0297021df9}\",\"sessionid\":\""
		"{4822751e-430d-46e8-a848-05fdebd640db}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"124.0.6367.60\"}}", 
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

	lr_think_time(30);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t11.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=userSession", "Value=138792.235479951HVDQVcfpzVcftciDtpHfDzHf", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=45", ENDITEM, 
		"Name=login.y", "Value=6", ENDITEM, 
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
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("flights.gif", 
		"URL=http://localhost:1080/WebTours/images/flights.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("itinerary.gif", 
		"URL=http://localhost:1080/WebTours/images/itinerary.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t15.inf", 
		LAST);

	web_url("in_home.gif", 
		"URL=http://localhost:1080/WebTours/images/in_home.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t16.inf", 
		LAST);

	web_url("signoff.gif", 
		"URL=http://localhost:1080/WebTours/images/signoff.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t17.inf", 
		LAST);

	web_concurrent_end(NULL);

	/* Flights */

	lr_think_time(52);

	web_url("Search Flights Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("reservations.pl", 
		"URL=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t19.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("nav.pl_3", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("button_next.gif", 
		"URL=http://localhost:1080/WebTours/images/button_next.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t21.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("in_flights.gif", 
		"URL=http://localhost:1080/WebTours/images/in_flights.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("home.gif", 
		"URL=http://localhost:1080/WebTours/images/home.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t24.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	lr_think_time(6);

	web_url("ChRDaHJvbWUvMTI0LjAuNjM2Ny42MBI1CUFCU6JtyxUKEgUNVGIprRIFDXudxKUSBQ0fOzmFEgUN2oWZYRIFDamOSr0hkMaPazNfqbM=", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTI0LjAuNjM2Ny42MBI1CUFCU6JtyxUKEgUNVGIprRIFDXudxKUSBQ0fOzmFEgUN2oWZYRIFDamOSr0hkMaPazNfqbM=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t23.inf", 
		LAST);

	/* Find flight */

	web_add_auto_header("Origin", 
		"http://localhost:1080");

	lr_think_time(24);

	web_submit_data("reservations.pl_2", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=04/19/2024", ENDITEM, 
		"Name=arrive", "Value=Los Angeles", ENDITEM, 
		"Name=returnDate", "Value=04/20/2024", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=28", ENDITEM, 
		"Name=findFlights.y", "Value=8", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	/* Enter date */

	lr_think_time(30);

	web_submit_data("reservations.pl_3", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t26.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=032;238;04/19/2024", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=reserveFlights.x", "Value=24", ENDITEM, 
		"Name=reserveFlights.y", "Value=7", ENDITEM, 
		LAST);

	/* Payment Details */

	lr_think_time(31);

	web_submit_data("reservations.pl_4", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t27.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=outboundFlight", "Value=032;238;04/19/2024", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=49", ENDITEM, 
		"Name=buyFlights.y", "Value=7", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);

	web_url("bookanother.gif", 
		"URL=http://localhost:1080/WebTours/images/bookanother.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t28.inf", 
		LAST);

	/* Logout */

	web_revert_auto_header("Origin");

	lr_think_time(17);

	web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t29.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("nav.pl_4", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t30.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("home.html_2", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Resource=0", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t31.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	return 0;
}