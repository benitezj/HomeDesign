
#include "drawHouse.C"
#include "drawDesign1.C"

void DesignHouse(){

  TCanvas Canvas("Canvas","",Width,Long);

  drawHouse();
  drawDesign1();
  
  Canvas.Print("DesignHouse.png");

}


