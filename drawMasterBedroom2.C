
void drawBed_MasterBedroom2(int x, int y);
void drawDesk_MasterBedroom2(int x, int y);

void drawMasterBedroom2(){
  
  drawBed_MasterBedroom2(5,L+200);

  drawDesk_MasterBedroom2(5,L+20);
}


void drawBed_MasterBedroom2(int x, int y){
  int w_bed=250;
  int l_bed=166;
  TBox bed(x,y,x+w_bed,y+l_bed);
  bed.SetFillStyle(1001);
  bed.SetFillColor(28);
  bed.DrawClone();
}


void drawDesk_MasterBedroom2(int x, int y){

  int w=60; 
  int l=120;
  TBox desk(x,y,x+w,y+l);
  desk.SetFillStyle(1001);
  desk.SetFillColor(1);
  desk.DrawClone();

  int w_chair=75;
  int l_chair=50;
  TBox chair(x+w-w_chair/2,y+l/2-l_chair/2,x+w+w_chair/2,y+l/2+l_chair/2);
  chair.SetFillStyle(1001);
  chair.SetFillColor(1);
  chair.DrawClone();
}
