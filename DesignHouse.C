
#include "drawHouse.C"
#include "drawDesign1.C"

//#include "drawMasterBedroom1.C"
#include "drawMasterBedroom2.C"

void DesignHouse(){

  TCanvas Canvas("Canvas","",Width,Long);

  drawHouse();
  drawDesign1();
  drawMasterBedroom2();
  
  Canvas.Print("DesignHouse.png");

}


