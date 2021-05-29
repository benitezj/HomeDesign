
///Big room dimensions
int L=640;
int W=212+90;

//Reference Frame
int Long=L;
int Width=W+105;

void drawHouse(){

  TH2F Frame("Frame","",1,0,Width,1,0,Long);
  Frame.GetXaxis()->SetRangeUser(0,W);
  Frame.GetYaxis()->SetRangeUser(0,L);
  Frame.GetXaxis()->SetTickSize(0.0);
  Frame.GetYaxis()->SetTickSize(0.0);
  gStyle->SetOptStat(0);
  //Frame.SetTitle("Current Living and Dining Room");
  Frame.DrawClone("hist");

  ////////////////////////
  ////Floor
  ///////////////////////
  TBox floor(0,0,Width,Long);
  floor.SetFillColor(42);
  floor.SetFillStyle(3909);
  
  floor.DrawClone();
  
  //////////////////////
  //Walls
  /////////////////////
  TLine wall;
  wall.SetLineStyle(1);
  wall.SetLineWidth(5);
  wall.SetLineColor(28);
  wall.DrawLine(0,0,0,L);//Long wall
  wall.DrawLine(0,L,212,L);//Jose Room wall
  wall.DrawLine(0,0,16,0);//Front wall 1
  wall.DrawLine(16+124,0,16+124+72,0);//Front wall 2
  wall.DrawLine(W,0,W,20);//Kitchen wall
  
  wall.SetLineColor(15);
  wall.DrawLine(W,20+96,Width,20+96);//Ivonne Room - Kitchen
  wall.DrawLine(W,20+96,W,20+96+340);//Ivonne Room - Living Room
  wall.DrawLine(W,20+96+340,W+15,20+96+340);//Ivonne Door
 
  wall.DrawLine(W+15+90,20+96+340+91,W+15+90-28,20+96+340+91);//Ivonne Bathroom  to Denise Room //28cm
  wall.DrawLine(W+15+90-28,20+96+340+91,W+15+90-28-27*cos(45*3.14/180),20+96+340+91+27*sin(45*3.14/180));//Ivonne Bathroom  to Denise Room //27cm angled
  wall.DrawLine(W,L,W+12*cos(45*3.14/180),L-12*sin(45*3.14/180));//Jose Room to Denise Room //12cm angled
  
  ///////////////////////
  //Doors
  //////////////////////
  TLine door;
  door.SetLineColor(4);
  door.SetLineStyle(2);
  door.SetLineWidth(4);
  door.DrawLine(212,0,212+90,0);//House entrance
  door.DrawLine(212,L,212+90,L);//Jose Room
  door.DrawLine(W+15,20+96+340,W+15+90,20+96+340);//Ivonne Room
  door.DrawLine(W+15+90,20+96+340,W+15+90,20+96+340+91);//Ivonne Bathroom
  door.DrawLine(W+12*cos(45*3.14/180),     L-12*sin(45*3.14/180),
		W+(12+90)*cos(50*3.14/180),L-(12+90)*sin(44*3.14/180));//Denise Room 

  /////////////////////
  //Windows
  /////////////////////
  TLine window;
  window.SetLineColor(16);
  window.SetLineStyle(8);
  window.SetLineWidth(7);
  window.DrawLine(16,0,16+124,0);//Front window
  


}

