import java.util.Scanner;
import java.awt.*;
import java.awt.event.*;
class tictactoe extends Frame implements ActionListener{
Frame f=new Frame("Welcome To Tic-Tac-Toe Game");
Scanner sc=new Scanner(System.in);
Button b[]=new Button[10],bt=new Button();
Label l=new Label(),l1=new Label(),l2=new Label(),l3=new Label(),l4=new Label();
tic ttt=new tic();
TextField t=new TextField(),t1=new TextField();
String name1,name2;
int c=1,count=0,a[]={0,1,2,3,4,5,6,7,8,9},flag=0;
int s[]=new int[10];
int store[]=new int[100];
tictactoe(){
l2.setText(" Welcome To Tic-Tac-Toe Game");
l2.setBounds(400,100,750,100);
l2.setFont(new Font("",Font.PLAIN,50));
l2.setBackground(Color.orange);
l2.setForeground(Color.blue);
l3.setBounds(500,200,600,100);
l3.setText("Enter the name of Player1");
l3.setFont(new Font("",Font.PLAIN,50));
l4.setBounds(500,350,600,100);
l4.setText("Enter the name of Player2");
l4.setFont(new Font("",Font.PLAIN,50));
t.setBounds(550,300,500,50);
t.setFont(new Font("",Font.PLAIN,40));
t1.setBounds(550,450,500,50);
t1.setFont(new Font("",Font.PLAIN,40));
bt.setBounds(740,550,100,100);
bt.setLabel("PLAY");
bt.setFont(new Font("",Font.PLAIN,20));
bt.setBackground(Color.green);


f.add(l2);
f.add(l3);
f.add(t);
f.add(l4);
f.add(t1);
f.add(bt);
f.setBackground(Color.cyan);
f.setSize(1920,1080);
f.setLayout(null);
f.setVisible(true);
f.addWindowListener(new WindowAdapter(){
public void windowClosing(WindowEvent e){
f.dispose();
}
});

for(int i=1;i b[i]=new Button();
b[i].addActionListener(this);
}
for(int y=100;y for(int x=500;x b[c].setBounds(x,y,100,100);
add(b[c++]);
}
l.setBounds(100,100,100,20);
l.setText("It's "+name1+"'s turn...");
l.setBackground(Color.green);
add(l);
add(l1);
addWindowListener(new WindowAdapter(){
public void windowClosing(WindowEvent e){
dispose();
}
});
t.addActionListener(this);
t1.addActionListener(this);
bt.addActionListener(this);
}
public void actionPerformed(ActionEvent e){
if(e.getSource()==t){
name1=t.getText();
flag++;
}
if(e.getSource()==t1){
name2=t1.getText();
flag++;
}
if(e.getSource()==bt&&flag>=2){
setBackground(Color.cyan);
setSize(1920,1080);
setLayout(null);
setVisible(true);
}

for(int i=1;i if(e.getSource()==b[i]){ 
if(count%2==0){
if(!ttt.check(store,count, i)){
l.setBounds(1200,100,100,20);
l.setText("It's "+name2+"'s turn...");
l.setBackground(Color.red);
add(l);
b[i].setBackground(Color.green);
b[i].setLabel("X");
store[count]=i;
a[i]=111;
if(ttt.condition(a)){
l.setBounds(700,50,150,20);
l.setBackground(Color.green);
l.setText(name1+" Won the Game");
l1.setBounds(700,650,150,20);
l1.setBackground(Color.orange);
l1.setText(name2+" Loss the Game");
}
count++;
}
}
else{
if(!ttt.check(store,count, i)){
l.setBounds(100,100,100,20);
l.setText("It's "+name1+"'s turn...");
l.setBackground(Color.green);
add(l);
b[i].setBackground(Color.red);
b[i].setLabel("O");
store[count]=i;
a[i]=222;
if(ttt.condition(a)){
l.setBounds(700,50,150,20);
l.setBackground(Color.red);
l.setText(name2+" Won the Game");
l1.setBounds(700,650,150,20);
l1.setBackground(Color.orange);
l1.setText(name1+" Loss the Game");
}
count++;
}
}
}
}
}
public static void main(String[] args) {
new tictactoe();
}
}
class tic{
boolean condition(int a[]){
int i=0,flag=0;
for(i=1;i if(a[i]==a[i+1]&&a[i]==a[i+2])
flag=1;
for(i=1;i if(a[i]==a[i+3]&&a[i]==a[i+6])
flag=1;
if(a[1]==a[5]&&a[1]==a[9])
flag=1;
if(a[3]==a[5]&&a[3]==a[7])
flag=1;
if(flag==1)
return true;
else
return false;
}
boolean check(int a[],int count,int n){
for(int i=0;i if(a[i]==n)
return true;
return false;
}
}