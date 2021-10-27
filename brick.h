#ifndef BRICK_H
#define BRICK_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QtCore>
#include <QtGui>

class brick
{
public:

  brick(int a, int b, QString brickImage);

  ~brick();


  QRect getRect();

  void setRect(QRect);

  QImage & getImage();

  QImage image;

  QRect rect;
};

#endif // BRICK_H
