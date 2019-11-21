import re

fin=open("manifest.xml","r")
fout=open("output.txt","w")
for line in fin:
	data=re.search("git://codeaurora.org/",line)
#	fout.write(line)
#	for i in line:
	if data:
		break;
print data.group()
#		if (i=="git://codeaurora.org"):
#			print i;
#print data
fin.close()
fout.close()
