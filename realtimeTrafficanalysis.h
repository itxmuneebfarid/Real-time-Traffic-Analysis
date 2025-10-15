#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_realtimeTrafficanalysis.h"

class realtimeTrafficanalysis : public QMainWindow
{
    Q_OBJECT

public:
    realtimeTrafficanalysis(QWidget *parent = nullptr);
    ~realtimeTrafficanalysis();

private:
    Ui::realtimeTrafficanalysisClass ui;
};

