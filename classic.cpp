#include "classic.h"
#include "ui_classic.h"

Classic::Classic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Classic)
{
    ui->setupUi(this);
}

Classic::~Classic()
{
    delete ui;
}
