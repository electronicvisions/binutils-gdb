#source: start.s
#source: pr19539.s
#ld: -pie -T pr19539.t -z notext
#readelf : --dyn-syms --wide
#target: *-*-linux* *-*-gnu* *-*-solaris* arm*-*-uclinuxfdpiceabi
#xfail: cris*-*-* ![check_pie_support] 

Symbol table '\.dynsym' contains [0-9]+ entr(y|ies):
#pass
