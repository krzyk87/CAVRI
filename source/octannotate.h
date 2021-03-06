#ifndef OCTANNOTATE_H
#define OCTANNOTATE_H

#include <QMainWindow>
#include <QDir>
#include <QLabel>
#include <QScrollArea>
#include <QScrollBar>
#include <QListWidgetItem>
#include <QPen>
#include "patientdata.h"
#include "qcustomplot.h"
#include <QtSql>
#include "dbmanager.h"
#include "settingsdialog.h"

namespace Ui {
class OCTAnnotate;
}

class OCTAnnotate : public QMainWindow
{
    Q_OBJECT

public:
    explicit OCTAnnotate(QWidget *parent = 0);
    ~OCTAnnotate();

private slots:
    void on_actionClose_triggered();
    void on_actionInfo_triggered();

// Data
    void on_tabWidget_currentChanged();
    void on_nextImageButton_clicked();
    void on_prevImageButton_clicked();
    void on_nextNormalImageButton_clicked();
    void on_prevNormalImageButton_clicked();
    void on_currImageNumberLEdit_returnPressed();
    void on_currNormalImageNumberLEdit_returnPressed();
    void on_currImageNumberLayersLEdit_returnPressed();
    void on_contrastSlider_valueChanged(int value);
    void on_brightnessSlider_valueChanged(int value);
    void on_contrastResetButton_clicked();
    void on_brightnessResetButton_clicked();

    void on_actionSaveGeneralExam_triggered();
    void on_actionSaveOCTExam_triggered();

    //void on_actionAddPatientNew_triggered();
    //void on_actionLoadPatientGeneral_triggered();
    void on_actionLoadOCTSequence_triggered(QString scanFolderPath = "");
    void on_actionLoadOCTFile_triggered(QString scanFilePath = "");
    void on_actionReadManualAnnotations_triggered();

// General exam
    void on_visOPLEdit_textEdited();
    void on_visOLLEdit_textEdited();
    void on_snOPLEdit_textEdited();
    void on_snOLLEdit_textEdited();

    void on_mcVOPLEdit_textChanged();
    void on_mcHOPLEdit_textChanged();
    void on_mcVOLLEdit_textChanged();
    void on_mcHOLLEdit_textChanged();

// OCT exam
    void on_allLayersCBox_stateChanged(int state);
    void on_pcvLayerCBox_stateChanged(int state);
    void on_ermLayerCBox_stateChanged(int state);
    void on_ilmLayerCBox_stateChanged(int state);
    void on_gclLayerCBox_stateChanged(int state);
    void on_iplLayerCBox_stateChanged(int state);
    void on_inlLayerCBox_stateChanged(int state);
    void on_oplLayerCBox_stateChanged(int state);
    void on_onlLayerCBox_stateChanged(int state);
    void on_elmLayerCBox_stateChanged(int state);
    void on_mezLayerCBox_stateChanged(int state);
    void on_iosLayerCBox_stateChanged(int state);
    void on_rpeLayerCBox_stateChanged(int state);
    void on_chrLayerCBox_stateChanged(int state);
    void on_pcvLayerRButton_clicked();
    void on_ermLayerRButton_clicked();
    void on_ilmLayerRButton_clicked();
    void on_gclLayerRButton_clicked();
    void on_iplLayerRButton_clicked();
    void on_inlLayerRButton_clicked();
    void on_oplLayerRButton_clicked();
    void on_onlLayerRButton_clicked();
    void on_elmLayerRButton_clicked();
    void on_mezLayerRButton_clicked();
    void on_iosLayerRButton_clicked();
    void on_rpeLayerRButton_clicked();
    void on_chrLayerRButton_clicked();

    void on_zoomInButton_clicked();
    void on_zoomOutButton_clicked();
    void on_actionImageFlattening_toggled(bool state);
    void on_actionEditAnnotations_toggled(bool state);

    void on_actionChangeLayerColor_triggered();
    void on_actionSetScanCenter_toggled(bool checked);
    void on_actionShowCenterOnBscan_toggled(bool checked);

// Virtual map
    void on_computeVirtualMapButton_clicked();
    void on_nextImageLayersButton_clicked();
    void on_prevImageLayersButton_clicked();
    void on_layer1CBox_currentIndexChanged(int index);
    void on_layer2CBox_currentIndexChanged(int index);
    void on_contactThresholdCBox_currentIndexChanged(int index);
    void on_actionShowETDRSGrid_toggled(bool checked);

// Auto annotations
    void on_actionReadAutoSegmentation_triggered(QString pathAutoSegment = "");
    void on_actionCloseAutoSegmentation_triggered();
    void on_actionSaveAutoAnnotationsAs_triggered();
    void on_actionConvertAutoAnnotations_triggered();
    void on_actionFillFromILM_triggered();
    void on_actionFillStraight_triggered();
    void on_actionSetAutoSegmentationAsManual_triggered();
    void on_actionSettings_triggered();
    void on_actionComputeErrorAllScans_triggered();
    void on_actionComputeStatistics_triggered();

    void on_layerErrorCBox_currentIndexChanged(int index);
    void on_plotLayersButton_clicked();

// Database
    void on_addPatientDBButton_clicked();
    void on_editPatientDBButton_clicked();
    void on_deletePatientDBButton_clicked();

    void on_searchForScansButton_clicked();
    void on_addScanFolderButton_clicked(QString folderPath = "");
    void on_addScanFileButton_clicked(QString filePath = "");
    void addScanToDB(QString octPath);
    void createPreview(QString scanName, int scanWidth, int scanHeight, int scansNumber, int scansNumberAll, bool isBinary);

    void on_searchPatientDBButton_clicked();
    void on_showAllScansRButton_toggled();
    void on_scanListGroupCBox_currentIndexChanged(int index);

    void on_patientsListTableView_clicked(const QModelIndex &currentIndex);
    void on_scansListTableView_doubleClicked(const QModelIndex &currentIndex);
    void on_scansListTableView_clicked(const QModelIndex &index);

    void on_batchProcessingButton_clicked();


public slots:
    void on_errorOccured(QString);
    void on_processingData(double, QString msg = "");

    void on_averageErrorCalculated(double);
    void on_mseErrorCalculated(double);

    void on_readingDataFinished(QString data);
    void on_savingDataFinished(QString data);

protected:
    bool eventFilter(QObject *target, QEvent *event);
    void paintEvent(QPaintEvent * /*pEvent*/);
    void closeEvent(QCloseEvent * cEvent);
    void keyPressEvent(QKeyEvent *keyEvent);
    void keyReleaseEvent(QKeyEvent *keyEvent);

private:
    Ui::OCTAnnotate *ui;
    void loadConfigurations(SettingsDialog *sDialog);
    void initializeModelPatients();
    void initializeModelScans();

// Data
    bool readPatientData(QDir *dir);
    void readGeneralExamData();
    void readOctExamData();
    void readFileManualSegmentation(QFile *dataFile);
    void setScanCenter();

// Read Xml Auto Annotations
    QList<QList<int> > convertSurfaceLines(QXmlStreamReader& xml, QList<QList<int> > lineMap);

// display OCT exam
    void loadImage(int imageNumber);
    void loadNormalImage(int normalImageNumber);
    void adjustScrollBar(QScrollBar *scrollBar, double factor);
    void rescaleImage();
    void changeImageRange(int dir);

// paint on OCT exam
    void displayAnnotations(QList<int> flatDiff);
    void displayNormalAnnotations(QList<int> flatDiffNormal);
    void drawLayer(QPoint endPoint, QPoint prevPoint=QPoint(-1,-1));
    void drawLayerNormal(QPoint endPoint, QPoint prevPoint=QPoint(-1,-1));
    void eraseLayer(QPoint endPoint);
    void eraseLayerNormal(QPoint endPoint);
    void saveLayer(QPoint endPoint, QString action, QPoint prevPoint=QPoint(-1,-1));
    void saveLayerNormal(QPoint endPoint, QString action, QPoint prevPoint=QPoint(-1,-1));

// draw Virtual map
    void setupVirtualMapPlot(QCustomPlot *customPlot);
    void setupVirtualMapContourPlot();
    void setupImageLayersPlot();
    void setupBScanPlots();
    void setupCircProfilePlot();
    void setupVolumeGridPlot();
    void resetImageLayersLabels();
    void displayVirtualMap(QCustomPlot *customPlot, bool isAuto = false);
    void displayVirtualMapContours();
    void displayImageLayersPlot(int bscanNumber);
    void displayCircProfile();
    void displayVolumes();

    void saveErrorToFile();
    QColor getLayerColor(Layers layer);
    QList<Layers> getLayersToDisplay();
    bool isLayerActive(Layers layer);

    void delay( int secondsToWait );

    bool quit;
    QString databasePath;
    QString scanName;
    QDir octBaseDir;
    QDir octDir;
    QFile octFile;
    QDir examDir;
    QDir manualDir;
    QDir autoDir;
    QString errorFilePath;
    static const QString settingsFilePath;

    DbManager *patientsDB;
    QSqlRelationalTableModel *modelPatients;
    QSqlRelationalTableModel *modelScans;

    int currentImageNumber;
    int currentNormalImageNumber;
    int currentImageLayersNumber;
    bool generalDataModified;
    bool octDataModified;
    PatientData patientData;
    bool settingScanCenter;
    bool showETDRSGrid;
    bool showCenterOnBscan;
    bool showBscanOnErrorPlot;
    bool blockPCV;
    bool flattenImage;
    bool editAnnotations;
    QString dataSaveStructure;

    QLabel *bscanLabel;
    QLabel *bscan2Label;
    QScrollArea *scrollArea;
    QScrollArea *scrollArea2;
    QSize orgImageSize;
    int scaleFactor;
    QList<double> scales;
    QCPRange bscanRange;
    float contrast;
    int brightness;

    int myPenWidth;
    QColor myPenColor;
    QPoint lastPoint;
    QPoint lastPointN;
    QPoint prevPoint;
    QPoint prevPointN;
    bool isControlPressed;
    bool drawing;
    bool erasing;
    bool eraseAnnotations;
    bool fundusAnnotate;
    QColor pcvColor;
    QColor ermColor;
    QColor ilmColor;
    QColor gclColor;
    QColor iplColor;
    QColor inlColor;
    QColor oplColor;
    QColor onlColor;
    QColor elmColor;
    QColor mezColor;
    QColor iosColor;
    QColor rpeColor;
    QColor chrColor;
    QPalette myPalette;
    Layers selectedLayer;
    Layers vMapLayer1;
    Layers vMapLayer2;
    Layers selectedErrorLayer;

    QList<double> thresholds;
    double contactThreshold;

    QString appVersion;
    QProgressBar *progressBar;
};

#endif // OCTANNOTATE_H
