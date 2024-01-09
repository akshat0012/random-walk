#include <SFML/Graphics.hpp>
#include <random>

#define windowWidth 1920 
#define windowHeight 1080

int main() {
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Random Walk");
    window.setFramerateLimit(144);                                                       // to limit the framerate otherwise it will run faster when not in focus 
    
    // to get the random number
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> direction(0, 3);

    size_t posX = windowWidth / 2;                                                       // Initial X position
    size_t posY = windowHeight / 2;                                                      // Initial Y position
    size_t distance_to_move = 5;                                                         // Control the distance to move at each step
    
    // Rendering old lines as texture and new lines in main window 
    sf::RenderTexture renderTexture;
    renderTexture.create(windowWidth, windowHeight);
    renderTexture.clear(sf::Color::Transparent);
    

    // Creating line vertex array here
    sf::VertexArray line(sf::Lines, 2);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        

        // Creating the first point of the line and color  
        line[0].position = sf::Vector2f(posX, posY);
        line[0].color = sf::Color(131, 165, 152);

        // Random movement
        int dir = direction(gen);
        if (dir == 0) {
            posX += distance_to_move;                                                   // Move right
        } else if (dir == 1) {
            posX -= distance_to_move;                                                   // Move left
        } else if (dir == 2) {
            posY += distance_to_move;                                                   // Move down
        } else {
            posY -= distance_to_move;                                                   // Move up
        }
    
        // for boundary if is goes out of screen 
        if (posX < 0) posX = 0;
        if (posX >= window.getSize().x) posX = window.getSize().x - 1;
        if (posY < 0) posY = 0;
        if (posY >= window.getSize().y) posY = window.getSize().y - 1;
    

        // Creating the second point of the line and color
        line[1].position = sf::Vector2f(posX, posY);
        line[1].color = sf::Color(131, 165, 152);

        renderTexture.draw(line);
        renderTexture.display();
        sf::Sprite sprite(renderTexture.getTexture());

        window.clear();
        window.draw(sprite);
        window.display();
    }

    return EXIT_SUCCESS; 
}
