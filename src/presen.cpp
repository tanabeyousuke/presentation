#include "include.h"

presen::presen(sf::RenderWindow *w)
{
  push = false;
  slidenum = 1;
  counter = 0;
  mincho.loadFromFile("fonts/ipamp.ttf");
  gothic.loadFromFile("fonts/ipagp.ttf");

  taizoukai.loadFromFile("photo/taizoukai.png");
  tizu.loadFromFile("photo/Image.png");
  iriguti.loadFromFile("photo/Image2.png");
  emacs.loadFromFile("photo/Image3.png");
  motherboard.loadFromFile("photo/Image4.png");
  wro.loadFromFile("photo/wro.png");
  sougou.loadFromFile("photo/sougou.png");
  zenkoku.loadFromFile("photo/zenkoku.png");
  car.loadFromFile("photo/car.png");
  game.loadFromFile("photo/game.png");

  window = w;
}

void presen::process()
{
  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
    {
      if(push == false)
	{
	  slidenum = slidenum + 1;
	  counter = 0;
	  push = true;
	}
    }
  else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Backspace))
    {
      if(push == false)
	{
	  slidenum = slidenum - 1;
	  counter = 0;
	  push = true;
	}
    }
  else
    {
      push = false;
    }
  
  if(slidenum > 6)
    return;
  
  if(slidenum == 1)
    slide1(counter);
  else if(slidenum == 2)
    slide2(counter);
  else if(slidenum == 3)
    slide3(counter);
  else if(slidenum == 4)
    slide4(counter);
  else if(slidenum == 5)
    slide5(counter);
  else if(slidenum == 6)
    slide6(counter);
  counter = counter + 1;
}

void presen::slide1(unsigned int count)
{
  if(count == 0)
    {
      std::cout << "slide1\n";
    }

  sf::Sprite sp;  
  window->clear(sf::Color::Black);
  sp.setTexture(taizoukai);
  sp.setScale(sf::Vector2f(0.2f, 0.2f));
  sp.setPosition(sf::Vector2f(350, 0));
  sp.setColor(sf::Color(255,255,255,75));
  window->draw(sp);

  sf::Text te;
  te.setFont(mincho);
  te.setString(L"コンピュータ");
  te.setCharacterSize(100);
  te.setStyle(sf::Text::Italic);
  te.setPosition(sf::Vector2f(300, 50)); 
  te.setFillColor(sf::Color(255,0,0));
  window->draw(te);

  te.setString(L"技術研究部");
  te.setPosition(sf::Vector2f(500, 150));
  window->draw(te);

  te.setFont(gothic);
  te.setString(L"令和7年度部活動紹介");
  te.setCharacterSize(50);
  te.setPosition(sf::Vector2f(400, 400)); 
  te.setFillColor(sf::Color(255,255,255));
  te.setStyle(sf::Text::Regular);
  window->draw(te);
}

void presen::slide2(unsigned int count)
{
  if(count == 0)
    {
      std::cout << "slide2\n";
    }
  
  window->clear(sf::Color::White);

  sf::RectangleShape re(sf::Vector2f(1000, 70));
  re.setPosition(sf::Vector2f(0, 70)); 
  re.setFillColor(sf::Color(0, 64, 64));
  window->draw(re);
  
  sf::Text te;
  te.setFont(gothic);
  te.setString(L"活動時間と場所");
  te.setCharacterSize(50);
  te.setFillColor(sf::Color(0,0,0));
  te.setStyle(sf::Text::Bold);
  window->draw(te);

  te.setString(L"時間：平日の放課後5時まで");
  te.setPosition(sf::Vector2f(100, 150)); 
  te.setStyle(sf::Text::Regular);
  window->draw(te);

  te.setString(L"場所：情報科一階奥＆集団実習室");
  te.setPosition(sf::Vector2f(100, 210));
  window->draw(te);
  
  sf::Sprite sp;
  sp.setTexture(tizu);
  sp.setPosition(sf::Vector2f(100, 290));
  sp.setScale(sf::Vector2f(0.15f, 0.15f));
  window->draw(sp);

  re.setSize(sf::Vector2f(37, 15));
  re.setPosition(sf::Vector2f(225, 590)); 
  re.setFillColor(sf::Color(255, 0, 0, 100));
  window->draw(re);

  re.setSize(sf::Vector2f(40, 40));
  re.setPosition(sf::Vector2f(225, 515)); 
  re.setFillColor(sf::Color(255, 0, 0, 100));
  window->draw(re);

  sp.setTexture(iriguti);
  sp.setPosition(sf::Vector2f(500, 290));
  sp.setScale(sf::Vector2f(0.14f, 0.14f));
  window->draw(sp);
}
 
void presen::slide3(unsigned int count)
{
  if(count == 0)
    {
      std::cout << "slide3\n";
    }
  
  window->clear(sf::Color::White);

  sf::Text te;
  te.setFont(gothic);
  te.setString(L"部員の構成");
  te.setCharacterSize(50);
  te.setFillColor(sf::Color(0,0,0));
  te.setStyle(sf::Text::Bold);
  window->draw(te);
  
  sf::RectangleShape re(sf::Vector2f(1000, 70));
  re.setPosition(sf::Vector2f(0, 70)); 
  re.setFillColor(sf::Color(0, 64, 64));
  window->draw(re);
  
  re.setSize(sf::Vector2f(700, 70));
  re.setPosition(sf::Vector2f(0, 300)); 
  re.setFillColor(sf::Color(0, 0, 0));
  window->draw(re);

  re.setSize(sf::Vector2f(300, 70));
  re.setPosition(sf::Vector2f(0, 450)); 
  re.setFillColor(sf::Color(0, 0, 0));
  window->draw(re);

  te.setFont(gothic);
  te.setString(L"二年生：7人");
  te.setPosition(sf::Vector2f(0, 300)); 
  te.setCharacterSize(50);
  te.setFillColor(sf::Color(255,255,255));
  te.setStyle(sf::Text::Bold);
  window->draw(te);

  te.setFont(gothic);
  te.setString(L"三年生：3人");
  te.setPosition(sf::Vector2f(0, 450)); 
  te.setCharacterSize(50);
  te.setFillColor(sf::Color(255,255,255));
  te.setStyle(sf::Text::Bold);
  window->draw(te);
}

void presen::slide4(unsigned int count)
{
  if(count == 0)
    {
      std::cout << "slide4\n";
    }
  window->clear(sf::Color::White);

  sf::Text te;
  te.setFont(gothic);
  te.setString(L"大会");
  te.setCharacterSize(50);
  te.setFillColor(sf::Color(0,0,0));
  te.setStyle(sf::Text::Bold);
  window->draw(te);
  
  sf::RectangleShape re(sf::Vector2f(1000, 70));
  re.setPosition(sf::Vector2f(0, 70)); 
  re.setFillColor(sf::Color(0, 64, 64));
  window->draw(re);

  sf::Sprite sp;
  sp.setTexture(wro);
  //sp.setScale(sf::Vector2f(0.2f, 0.2f));
  sp.setPosition(sf::Vector2f(50, 200));
  window->draw(sp);

  sp.setTexture(sougou);
  sp.setPosition(sf::Vector2f(600, 200));
  sp.setScale(sf::Vector2f(2, 2));  
  window->draw(sp);

}

void presen::slide5(unsigned int count)
{
  if(count == 0)
    {
      std::cout << "slide5\n";
    }

  window->clear(sf::Color::White);

  sf::Text te;
  te.setFont(gothic);
  te.setString(L"普段の活動");
  te.setCharacterSize(50);
  te.setFillColor(sf::Color(0,0,0));
  te.setStyle(sf::Text::Bold);
  window->draw(te);
  
  sf::RectangleShape re(sf::Vector2f(1000, 70));
  re.setPosition(sf::Vector2f(0, 70)); 
  re.setFillColor(sf::Color(0, 64, 64));
  window->draw(re);

  sf::Sprite sp;
  sp.setTexture(car);
  sp.setScale(sf::Vector2f(0.2f, 0.2f));
  sp.setPosition(sf::Vector2f(50, 200));
  window->draw(sp);

  sp.setTexture(game);
  sp.setScale(sf::Vector2f(0.8f, 0.8f));
  sp.setPosition(sf::Vector2f(600, 0));
  window->draw(sp);
}

void presen::slide6(unsigned int count)
{
  if(count == 0)
    {
      std::cout << "slide6\n";
    }

  window->clear(sf::Color::White);

  sf::Text te;
  te.setFont(gothic);
  te.setString(L"ご清聴ありがとうございました。");
  te.setCharacterSize(50);
  te.setPosition(sf::Vector2f(50, 300));
  te.setFillColor(sf::Color(0,0,0));
  te.setStyle(sf::Text::Bold);
  window->draw(te);

  te.setString(L"使用したツール\n   G++ 12.2.0\n   Emacs 28.2\n   SFML 2.5.1");
  te.setCharacterSize(40);
  te.setPosition(sf::Vector2f(750, 300));
  te.setFillColor(sf::Color(0,0,0));
  te.setStyle(sf::Text::Bold);
  window->draw(te);
}
