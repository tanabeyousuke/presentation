class presen
{
 public:
  presen(sf::RenderWindow *w);
  
  void process();

  void slide1(unsigned int count);
  void slide2(unsigned int count);
  void slide3(unsigned int count);
  void slide4(unsigned int count);
  void slide5(unsigned int count);
  void slide6(unsigned int count);

 private:
  bool push;
  int slidenum;
  unsigned int counter;
  sf::Font nicomozi;
  sf::Font mincho;
  sf::Font gothic;
  sf::RenderWindow *window;
  
  sf::Texture taizoukai;
  sf::Texture tizu;
  sf::Texture iriguti;
  sf::Texture emacs;
  sf::Texture motherboard;
  sf::Texture wro;
  sf::Texture sougou;
  sf::Texture zenkoku;
  sf::Texture car;
  sf::Texture game;
};
