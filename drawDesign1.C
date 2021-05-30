
void drawSofa(int x, int y);
void drawDiningTable(int x, int y);
void drawSmallTable(int x, int y);
void drawPlant(int x, int y);
void drawPrinter(int x, int y);
void drawQuark(int x, int y);

void drawDesign1(){

  drawSofa(5,L-218);
  drawDiningTable(50,100);
  drawSmallTable(47,100+180+78);
  drawPlant(40,100+180+47);
  drawPrinter(5,5);
  drawQuark(100,15);
}


void drawSofa(int x, int y){

  //Sofa: 100x184
  int w=100;
  int l=184;
  TBox sofa(x,y,x+w,y+l);
  sofa.SetFillStyle(1001);
  sofa.SetFillColor(34);
  sofa.DrawClone();

  TBox sofaTop(x,y,x+40,y+l);
  sofaTop.SetFillStyle(3353);
  sofaTop.SetFillColor(kGray);
  sofaTop.DrawClone();
  
}

void drawDiningTable(int x, int y){
  int tabW=106;
  int tabL=180;

  int chW=40;
  int chL=50;
  int fill=1000;
  int chColor=24;
  int x_pos=x+tabW/2-chW/2;//bottom chair
  int y_pos=y-chL/2;
  TBox chair1(x_pos,y_pos,x_pos+chW,y_pos+chL);
  chair1.SetFillStyle(fill);
  chair1.SetFillColor(chColor);
  chair1.DrawClone();

  x_pos=x+tabW/2-chW/2;//top chair
  y_pos=y+tabL-chL/2;
  TBox chair2(x_pos,y_pos,x_pos+chW,y_pos+chL);
  chair2.SetFillStyle(fill);
  chair2.SetFillColor(chColor);
  chair2.DrawClone();

  x_pos=x-chL/2;//left chair 1
  y_pos=y+tabL/2-chW-5;
  TBox chair3(x_pos,y_pos,x_pos+chL,y_pos+chW);
  chair3.SetFillStyle(fill);
  chair3.SetFillColor(chColor);
  chair3.DrawClone();

  x_pos=x-chL/2;//left chair 2
  y_pos=y+tabL/2+5;
  TBox chair4(x_pos,y_pos,x_pos+chL,y_pos+chW);
  chair4.SetFillStyle(fill);
  chair4.SetFillColor(chColor);
  chair4.DrawClone();

  x_pos=x+tabW-chL/2;//right chair 1
  y_pos=y+tabL/2-chW-5;
  TBox chair5(x_pos,y_pos,x_pos+chL,y_pos+chW);
  chair5.SetFillStyle(fill);
  chair5.SetFillColor(chColor);
  chair5.DrawClone();

  x_pos=x+tabW-chL/2;//right chair 2
  y_pos=y+tabL/2+5;
  TBox chair6(x_pos,y_pos,x_pos+chL,y_pos+chW);
  chair6.SetFillStyle(fill);
  chair6.SetFillColor(chColor);
  chair6.DrawClone();


  
  ///Dining table: table is 106x180 , chair is 40x50,  rectangle part of table is tabW x 90
  int tabColor=28;
  int rx=tabW/2;
  int ry=(tabL-90)/2;
  TEllipse ellipse1(x+tabW/2,y+ry,rx,ry);//bottom half circle
  ellipse1.SetFillStyle(1000);
  ellipse1.SetFillColor(tabColor);
  ellipse1.DrawClone();

  TEllipse ellipse2(x+tabW/2,y+ry+90,rx,ry);//top half circle
  ellipse2.SetFillStyle(1000);
  ellipse2.SetFillColor(tabColor);
  ellipse2.DrawClone();
  
  TBox table(x,y+ry,x+tabW,y+ry+90);//square middle section
  table.SetFillStyle(1000);
  table.SetFillColor(tabColor);
  table.DrawClone();

}

void drawSmallTable(int x, int y){
  ///Small white table 120x30
  TBox table(x,y,x+120,y+30);
  table.SetFillStyle(1000);
  table.SetFillColor(17);
  table.DrawClone();

}


void drawPlant(int x, int y){
  ///maceta 40 diameter, 40 from wall , 47 from table
  TEllipse ellipse(x,y,20);
  ellipse.SetFillStyle(1000);
  ellipse.SetFillColor(32);
  ellipse.DrawClone();

}

void drawPrinter(int x, int y){
  ///Small white table 120x30
  TBox box(x,y,x+42,y+40);
  box.SetFillStyle(1000);
  box.SetFillColor(13);
  box.DrawClone();

}

void drawQuark(int x, int y){
  ///vaccum 30 diameter
  TEllipse ellipse(x,y,y-3);//set radius to be y-coordinate since it is next to wall
  ellipse.SetFillStyle(1000);
  ellipse.SetFillColor(1);
  ellipse.DrawClone();

}
