#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "./qmlWidgets/ToolSelectionBar.h"
#include "./qmlWidgets/ToolSelector.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void toggleSideBar();

private:
    Ui::MainWindow *ui;
    ToolSelectionBar *m_selectionBar;
    ToolSelector *m_selector;
};

#endif // MAINWINDOW_H
