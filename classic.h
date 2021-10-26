#ifndef CLASSIC_H
#define CLASSIC_H

#include <QWidget>

namespace Ui {
class Classic;
}

class Classic : public QWidget
{
    Q_OBJECT

public:
    explicit Classic(QWidget *parent = nullptr);
    ~Classic();

private:
    Ui::Classic *ui;
};

#endif // CLASSIC_H
