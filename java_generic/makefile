CritterList.class: CritterList.java NodeGeneric.class
	javac -g CritterList.java

LLString.class: LLString.java NodeGeneric.class
	javac -g LLString.java

LLGeneric.class: LLGeneric.java NodeGeneric.class
	javac -g LLGeneric.java

NodeGeneric.class: NodeGeneric.java
	javac -g NodeGeneric.java

run: CritterList.class
	java CritterList

clean:
	rm *.class

debug: CritterList.class
	jdb CritterList
