
void drawBed(int x, int y);
void drawDesk(int x, int y);

void drawMasterBedroom1(){

  //the bed 166x250
  drawBed(5,L+5);
  
  //the desk
  drawDesk(5,L+250+20);

}

void drawBed(int x, int y){
  int w=166;
  int l=250;
  TBox bed(x,y,x+w,y+l);
  bed.SetFillStyle(1001);
  bed.SetFillColor(28);
  bed.DrawClone();
}


void drawDesk(int x, int y){
  int w=60; 
  int l=120;
  TBox desk(x,y,x+w,y+l);
  desk.SetFillStyle(1001);
  desk.SetFillColor(1);
  desk.DrawClone();

  int w_chair=75;
  int l_chair=66;
  TBox chair(x+w-w_chair/2,y+l/2-l_chair/2,x+w+w_chair/2,y+l/2+l_chair/2);
  chair.SetFillStyle(1001);
  chair.SetFillColor(1);
  chair.DrawClone();
}
