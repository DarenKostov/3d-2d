#include "mainClass.h"


MainClass::MainClass(){
  window.create(sf::VideoMode(123, 123), "WXYZ");
  mainView=sf::View(sf::FloatRect(0, 0, 123, 123));
  mainView.setViewport(sf::FloatRect(0, 0, 1, 1));
  window.setView(mainView);


  
}
MainClass::~MainClass(){
}



void MainClass::startProgram(){

    
  while(window.isOpen()){
    update();
    
    //drawing 66-15fps 33-30fps 16-60fps 11-90fps 8-120fps 4-240fps 
    if(clock.getElapsedTime().asMilliseconds()>66){
      clock.restart();
      draw();
    }


  }


}


