
void drawSofa(int x, int y, int w, int l);//current
void drawSofa2(int x, int y);//sectional
void drawSofa3(int x, int y, int w, int l, int d);//seccional
void drawSofa4(int x, int y);//2pz with a single
void drawSofa5(int x, int y);//seccional
void drawSofa6(int x, int y);//seccional https://www.coppel.com/hogar/salas/salas-hogar/sala-esquinera-seddi-contemporanea-2-piezas-pm-4707673


void drawDiningTable(int x, int y);
void drawSmallTable(int x, int y);
void drawPlant(int x, int y);
void drawPrinter(int x, int y);
void drawQuark(int x, int y);

void drawDesign1(){

  //drawSofa(5,L-218, 100, 184);
  //drawSofa2(5,L-275);
  //drawSofa3(5,L-270,193,267,89);
  //drawSofa3(5,L-200,180,200,90);
  //drawSofa4(5,L-(212+77)-5);
  //drawSofa5(5,L-250);

  //drawSofa(5,L-162-92-10, 92, 162);  drawSofa(50,L-92, 162, 92);//two medium sofas
  //drawSofa(5,L-193-83+20, 83, 193);  drawSofa(100,L-87, 92, 87);//two medium sofas
  
  //drawSofa(5,L-196-87, 87, 196);  drawSofa(5+87,L-87, 110, 87);//Home Decor bought: 87x196, 87x110  , by 75 tall
  drawSofa(5,L-240-58, 87, 240);  drawSofa(5+87,L-87, 110, 87);//Home Decor bought: 87x240, 87x110

 
  drawDiningTable(50,100);
  //drawSmallTable(47,100+180+78);
  //drawPlant(40,100+180+47);
  drawPrinter(5,5);
  drawQuark(100,15);
}


void drawSofa(int x, int y, int w, int l){

  //Sofa: 100x184
  //int w=100;
  //int l=184;
  TBox sofa(x,y,x+w,y+l);
  sofa.SetFillStyle(1001);
  sofa.SetFillColor(34);
  sofa.DrawClone();

  TBox sofaTop(x,y,x+40,y+l);
  sofaTop.SetFillStyle(3353);
  sofaTop.SetFillColor(kGray);
  sofaTop.DrawClone();
  
}

void drawSofa2(int x, int y){

  //Seccional blanco: 270 x 260 y 1.1 ancho
  int w=260;
  int l=270;
  int d=110;
  TBox b1(x,y,x+d,y+(l-d));
  b1.SetFillStyle(1001);
  b1.SetFillColor(18);
  b1.DrawClone();

  TEllipse ell(x+d,y+(l-d),d,d,90,180);
  ell.SetFillStyle(1001);
  ell.SetFillColor(18);
  ell.DrawClone();

  TBox b2(x+d,y+(l-d),x+w,y+l);
  b2.SetFillStyle(1001);
  b2.SetFillColor(18);
  b2.DrawClone();
  
}



void drawSofa3(int x, int y,int w,int l,int d){
  //Seccional //2.67 x 1.93 x 0.89
  //int w=193;
  //int l=267;
  //int d=89;
  TBox b1(x,y,x+d,y+l);
  b1.SetFillStyle(1001);
  b1.SetFillColor(18);
  b1.DrawClone();
  TBox b2(x+d,y+(l-d),x+w,y+l);
  b2.SetFillStyle(1001);
  b2.SetFillColor(18);
  b2.DrawClone();
  
}


void drawSofa4(int x, int y){
  //2pz: 138x212 and 87x77 
  int w=138;
  int l=212;
  int d=77;
  int offsetY=30;
  TBox b1(x,offsetY+y,x+w,offsetY+y+d);
  b1.SetFillStyle(1001);
  b1.SetFillColor(18);
  b1.DrawClone();
  TBox b2(x,offsetY+y,x+d,offsetY+y+l);
  b2.SetFillStyle(1001);
  b2.SetFillColor(18);
  b2.DrawClone();

  int offsetX=20;
  TBox b3(offsetX+x+d,y+l,offsetX+x+d+87,y+l+d);
  b3.SetFillStyle(1001);
  b3.SetFillColor(18);
  b3.DrawClone();
  
}


void drawSofa5(int x, int y){
  //Seccional 160 x 248 x 80
  int w=160;
  int l=248;
  int d=90;
  TBox b1(x,y,x+d,y+l);
  b1.SetFillStyle(1001);
  b1.SetFillColor(kGray);
  b1.DrawClone();
  TBox b2(x,y+(l-d),x+w,y+l);
  b2.SetFillStyle(1001);
  b2.SetFillColor(kGray);
  b2.DrawClone();
  
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
