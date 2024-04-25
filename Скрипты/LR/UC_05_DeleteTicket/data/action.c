Action()
{

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"124\", \"Google Chrome\";v=\"124\", \"Not-A.Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=124", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"fhkbfkkohcdgpckffakhbllifkakihmh,ghbmnnjooekpmoecnnnilnnbdlolhkhi,nmmhkkegccagdldgiimedpiccmgmieda");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-124.0.6367.60");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=14:hjUN56LG4qVfs7-hFyh2wcyyCIPs00a9259x2goCVto&cup2hreq=c62fc769b98d402834f5f6ac5e6206faefaad55ebe956e66400dbe37d7372515", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"fhkbfkkohcdgpckffakhbllifkakihmh\",\"cohort\":\"1::\",\"disabled\":[{\"reason\":8192}],\"enabled\":false,\"installdate\":5954,\"installedby\":\"external\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a2979e3f5ba14066bd627fe93e24057d01013e22e76ad0ebf36d77c05369c06c\"}]},\"ping\":{\"ping_freshness\":\"{19c0014e-7199-411e-abd2-8ab463aa111a}\",\"rd\":6319},\"updatecheck\":{},\""
		"version\":\"3.0.1.24\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5917,\"installedby\":\"external\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.378723490592c0627ac18a287f9a9cb74970c3c6e10a177c322282bfc1d01e01\"}]},\"ping\":{\"ping_freshness\":\"{15e6ca99-c822-4256-b6c4-5558755aa2aa}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"1.75.4\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1::\",\"enabled\":true,\""
		"installdate\":5917,\"installedby\":\"other\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\"ping\":{\"ping_freshness\":\"{78008da9-9afc-4795-96ea-263373106213}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"1.0.0.6\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":7,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\""
		"platform\":\"Windows\",\"version\":\"10.0.22631.3447\"},\"prodversion\":\"124.0.6367.60\",\"protocol\":\"3.1\",\"requestid\":\"{9366410c-6527-40b4-bcc1-50c8b74bf264}\",\"sessionid\":\"{dccbcc4c-b814-4dc6-9297-8fcae7cd7130}\",\"updaterversion\":\"124.0.6367.60\"}}", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"124\", \"Google Chrome\";v=\"124\", \"Not-A.Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(18);

	web_url("header.html", 
		"URL=http://localhost:1080/WebTours/header.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("hp_logo.png", 
		"URL=http://localhost:1080/WebTours/images/hp_logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/WebTours/header.html", 
		"Snapshot=t18.inf", 
		LAST);

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t19.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	lr_think_time(6);

	web_url("webtours.png", 
		"URL=http://localhost:1080/WebTours/images/webtours.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/WebTours/header.html", 
		"Snapshot=t20.inf", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_concurrent_start(NULL);

	web_url("home.html", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t21.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("nav.pl", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t22.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(12);

	web_url("mer_login.gif", 
		"URL=http://localhost:1080/WebTours/images/mer_login.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t23.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("ChRDaHJvbWUvMTI0LjAuNjM2Ny42MBIgCU35IjnBRbgwEgUN541ADhIFDc5BTHohSeE1wfpE8PA=", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTI0LjAuNjM2Ny42MBIgCU35IjnBRbgwEgUN541ADhIFDc5BTHohSeE1wfpE8PA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t24.inf", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Goog-Update-AppId", 
		"neifaoindggfcjicffkgpmnlppeffabd,oimompecagnajdejgnnjijobebaeigek,lmelglejhemejginpboagddgdfbepgmp,kiabhabjdbkjdpjbpigfodbdjmbglcoo,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,llkgjffcdpffmhiakmfcdcblohccpfmo,laoigpblnllgcgjnjnllmfolckpjlhki,obedbbhbpmojnkanicioggnmelmoomoc,efniojlnjndmcbiieegkicadnoecjjef,ihnlcenocehgdaegdmhbidjhnhdchfmm,ggkkehgbnfjpeggfpleeakpidbkibbmn,jamhcnnkihinmdlkakkaopbjbbcngflc,niikhdgajlphfehepabhhblakbdgeefj,jflookgnkcckhobaglndicnbbgbonegd,"
		"ehgidpndbllacpjalkiimkbadgjfnnmc,ojhpjlocmbogdgmfpkhlaaeamibhnphh,hfnkpimlhhgieaddgfemjhofmfblmnib,gcmjkmgdlgnkkcocmoeiminaijmmjnii,jflhchccmppkfebkiaminageehmchikm,eeigpngbgcognadeebkilcpcaedhellh,gonpemdgkjcecdgbnaabipppbmgfggbe");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-124.0.6367.60");

	lr_think_time(11);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=14:KseH-uKsr6U4fSwJEVrKYAUMXwaehd3ym1BxwChfuGQ&cup2hreq=fbf705843937ef4301699ad325f222a39452b97a4fbe3f4e8e3cdd84572b6f84", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{fdf532ae-78f4-409a-aed5-82630a42d3a2}\",\"rd\":6319},\"updatecheck\":{},\"version\":\""
		"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{3cf609a6-8aac-4b11-a11e-6562a83dc0a1}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\""
		":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.8076c3d0dd2cb1f8169cc6e5fd6c194e96cf989ca470815ce8491f77802dc303\"}]},\"ping\":{\"ping_freshness\":\"{425a9271-3933-4da1-91aa-5dc00aa693f9}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"443\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6063,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.90b91aaa463ef666bf030c7f14b7046738dee86d64321b28cb834d04bbfea4b3\"}]},\"ping\":{\"ping_freshness\":\"{404d74c4-7b56-4cca-9561-55489480b734}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"2024.3.25.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\""
		"ping_freshness\":\"{79e288f4-c42a-4083-9e99-4ff0594b9b68}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{ff1cb42a-5007-40f3-a427-5cbcd6bb8e94}\",\"rd\":6319},\"updatecheck\":{},\"version\""
		":\"63\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{9309e9e8-b014-4ea6-be73-b3a5156cc88b}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\","
		"\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{6278ee17-090f-48a7-b41f-3a46fa303362}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"accept_locale\":\"RU500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:2anf@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.3a345dbd2774298fd2aecaacfa6d0e55f9bfe8cf378aad2f41a85a001592b789\"}]},\"ping\":{\"ping_freshness\":\"{281276d3-d975-4538-ba96-e1fc42093edc}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"20230916.566281051.14\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.0f7d5e19914fdc90c57d055e70af1f17a0e49be70bce48ab641a32cf0b0c838d\"}]},\""
		"ping\":{\"ping_freshness\":\"{503e603a-fc4e-4924-891b-1c9a76bb534f}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"932\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{663546fd-7d66-4f97-b8f5-3e4d4e787a66}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"1.3.36.141\""
		"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:2c99@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.905f83845e25579fd4c6ae4bdc81a2740a216023f856918045ced4508329c941\"}]},\"ping\":{\"ping_freshness\":\"{51393f29-6b7f-4d53-ad28-c155412e4737}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"2023.11.29.1201\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\""
		"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{a98a74c9-014e-4d7b-a454-a74ccdbf578e}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\""
		"installdate\":6129,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.9d5aa2e4967451a04bcd13afcac535d0e179cf27f4081f4d574b1af84d1a31e5\"}]},\"ping\":{\"ping_freshness\":\"{0d5ca81a-c8ff-42c0-8692-ad25d1c0860d}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"2024.4.19.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.0bd20c0ed22291b160114420a22e8ae9fd79a002cff2efdff99285f35a15f629\"}]},\"ping\":{\"ping_freshness\":\"{6b39053f-7b42-4d13-ad94-b7826a5deb28}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"3026\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\""
		"ping_freshness\":\"{eb3d4f50-132f-48db-8586-721cd2571c68}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{a7ccf9c0-edfa-4ef6-90e2-c76229120e19}\",\"rd\":6319},\"updatecheck\":"
		"{},\"version\":\"3\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.37dd5bec62d5462f48959cd23e3ab48460dab825199dfdd2d3995010ab5948a3\"}]},\"ping\":{\"ping_freshness\":\"{fbfef057-c00a-46fa-a604-0aded454b6a1}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"8687\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\""
		"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{1154aa56-cae6-4e89-9a05-2dc63b659e2b}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6156,\""
		"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.86609125477d76853373bff6d4c6f40c67c7537efcd04aa6980e31a4bb030111\"}]},\"ping\":{\"ping_freshness\":\"{55159201-f5b4-4d70-8d35-17b3fa5d9c2b}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"2024.4.18.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{f64f0f08-8906-4de2-94a3-03fa4d0ccd0e}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:2cer@0.1\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.120a8783d5ccfe1107dea29a51959fbbebbe1d57ad974dc9ee5b65323c90dab4\"}]},\"ping\""
		":{\"ping_freshness\":\"{bb1823d5-a6d0-4f9f-888e-61872f3bcfc2}\",\"rd\":6319},\"updatecheck\":{},\"version\":\"2024.3.27.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":7,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.3447\"},\"prodversion\":\"124.0.6367.60\",\"protocol\":\"3.1\",\""
		"requestid\":\"{400618dc-842e-4415-8ad9-64a8a4259107}\",\"sessionid\":\"{089771e7-1fef-4410-917c-0c5cfdfee0be}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"124.0.6367.60\"}}", 
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

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_header("Origin", 
		"http://localhost:1080");

	lr_think_time(14);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t26.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=userSession", "Value=138810.421790198HVtAAzVpAHAiDDDDtcitApDzztcf", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=55", ENDITEM, 
		"Name=login.y", "Value=10", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("nav.pl_2", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t27.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("login.pl_2", 
		"URL=http://localhost:1080/cgi-bin/login.pl?intro=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t31.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("flights.gif", 
		"URL=http://localhost:1080/WebTours/images/flights.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("itinerary.gif", 
		"URL=http://localhost:1080/WebTours/images/itinerary.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("in_home.gif", 
		"URL=http://localhost:1080/WebTours/images/in_home.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("signoff.gif", 
		"URL=http://localhost:1080/WebTours/images/signoff.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t32.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "1");

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

	lr_think_time(114);

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0ckFxypPlCPNHCgYIARAAGAwSNwF-L9Irm-ka0dBcyBMGeu6jR-qdB6bpAXPHUFJYboYhCh6TKlzOgp0aLsla89NLUKzdH73xUgo&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

	/* ListOfTickets */

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	lr_think_time(90);

	web_url("threatListUpdates_fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINMTI0LjAuNjM2Ny42MBopCAUQARobCg0IBRAGGAEiAzAwMTABEJq6FhoCGAhJ0uvmIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARDtoA4aAhgIxxnIYCIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQ_5cOGgIYCOUbySwiBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABEMS6BxoCGAiHjqdUIgQgASACKAEaKAgBEAgaGgoNCAEQCBgBIgMwMDEwBBDvOBoCGAgMef-iIgQgASACKAQaKQgPEAEaGwoNCA8QBhgBIgMwMDEwARCC4QIaAhgIO3LiQSIEIAEgAigBGicIChAIGhkKDQgKEAgYASIDMDAxMAEQBxoCGAh2JyrIIgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAjGgIYCL5vONQiBCABIAIoARooCAgQAR"
		"oaCg0ICBAGGAEiAzAwMTABEPEVGgIYCJVAw18iBCABIAIoARopCA0QARobCg0IDRAGGAEiAzAwMTABEJqYAhoCGAha_J00IgQgASACKAEaKQgHEAEaGwoNCAcQBhgBIgMwMDEwARCR5w4aAhgIV3MUHyIEIAEgAigBGigIEBABGhoKDQgQEAYYASIDMDAxMAEQqSMaAhgIhwqY1iIEIAEgAigBIgIIAQ==&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t34.inf", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"124\", \"Google Chrome\";v=\"124\", \"Not-A.Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	lr_think_time(14);

	web_url("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t35.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("itinerary.pl", 
		"URL=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t36.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("nav.pl_3", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t37.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("cancelreservation.gif", 
		"URL=http://localhost:1080/WebTours/images/cancelreservation.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("cancelallreservations.gif", 
		"URL=http://localhost:1080/WebTours/images/cancelallreservations.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t39.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("home.gif", 
		"URL=http://localhost:1080/WebTours/images/home.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t40.inf", 
		LAST);

	web_url("in_itinerary.gif", 
		"URL=http://localhost:1080/WebTours/images/in_itinerary.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t41.inf", 
		LAST);

	web_concurrent_end(NULL);

	/* DeleteTicket */

	web_add_header("Origin", 
		"http://localhost:1080");

	lr_think_time(35);

	web_submit_data("itinerary.pl_2", 
		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t42.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=flightID", "Value=1128-805-JB", ENDITEM, 
		"Name=flightID", "Value=1128-1574-JB", ENDITEM, 
		"Name=flightID", "Value=1120-2327-JB", ENDITEM, 
		"Name=flightID", "Value=9352-3117-JB", ENDITEM, 
		"Name=5", "Value=on", ENDITEM, 
		"Name=flightID", "Value=311187-38620-JB", ENDITEM, 
		"Name=removeFlights.x", "Value=67", ENDITEM, 
		"Name=removeFlights.y", "Value=5", ENDITEM, 
		"Name=.cgifields", "Value=4", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=.cgifields", "Value=3", ENDITEM, 
		"Name=.cgifields", "Value=2", ENDITEM, 
		"Name=.cgifields", "Value=5", ENDITEM, 
		LAST);

	/* Logout */

	lr_think_time(29);

	web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t43.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("home.html_2", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Resource=0", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t44.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("nav.pl_4", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t45.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	return 0;
}