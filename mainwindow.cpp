#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "SectionModel.h"
#include "SectionedListView.h"

//SectionModel model;

#include "TreeModel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


//    model.addEntry("A", "Ava");
//    model.addEntry("A", "Amelia");
//    model.addEntry("A", "Alexander");
//    model.addEntry("A", "Aiden");
//    model.addEntry("A", "Avery");
//    model.addEntry("A", "Abigail");
//    model.addEntry("A", "Anthony");

//    model.addEntry("B", "Brooke");
//    model.addEntry("B", "Bobby");
//    model.addEntry("B", "Bella");
//    model.addEntry("B", "Ben");
//    model.addEntry("B", "Bethany");
//    model.addEntry("B", "Blake");
//    model.addEntry("B", "Beatrice");
//    model.addEntry("B", "Baby  ");


//    model.addEntry("E", "Elijah	");
//    model.addEntry("E", "Ethan");
//    model.addEntry("E", "Ezra	");
//    model.addEntry("E", "Elias");
//    model.addEntry("E", "Eli	");
//    model.addEntry("E", "Ezekiel");
//    model.addEntry("E", "Easton	");
//    model.addEntry("E", "Everett");
//    model.addEntry("E", "Evan");


//    model.dump();

    const QString data = R"V0G0N(
Getting Started				How to familiarize yourself with Qt Designer
    Launching Designer			Running the Qt Designer application
    The User Interface			How to interact with Qt Designer

Designing a Component			Creating a GUI for your application
    Creating a Dialog			How to create a dialog
    Composing the Dialog		Putting widgets into the dialog example
    Creating a Layout			Arranging widgets on a form
    Signal and Slot Connections		Making widget communicate with each other

Using a Component in Your Application	Generating code from forms
    The Direct Approach			Using a form without any adjustments
    The Single Inheritance Approach	Subclassing a form's base class
    The Multiple Inheritance Approach	Subclassing the form itself
    Automatic Connections		Connecting widgets using a naming scheme
        A Dialog Without Auto-Connect	How to connect widgets without a naming scheme
        A Dialog With Auto-Connect	Using automatic connections

Form Editing Mode			How to edit a form in Qt Designer
    Managing Forms			Loading and saving forms
    Editing a Form			Basic editing techniques
    The Property Editor			Changing widget properties
    The Object Inspector		Examining the hierarchy of objects on a form
    Layouts				Objects that arrange widgets on a form
        Applying and Breaking Layouts	Managing widgets in layouts
        Horizontal and Vertical Layouts	Standard row and column layouts
        The Grid Layout			Arranging widgets in a matrix
    Previewing Forms			Checking that the design works

Using Containers			How to group widgets together
    General Features			Common container features
    Frames				QFrame
    Group Boxes				QGroupBox
    Stacked Widgets			QStackedWidget
    Tab Widgets				QTabWidget
    Toolbox Widgets			QToolBox

Connection Editing Mode			Connecting widgets together with signals and slots
    Connecting Objects			Making connections in Qt Designer
    Editing Connections			Changing existing connections
)V0G0N";

    TreeModel *model = new TreeModel(data.trimmed());
    this->ui->treeView->setModel(model);


}

MainWindow::~MainWindow()
{
    delete ui;
}

