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
		"Snapshot=t60.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Dest", 
		"frame");

	lr_think_time(19);

	web_url("header.html", 
		"URL=http://localhost:1080/WebTours/header.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t61.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

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

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t62.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0ckFxypPlCPNHCgYIARAAGAwSNwF-L9Irm-ka0dBcyBMGeu6jR-qdB6bpAXPHUFJYboYhCh6TKlzOgp0aLsla89NLUKzdH73xUgo&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

	web_add_header("X-Client-Data", 
		"CI22yQEIprbJAQipncoBCLnsygEIlaHLAQiFoM0BCN+BzgEItYXOAQiF1cwiGPTJzQEY1d3NARjYhs4B");

	web_custom_request("v1_GetModels", 
		"URL=https://optimizationguide-pa.googleapis.com/v1_GetModels?key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t63.inf", 
		"Mode=HTTP", 
		"EncType=application/x-protobuf", 
		"BodyBinary=\n\n\\x08\t\\x10\\x90\\xB0\\xE1\\xAF\\x06 \\x0F\ng\\x08\\x0F\\x10\\x04 \\x0F2_\nWtype.googleapis.com/google.internal.chrome.optimizationguide.v1.PageTopicsModelMetadata\\x12\\x04\\x08\\x020\\x02\ng\\x08\\x10 \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n\n\\x08\\x14\\x10\\xF5\\xAF\\xE1\\xAF\\x06 \\x0F\ng\\x08\\x15 \\x0F2a\nYtype.googleapis.com/"
		"google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\ng\\x08\\x17 \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n\n\\x08\\x19\\x10\\x94\\xA4\\x86\\xB0\\x06 \\x0F\n\n\\x08\\x1A\\x10\\xC1\\xFC\\xEB\\xA8\\x06 \\x0F\ng\\x08\\x1B \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n"
		"{\\x08\\x1F\\x10\\xCF\\x85\\xAD\\xA6\\x06 \\x0F2o\nitype.googleapis.com/google.internal.chrome.optimizationguide.v1.HistoryClustersModuleRankingModelMetadata\\x12\\x02\\x08\\x02\ng\\x08  \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\nN\\x08\"\\x10\\x86\\x82\\xB3\\xA5\\x06 \\x0F2B\n<type.googleapis.com/lens.prime.csc.VisualSearchModelMetadata\\x12\\x02\\x10\\x02\\x18\\x06*\\x02ru2\\x02\\x08\\x06", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"124\", \"Google Chrome\";v=\"124\", \"Not-A.Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t64.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	lr_think_time(12);

	web_url("webtours.png", 
		"URL=http://localhost:1080/WebTours/images/webtours.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/WebTours/header.html", 
		"Snapshot=t65.inf", 
		LAST);

	web_url("hp_logo.png", 
		"URL=http://localhost:1080/WebTours/images/hp_logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/WebTours/header.html", 
		"Snapshot=t66.inf", 
		LAST);

	web_add_cookie("HSID=AW9vMorzUAfNjiz1f; DOMAIN=accounts.google.com");

	web_add_cookie("SSID=AM6Dvdtj0cGnce6nA; DOMAIN=accounts.google.com");

	web_add_cookie("APISID=7bN8DiYSi8VyZg5D/AGMqa3NAgR3OjoJxa; DOMAIN=accounts.google.com");

	web_add_cookie("SAPISID=Xy-HtB-P04UcKCKn/APVnP2LXZtuC1WB05; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PAPISID=Xy-HtB-P04UcKCKn/APVnP2LXZtuC1WB05; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PAPISID=Xy-HtB-P04UcKCKn/APVnP2LXZtuC1WB05; DOMAIN=accounts.google.com");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI51tCDMFB6k9LErhdyA-Np9gbC7SVDhJlnYO2ItkKnStxZiFC2xCOPQUddK1QHIQOYqxOAlDLBHoRiQde9DHAFZd_mtex-3C8_N5ojZrFW0V4kLbcjkchPS4NLzfxxD6dkiDrrz; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:wGfkhTWkGkpCD_fjTnLuELIsmMP_PW53D6-ww-CwL7NSFrau3CcZDsn__k4Bt8JvaT2tpVCc_QEEcZkrlbYWEpFfQmgfHg:-S49gzMvqR5coZlh; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQI0poB; DOMAIN=accounts.google.com");

	web_add_cookie("SID=g.a000hwik97b7wdZlzftF8m5X06ff_U9mN3lZAKPMFNS8P-7YFE4iUYypBCQGZRf2IZZweUbSMwACgYKATcSAQASFQHGX2MibfXgLalXC-JStAMUi3E51RoVAUF8yKrOkOA6uHsnAt8TSLyX7R_D0076; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSID=g.a000hwik97b7wdZlzftF8m5X06ff_U9mN3lZAKPMFNS8P-7YFE4iO9mqC4UvOVCEo6rgWqrUcAACgYKASASAQASFQHGX2Migy4HTjnJGJnywPYHuTKSwxoVAUF8yKq8Zrqx1Fw7k-kR6hndMze60076; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSID=g.a000hwik97b7wdZlzftF8m5X06ff_U9mN3lZAKPMFNS8P-7YFE4iXFGLMIZ2R_WC8vLWw4GhYgACgYKARYSAQASFQHGX2MiohVOW1S5AsToOpe1aah_KRoVAUF8yKo1wwOk2nevpKrEi1SPIrRU0076; DOMAIN=accounts.google.com");

	web_add_cookie("LSID=o.drive.fife.usercontent.google.com|o.drive.google.com|o.lens.google.com|o.mail.google.com|s.RU|s.youtube:g.a000igik9wBI6MnqubgHKf_LS0ohBCrTUf_f5wT890KHm2hN0fQW-qe9Hay079Gk-M7jiDy6zgACgYKASkSAQASFQHGX2Mi6vv92jfAwUt4ZnebXUNaehoVAUF8yKqKXp0FYXPcGqv8uOqXM9K70076; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-1PLSID=o.drive.fife.usercontent.google.com|o.drive.google.com|o.lens.google.com|o.mail.google.com|s.RU|s.youtube:g.a000igik9wBI6MnqubgHKf_LS0ohBCrTUf_f5wT890KHm2hN0fQWLosUBcrYRnzWnGNLvMZ_8AACgYKAS4SAQASFQHGX2MisO-JkbOcJoIsbt7AXHrjCRoVAUF8yKriP_MnQ5a1zfWX_34ntBiN0076; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-3PLSID=o.drive.fife.usercontent.google.com|o.drive.google.com|o.lens.google.com|o.mail.google.com|s.RU|s.blogger|s.youtube:g.a000igik9wBI6MnqubgHKf_LS0ohBCrTUf_f5wT890KHm2hN0fQWOSYLZNZJ7Bc3C2XKTZW6bgACgYKAcISAQASFQHGX2MiBhKVk9TLVtQv1RkaBZixbhoVAUF8yKpGlQUs8EpuwSO53WwIQdqc0076; DOMAIN=accounts.google.com");

	web_add_cookie("AEC=AQTF6HwgwzTPpVjrqlzNyxslKAyj1dj5VjR2C4O0MVd7w-F7TQ3d6cBkOg; DOMAIN=accounts.google.com");

	web_add_cookie("NID=513=YVbX-l1zvBlLLmMj18hBTyj1qwfrMap8cI1JGUjL-tGo20hK5wbBfSfXtq_IWrVSkpbIZ0Q32QtvZaoF-zRhJEkWEVpWSXmMS9m18CdS-Mo2Vu6jkqPq4RjkimZS_zXU4BvOfQEd6kHzfoVK3TUsuUwiOW1A3zuADpelGTdjT2YgG3VBmztSXqxRXxufTubbrhlcKkBAaCBEYQuz4puCaW3ri7ePpyuJ8BqtzWTdRxr8CQ_dmBNrf4yXBJreVLGsxagDGsGlw0DL8u-AWDrEHaBCrrerLNxF2onaYTjdHFJpZP02ej5BwwmjXO1GmQGbAow4brU5AbOMthZRhOfn9LiioeGbY8m_n7ItkmzKWGI; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSIDTS=sidts-CjEB7F1E_DC1R2TeqQp1Gc5UP_HC9psoANxL0-IlLt3-QwHgtCxDc-5Uk_NR3YIaK8oOEAA; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDTS=sidts-CjEB7F1E_DC1R2TeqQp1Gc5UP_HC9psoANxL0-IlLt3-QwHgtCxDc-5Uk_NR3YIaK8oOEAA; DOMAIN=accounts.google.com");

	web_add_cookie("SIDCC=AKEyXzWoBUMT8Q9j_Kq-u8hLbLI_cMs5gp8Uua1_mYEjnCIEEoDBqj1DKG4jn4_5AEbOIa5OXEg; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSIDCC=AKEyXzX_1UCuxLGkbFIXbIq0PoYuLFFP84RPmIVSMTEVGuigEtMtDi1PccMqgAp5lYpF2dCPvFnG; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDCC=AKEyXzXBLvJxwesCD4_YdJDvux6pTUZufTDeDqxiCMgW4-SYJJgbeILn3bfEZ-Pf5AJ1nPzajBix; DOMAIN=accounts.google.com");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://www.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t67.inf", 
		"Mode=HTTP", 
		"Body= ", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"124\", \"Google Chrome\";v=\"124\", \"Not-A.Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(12);

	web_url("home.html", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t68.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("nav.pl", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t69.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("mer_login.gif", 
		"URL=http://localhost:1080/WebTours/images/mer_login.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t70.inf", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,oimompecagnajdejgnnjijobebaeigek,gcmjkmgdlgnkkcocmoeiminaijmmjnii,kiabhabjdbkjdpjbpigfodbdjmbglcoo,giekcmmlnklenlaomppkphknjmnnpneh,niikhdgajlphfehepabhhblakbdgeefj,khaoiebndkojlmppeemjhbpbandiljpe,llkgjffcdpffmhiakmfcdcblohccpfmo,hfnkpimlhhgieaddgfemjhofmfblmnib,laoigpblnllgcgjnjnllmfolckpjlhki,ehgidpndbllacpjalkiimkbadgjfnnmc,ggkkehgbnfjpeggfpleeakpidbkibbmn,jflookgnkcckhobaglndicnbbgbonegd,jamhcnnkihinmdlkakkaopbjbbcngflc,efniojlnjndmcbiieegkicadnoecjjef,"
		"neifaoindggfcjicffkgpmnlppeffabd,obedbbhbpmojnkanicioggnmelmoomoc,ojhpjlocmbogdgmfpkhlaaeamibhnphh,jflhchccmppkfebkiaminageehmchikm,lmelglejhemejginpboagddgdfbepgmp,eeigpngbgcognadeebkilcpcaedhellh,gonpemdgkjcecdgbnaabipppbmgfggbe");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-124.0.6367.60");

	lr_think_time(4);

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=14:nhIOHjfugpWg2moMDZ1ljXzl7Spe3xVDnHT2wrBtymU&cup2hreq=ad5c50e4b8a6b6ca8ba2fbc79316fb22f99a04a5411039965d569a24136ad33e", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t71.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{019d7630-7462-4113-846c-ad90c0f9c3ab}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{b042008e-99d3-41aa-81f9-202459aca57e}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\""
		"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{b2c6a41b-55d9-4ca1-8a5d-1379cdb1e3a5}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6063,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.90b91aaa463ef666bf030c7f14b7046738dee86d64321b28cb834d04bbfea4b3\"}]},\""
		"ping\":{\"ping_freshness\":\"{6ce72a2e-9af8-4ae2-954c-afe4e07be4ba}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2024.3.25.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{fff4ad99-cc05-456a-b594-46161559102b}\",\"rd\":6316},\""
		"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6129,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.328bb02153b5f38003c94b120163f5da52156a08a58dc1b6b2701e6df4027dcb\"}]},\"ping\":{\"ping_freshness\":\"{2b19435e-ec57-48e1-af39-d33ae9d23095}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2024.4.17.0\"},{\"appid\":\""
		"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{f8c75ee1-78f6-4585-82d0-5cb609a7346a}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\""
		"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{ab94115f-27d0-4434-9201-a25535c98a9c}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.1068376a9359bd7098c646baf1cb6042b4316da3f0c118cda67c4e15e56a2812\"}]},\"ping\":{\"ping_freshness\":\"{3108d746-4f6d-4650-bd70-b56af5c4ef42}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"8678\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{a6a17f55-43d6-4500-a22b-a9c88304a237}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\""
		"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{04d62f3a-e00f-4469-a9d4-aeb92699f131}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/"
		"1a0f:2c99@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.905f83845e25579fd4c6ae4bdc81a2740a216023f856918045ced4508329c941\"}]},\"ping\":{\"ping_freshness\":\"{60293316-c89a-44d5-a17d-e9121f23dc5c}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2023.11.29.1201\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,"
		"\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.0bd20c0ed22291b160114420a22e8ae9fd79a002cff2efdff99285f35a15f629\"}]},\"ping\":{\"ping_freshness\":\"{ca215865-7009-4069-bf11-93f14cc96a59}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"3026\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{736697f7-346d-464b-9066-8adc45e2c14c}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.ccf35420925e20b0e6db8104eb982322ba27f500008f96049781785470937584\"}]},\"ping\":{\""
		"ping_freshness\":\"{33efd0de-054b-44a3-8a8e-d19978b5e3b4}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"927\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{b56fc853-e3b9-453b-b0cd-20b061440739}\",\"rd\":6316},\"updatecheck\":{},\""
		"version\":\"1.0.2738.0\"},{\"accept_locale\":\"RU500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:2anf@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3a345dbd2774298fd2aecaacfa6d0e55f9bfe8cf378aad2f41a85a001592b789\"}]},\"ping\":{\"ping_freshness\":\"{b4a24a96-f485-44db-b18f-462a4f70e44d}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"20230916.566281051.14\"},{\"appid\":\""
		"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{11bad54e-13c2-4334-91fc-dc8f700e9e9f}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\""
		"Stable\",\"enabled\":true,\"installdate\":6156,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.f0b29cccee7e2b3871fc059e827e591bac65949de95c7db736b4d9e5de7b99ca\"}]},\"ping\":{\"ping_freshness\":\"{ab0848a5-e765-4a11-a3a8-cc558b5d9563}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2024.4.16.1\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl/2c7f:2c7l@0.5\",\"cohortname\":\"Rollout\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":"
		"{\"package\":[{\"fp\":\"1.8076c3d0dd2cb1f8169cc6e5fd6c194e96cf989ca470815ce8491f77802dc303\"}]},\"ping\":{\"ping_freshness\":\"{2cf0e725-2eae-410d-83c7-f4fceeb9c847}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"443\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\""
		"ping\":{\"ping_freshness\":\"{01c7cf07-69de-4bda-8c16-85d27f06994f}\",\"rd\":6316},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.120a8783d5ccfe1107dea29a51959fbbebbe1d57ad974dc9ee5b65323c90dab4\"}]},\"ping\":{\"ping_freshness\":\"{2f119f93-8325-464a-99fb-04f6271c5502}\",\"rd\":6316},\""
		"updatecheck\":{},\"version\":\"2024.3.27.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":7,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.3447\"},\"prodversion\":\"124.0.6367.60\",\"protocol\":\"3.1\",\"requestid\":\"{b470f2f6-61ed-4757-bacd-1ad2b51a6aaa}\",\"sessionid\":\""
		"{d12c2ed8-cd10-4b0e-8341-63a075c85065}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"124.0.6367.60\"}}", 
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

	lr_think_time(16);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t72.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=userSession", "Value=138792.18144998HVDQVccpiDDDDDDDtciDtpHDH", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=53", ENDITEM, 
		"Name=login.y", "Value=15", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("nav.pl_2", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t73.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("login.pl_2", 
		"URL=http://localhost:1080/cgi-bin/login.pl?intro=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t77.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	/* Flights */

	web_concurrent_start(NULL);

	web_url("flights.gif", 
		"URL=http://localhost:1080/WebTours/images/flights.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t74.inf", 
		LAST);

	web_url("itinerary.gif", 
		"URL=http://localhost:1080/WebTours/images/itinerary.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t75.inf", 
		LAST);

	web_url("in_home.gif", 
		"URL=http://localhost:1080/WebTours/images/in_home.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t76.inf", 
		LAST);

	web_url("signoff.gif", 
		"URL=http://localhost:1080/WebTours/images/signoff.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t78.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	lr_think_time(56);

	web_custom_request("json_2", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t79.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"event\":[{\"download_time_ms\":28485,\"downloaded\":2133,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"8679\",\"previousversion\":\"8678\",\"total\":2133,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"hfnkpimlhhgieaddgfemjhofmfblmnib/1.a5cc3d30556ac6c3b232d9d508fd29e68481494801c9f3c054e6dbbc886b211e/1.1068376a9359bd7098c646baf1cb6042b4316da3f0c118cda67c4e15e56a2812/2308079597fff985f4857b4ff5fb9542b0a1dd6eefc175a5cc05cad3731a03f2.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.a5cc3d30556ac6c3b232d9d508fd29e68481494801c9f3c054e6dbbc886b211e\",\"nextversion\":\"8679\",\"previousfp\":\"1.1068376a9359bd7098c646baf1cb6042b4316da3f0c118cda67c4e15e56a2812\",\""
		"previousversion\":\"8678\"}],\"installdate\":5917,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a5cc3d30556ac6c3b232d9d508fd29e68481494801c9f3c054e6dbbc886b211e\"}]},\"version\":\"8679\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":7,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.22631.3447\"},\"prodversion\":\"124.0.6367.60\",\"protocol\":\"3.1\",\"requestid\":\"{92012386-e7c4-4416-8428-4b04acdba894}\",\"sessionid\":\"{d12c2ed8-cd10-4b0e-8341-63a075c85065}\",\"updaterversion\":\"124.0.6367.60\"}}", 
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

	lr_think_time(9);

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
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t81.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("reservations.pl", 
		"URL=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t82.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("in_flights.gif", 
		"URL=http://localhost:1080/WebTours/images/in_flights.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t83.inf", 
		LAST);

	web_url("home.gif", 
		"URL=http://localhost:1080/WebTours/images/home.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t84.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(25);

	web_url("button_next.gif", 
		"URL=http://localhost:1080/WebTours/images/button_next.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t85.inf", 
		LAST);

	/* Find Flight */

	web_add_auto_header("Origin", 
		"http://localhost:1080");

	lr_think_time(21);

	web_submit_data("reservations.pl_2", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t86.inf", 
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
		"Name=findFlights.x", "Value=45", ENDITEM, 
		"Name=findFlights.y", "Value=11", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	/* Enter date */

	lr_think_time(37);

	web_submit_data("reservations.pl_3", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t87.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=030;251;04/19/2024", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=reserveFlights.x", "Value=38", ENDITEM, 
		"Name=reserveFlights.y", "Value=12", ENDITEM, 
		LAST);

	/* Logout */

	web_revert_auto_header("Origin");

	lr_think_time(21);

	web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t88.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("nav.pl_4", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t89.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("home.html_2", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Resource=0", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t90.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	return 0;
}