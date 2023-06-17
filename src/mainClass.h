#include <SFML/Graphics.hpp>

class MainClass{

  private:
    //variables:


    //sfml stuff
    sf::RenderWindow window;
    sf::View mainView;
    sf::Clock clock;

    
    
  public:

    //constructor, like a atSTartUp function
    MainClass();

    //deconstror
    ~MainClass();

    //the function that does all the logic, basically the main function
    void startProgram();

  
    private:
    
    //this updates the program, like a "loop" function
    void update();

    //this draws he program, like update but for drawing
    void draw();

};
