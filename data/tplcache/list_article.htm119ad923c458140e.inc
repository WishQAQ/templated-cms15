<?php
$z[0]=Array("field","",257,276);
$z[0][4]['name']="title";
$z[1]=Array("global","",277,303);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",344,373);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",412,471);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",2044,2079);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",2145,2167);
$z[5][4]['name']="typename";
$z[6]=Array("field","",2216,2245);
$z[6][4]['name']="position";
$z[7]=Array("channel","\r\n<li><a href='[field:typelink/]'>[field:typename/]</a></li>\r\n",2356,2482);
$z[7][4]['type']="son";
$z[8]=Array("list","\r\n<li> \r\n	<a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a>\r\n    <p class=\"newslisttime\"><span class=\"fl\">[field:pubdate function=\"MyDate('Y/m/d',@me)\"/]</span><a href=\"[field:arcurl/]\" title=\"Readmore\">Readmore</a></p>\r\n    <p class=\"newstxt\">[field:description function=\"cn_substr(@me,255)\"/]...</p>\r\n</li>\r\n",2621,2986);
$z[8][4]['pagesize']="5";
$z[9]=Array("pagelist","",3019,3096);
$z[9][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[9][4]['listsize']="3";
$z[10]=Array("include","",3484,3521);
$z[10][4]['filename']="footer.htm";

?>