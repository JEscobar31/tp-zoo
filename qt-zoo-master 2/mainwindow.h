#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_updateZooName_clicked();

    void on_lineEdit_zooName_returnPressed();

    void on_btn_validateZooName_clicked();

    void on_btn_earn_clicked();

    void on_btn_spend_clicked();

private:
    Ui::MainWindow *ui;
    void setEditMode(bool editMode);


    //A faire pour la rentrée
    void updateDisplay();
    void updateMessagesDisplay();
    void updateBudgetDisplay();  //OK
};
#endif // MAINWINDOW_H
