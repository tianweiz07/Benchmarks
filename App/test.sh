#!/bin/bash

counter=1
RANGE=34
while [ "$counter" -ge 0 ]
do
	number=$RANDOM
	let "number %= $RANGE"

	case $number in
		0)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/servlets/servlet/HelloWorldExample
			;;
		1)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/servlets/servlet/RequestInfoExample
			;;
		2)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/servlets/servlet/RequestHeaderExample
			;;
		3)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/servlets/servlet/RequestParamExample
			;;
		4)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/servlets/servlet/CookieExample
			;;
		5)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/servlets/servlet/SessionExample
			;;
		6)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/jsp2/el/basic-arithmetic.jsp
			;;
		7)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/jsp2/el/basic-comparisons.jsp
			;;
		8)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/jsp2/el/composite.jsp
			;;
		10)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/jsp2/simpletag/hello.jsp
			;;
		11)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/jsp2/simpletag/repeat.jsp
			;;
		12)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/jsp2/simpletag/book.jsp
			;;
		13)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/jsp2/tagfiles/hello.jsp
			;;
		14)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/jsp2/tagfiles/panel.jsp
			;;
		15)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/jsp2/jspx/basic.jspx
			;;
		16)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/jsp2/jspx/svgexample.html
			;;
		17)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/jsp2/jspattribute/jspattribute.jsp
			;;
		18)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/jsp2/jspattribute/shuffle.jsp
			;;
		19)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/jsp2/misc/dynamicattrs.jsp
			;;
		20)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/jsp2/misc/config.jsp
			;;
		21)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/num/numguess.jsp
			;;
		22)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/dates/date.jsp
			;;
		23)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/snp/snoop.jsp
			;;
		24)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/error/error.html
			;;
		25)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/sessions/carts.html
			;;
		26)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/checkbox/check.html
			;;
		27)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/colors/colors.html
			;;
		28)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/cal/login.html
			;;
		29)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/include/include.jsp
			;;
		30)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/forward/forward.jsp
			;;
		31)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/plugin/plugin.jsp
			;;
		32)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/jsptoserv/jsptoservlet.jsp
			;;
		33)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/simpletag/foo.jsp
			;;
		34)
			ab -n 1000 -c 10 http://10.4.128.2:8080/examples/jsp/xml/xml.jsp
			;;
		*)
			exit 1
	esac	
done
