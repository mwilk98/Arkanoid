#include <iostream>
#include "brick.h"


brick::brick(int x, int y, QString brickImage) {

  image.load(brickImage);
  rect = image.rect();
  rect.translate(x, y);
}

brick::~brick() {

  std::cout << ("brick deleted") << std::endl;
}

QRect brick::getRect() {

   return rect;
}

void brick::setRect(QRect rct) {

  rect = rct;
}
QImage & brick::getImage() {

  return image;
}

