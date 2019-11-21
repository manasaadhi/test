import re
fin=open("manifest.xml","r")
fout=open("output.txt","w+")
for line in fin:
	data=re.sub('<','$',line)
	fout.write(data)
fout2=open("output.txt2","w")
#fin.seek(0,0)
fout.seek(0,0)
for line in fout:
	data2=re.sub('>','#',line)
	fout2.write(data2)

fin.close()
fout.close()
fout2.close()

