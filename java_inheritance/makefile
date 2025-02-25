GlitterCritter.class:	GlitterCritter.java Critter.class
	javac -g GlitterCritter.java

Critter.class: Critter.java
	javac -g Critter.java

clean:
	rm *.class

run: GlitterCritter.class
	java GlitterCritter

runCritter: Critter.class
	java Critter

debug: GlitterCritter.class
	jdb GlitterCritter

