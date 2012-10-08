/*
	for instance
	if (iPhone5) ....
	
	copy from http://www.cocoachina.com/bbs/read.php?tid-116760.html
 */
#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

