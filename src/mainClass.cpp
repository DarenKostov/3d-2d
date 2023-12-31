/*
Copyright (c) 2023 Daren Kostov

This file is part of 3d-2d

3d-2d is free software: you can redistribute it and/or modify it under the terms
of the GNU General Public License as published by the Free Software Foundation,
either version 3 of the License, or (at your option) any later version.

3d-2d is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with 3d-2d
If not, see <https://www.gnu.org/licenses/>.
*/

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

    performActions();
    
    update();
    
    //drawing 66-15fps 33-30fps 16-60fps 11-90fps 8-120fps 4-240fps 
    if(clock.getElapsedTime().asMilliseconds()>15){
      clock.restart();
      draw();
    }


  }


}


