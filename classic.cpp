#include "classic.h"
#include "ui_classic.h"
#include <list>

using namespace std;
Classic::Classic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Classic)
{
    ui->setupUi(this);

    QString brickImage = ":/res/game/wood.png";


    for (int i=0; i<5; i++)
    {
      for (int j=0; j<5; j++)
      {
        bricks.push_back(*new brick(j*65+13, i*32+50,brickImage));
     }
      }

}

Classic::~Classic()
{
    for (unsigned long long i=0; i<bricks.size(); i++) {
      bricks.clear();
    }
    delete ui;
}

void Classic::drawObjects(QPainter *painter)
{
   list<brick>::iterator it = bricks.begin();


  for (unsigned long long i=0; i<bricks.size(); i++)
  {
      it = bricks.begin();
      advance(it,i);
      painter->drawImage(it->getRect(), it->getImage());

  }

}
void Classic::paintEvent(QPaintEvent *e)
{

  Q_UNUSED(e);

  QPainter painter(this);


  drawObjects(&painter);

}
