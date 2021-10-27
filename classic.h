#ifndef CLASSIC_H
#define CLASSIC_H


#include <QWidget>
#include "brick.h"
#include <list>

namespace Ui {
class Classic;
}

class Classic : public QWidget
{
    Q_OBJECT

public:
    explicit Classic(QWidget *parent = nullptr);
    ~Classic();

    void paintEvent(QPaintEvent *);

    void drawObjects(QPainter *);

    static const int N_OF_BRICKS = 10;

    std::list<brick> bricks;


private:
    Ui::Classic *ui;
};

#endif // CLASSIC_H
