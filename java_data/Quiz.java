import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class Quiz extends JFrame implements ActionListener {
	/**
	 * 
	 */
	private static final long serialVersionUID = 4511551924301248243L;

	//class-level variables;
	JLabel lblQuestion;
	JButton btnA;
	JButton btnB;
	JButton btnC;
	JButton btnNext;
	JButton btnPrev;
	JLabel lblCounter;
	JLabel lblOutput;
	int counter = 0;
	Problem[] probList = new Problem[5];
	
	public static void main(String[] args){
		new Quiz();
	} // end main
	
	public Quiz(){
		super("Quiz Game");
		setupGUI();
		registerListeners();
	    loadProblems();
	    updateScreen();
	} // end constructor
	
	public void setupGUI(){
		//create components
		JPanel pnlQuestion = new JPanel();
		lblQuestion = new JLabel("question");
		btnA = new JButton("Answer A");
		btnB = new JButton("Answer B");
		btnC = new JButton("Answer C");
		
		JPanel pnlControls = new JPanel();
		btnPrev = new JButton("<==");
		lblCounter = new JLabel("0");
		lblOutput = new JLabel("Please click on your answer");
		btnNext = new JButton("==>");
		
		//add components to Panels
		pnlQuestion.setLayout(new GridLayout(0,1));
		pnlQuestion.add(lblQuestion);
		pnlQuestion.add(btnA);
		pnlQuestion.add(btnB);
		pnlQuestion.add(btnC);
		
		pnlControls.setLayout(new FlowLayout());
		pnlControls.add(btnPrev);
		pnlControls.add(lblCounter);
		pnlControls.add(lblOutput);
		pnlControls.add(btnNext);
		
		//set up main layout
		Container mainPanel = this.getContentPane();
		mainPanel.setLayout(new BorderLayout());
		mainPanel.add(pnlQuestion, BorderLayout.CENTER);
		mainPanel.add(pnlControls, BorderLayout.SOUTH);
		
		//general housekeeping
		this.setSize(500, 300);
		this.setVisible(true);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	} // end setupGUI
	
	public void registerListeners(){
		//register all buttons to self
		btnA.addActionListener(this);
		btnB.addActionListener(this);
		btnC.addActionListener(this);
		btnPrev.addActionListener(this);
		btnNext.addActionListener(this);
	} // end registerListeners
	
	public void loadProblems(){
		//load up probList array with data
		
		probList[0] = new Problem(
				  "What is your name?",
				  "Arthur, King of the Britons",
				  "Roger the Shrubber",
				  "Brave Sir Robin",
				  "A"
				);
		probList[1] = new Problem(
				  "What is your quest?",
				  "I seek a shrubbery",
				  "I'm looking for coconuts",
				  "I seek the Holy Grail",
				  "C"
				);
		probList[2] = new Problem(
				  "Where are you headed?",
				  "To chop the mightiest tree with a herring",
				  "To castle St. Aaaaaaaaargh",
				  "To Swamp Castle",
				  "B"
				);
		probList[3] = new Problem(
				  "What is your favorite color?",
				  "Red",
				  "Green",
				  "Yellow. No, blue.",
				  "C"
				);
		probList[4] = new Problem(
				  "What is the airspeed velocity of an unladen swallow?",
				  "42 beats per second",
				  "10 miles per hour",
				  "African or European?",
				  "C"
				);
	} // end loadProblems
	
	public void actionPerformed(ActionEvent e){
		System.out.println(e.getActionCommand());
		//check all button presses and send
		//control to appropriate methods
	   if (e.getSource() == btnA){
			checkAns("A");
		} else if (e.getSource() == btnB){
			checkAns("B");
		} else if (e.getSource() == btnC){
			checkAns("C");
		} else if (e.getSource() == btnPrev){
			prevQuestion();
		} else if (e.getSource() == btnNext){
			nextQuestion();
		} else {
			lblOutput.setText("something went wrong");
		} // end if
		
		
	} // end actionPerformed
	
	public void checkAns(String guess){
		//See if user's guess is correct and
		//provide appropriate output
		String correct = probList[counter].getCorrect();
		if (guess.equals(correct)){
			lblOutput.setText("Who are you so wise in the ways of science?");			
		} else {
			lblOutput.setText("Nii!");
		} // end if
	} // end checkAns
	
	public void prevQuestion(){
		//back up one question if possible
		counter--;
		if (counter < 0){
			counter = 0;
		} // end if
		updateScreen();
	} // end prevQuestion
	
	public void nextQuestion(){
		//go forward one question if possible
		counter++;
		if (counter >= probList.length){
			counter = probList.length - 1;
		} // end if
        updateScreen();
	} // end prevQuestion
	
	public void updateScreen(){
		//updates screen with current problem
		lblCounter.setText(String.valueOf(counter));
		Problem p = probList[counter];
		lblQuestion.setText(p.getQuestion());
		btnA.setText(p.getAnsA());
		btnB.setText(p.getAnsB());
		btnC.setText(p.getAnsC());
		lblOutput.setText("please click on your guess");
	} // end updateScreen
	
} // end class def

class Problem {
	// each field is a private instance variable
	private String question;
	private String ansA;
	private String ansB;
	private String ansC;
	private String correct;
	
	//constructor expects all inputs
	public Problem (String tQuestion, String tAnsA, String tAnsB,
			        String tAnsC, String tCorrect){
		//copy parameters to instance variables
		question = tQuestion;
		ansA = tAnsA;
		ansB = tAnsB;
		ansC = tAnsC;
		correct = tCorrect;
	} // end problem constructor

	//all values are read-only with getters
	String getQuestion(){
		return question;
	} // end getQuestion
	
	String getAnsA(){
		return ansA;
	} // end getAnsA
	
	String getAnsB(){
		return ansB;
	} // end getAnsB
	
	String getAnsC(){
		return ansC;
	} // end getAnsC
	
	String getCorrect(){
		return correct;
	} // end getCorrect
	
} // end Problem class def