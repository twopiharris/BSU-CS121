Race.class: Race.java Horse.class
	javac -g Race.java

Horse.class: Horse.java
	javac -g Horse.java

clean: 
	rm *.class

testHorse: Horse.class
	java Horse

run: Race.class
	java Race

debug: Race.class
	jdb Race
