/********************************************************************************
** Form generated from reading UI file 'octannotate.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCTANNOTATE_H
#define UI_OCTANNOTATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_OCTAnnotate
{
public:
    QAction *actionSaveGeneralExam;
    QAction *actionSaveOCTExam;
    QAction *actionLoadOCTSequence;
    QAction *actionChangeLayerColor;
    QAction *actionSetScanCenter;
    QAction *actionClose;
    QAction *actionSaveAutoAnnotationsAs;
    QAction *actionConvertAutoAnnotations;
    QAction *actionReadManualAnnotations;
    QAction *actionFillFromILM;
    QAction *actionFillStraight;
    QAction *actionReadAutoSegmentation;
    QAction *actionClose_auto_segmentation;
    QAction *actionSetAutoSegmentationAsManual;
    QAction *actionShowETDRSGrid;
    QAction *actionSettings;
    QAction *actionShowCenterOnBscan;
    QAction *actionComputeErrorAllScans;
    QAction *actionComputeStatistics;
    QAction *actionImageFlattening;
    QAction *actionEditAnnotations;
    QAction *actionInfo;
    QAction *actionLoadOCTFile;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_11;
    QTabWidget *tabWidget;
    QWidget *tabDatabase;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_17;
    QVBoxLayout *verticalLayout_25;
    QVBoxLayout *verticalLayout_23;
    QPushButton *addPatientDBButton;
    QPushButton *editPatientDBButton;
    QPushButton *deletePatientDBButton;
    QGroupBox *patienSearchGBox;
    QVBoxLayout *verticalLayout_22;
    QLineEdit *searchLastNameLEdit;
    QLineEdit *searchFirstNameLEdit;
    QComboBox *searchGenderCBox;
    QComboBox *searchPathologyCBox;
    QLineEdit *searchFileNoLEdit;
    QLineEdit *searchNotesLEdit;
    QHBoxLayout *horizontalLayout_15;
    QLineEdit *searchAgeFromLEdit;
    QLineEdit *searchAgeToLEdit;
    QRadioButton *showAllScansRButton;
    QRadioButton *showOnlyDefaultScanRButton;
    QPushButton *searchPatientDBButton;
    QTableView *patientsListTableView;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_7;
    QLineEdit *visOPLEdit;
    QLineEdit *snOPLEdit;
    QLineEdit *visOLLEdit;
    QLabel *label_8;
    QLineEdit *snOLLEdit;
    QLabel *label_35;
    QLineEdit *mcHOPLEdit;
    QLineEdit *mcVOLLEdit;
    QLabel *label_36;
    QLineEdit *mcVOPLEdit;
    QLineEdit *mcHOLLEdit;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_11;
    QLabel *fundusDBLabel;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_27;
    QTableView *scansListTableView;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_47;
    QComboBox *scanListGroupCBox;
    QPushButton *searchForScansButton;
    QPushButton *addScanFolderButton;
    QPushButton *addScanFileButton;
    QPushButton *batchProcessingButton;
    QVBoxLayout *verticalLayout_26;
    QLabel *bscanHLabel;
    QLabel *bscanVLabel;
    QWidget *tabOCTExam;
    QHBoxLayout *horizontalLayout_16;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout_5;
    QLabel *label_2;
    QLabel *imageNumberLabel;
    QGridLayout *gridLayout_5;
    QPushButton *zoomOutButton;
    QPushButton *zoomInButton;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *bScanHCPlot;
    QHBoxLayout *horizontalLayout;
    QPushButton *prevImageButton;
    QSpacerItem *horizontalSpacer;
    QLineEdit *currImageNumberLEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *nextImageButton;
    QVBoxLayout *verticalLayout_3;
    QCustomPlot *bScanVCPlot;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *prevNormalImageButton;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *currNormalImageNumberLEdit;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *nextNormalImageButton;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *editLayerGBox;
    QRadioButton *pcvLayerRButton;
    QRadioButton *ilmLayerRButton;
    QLabel *pcvColorLabel;
    QLabel *ilmColorLabel;
    QRadioButton *inlLayerRButton;
    QRadioButton *oplLayerRButton;
    QRadioButton *onlLayerRButton;
    QRadioButton *elmLayerRButton;
    QLabel *inlColorLabel;
    QLabel *oplColorLabel;
    QLabel *onlColorLabel;
    QLabel *elmColorLabel;
    QCheckBox *pcvLayerCBox;
    QLabel *pcvAnnotCountLabel;
    QCheckBox *ilmLayerCBox;
    QLabel *ilmAnnotCountLabel;
    QCheckBox *inlLayerCBox;
    QLabel *inlAnnotCountLabel;
    QCheckBox *oplLayerCBox;
    QLabel *oplAnnotCountLabel;
    QCheckBox *onlLayerCBox;
    QLabel *onlAnnotCountLabel;
    QCheckBox *elmLayerCBox;
    QLabel *elmAnnotCountLabel;
    QCheckBox *gclLayerCBox;
    QRadioButton *gclLayerRButton;
    QLabel *gclColorLabel;
    QLabel *gclAnnotCountLabel;
    QCheckBox *iplLayerCBox;
    QRadioButton *iplLayerRButton;
    QLabel *iplColorLabel;
    QLabel *iplAnnotCountLabel;
    QCheckBox *mezLayerCBox;
    QRadioButton *mezLayerRButton;
    QLabel *mezAnnotCountLabel;
    QCheckBox *iosLayerCBox;
    QRadioButton *iosLayerRButton;
    QLabel *iosAnnotCountLabel;
    QCheckBox *rpeLayerCBox;
    QRadioButton *rpeLayerRButton;
    QLabel *rpeAnnotCountLabel;
    QCheckBox *chrLayerCBox;
    QRadioButton *chrLayerRButton;
    QLabel *chrAnnotCountLabel;
    QLabel *mezColorLabel;
    QLabel *iosColorLabel;
    QLabel *rpeColorLabel;
    QLabel *chrColorLabel;
    QCheckBox *ermLayerCBox;
    QRadioButton *ermLayerRButton;
    QLabel *ermColorLabel;
    QLabel *ermAnnotCountLabel;
    QCheckBox *allLayersCBox;
    QFormLayout *formLayout_4;
    QPushButton *contrastResetButton;
    QSlider *contrastSlider;
    QPushButton *brightnessResetButton;
    QSlider *brightnessSlider;
    QSpacerItem *verticalSpacer_2;
    QLabel *fundusImageLabel;
    QWidget *tabRetinaAnalysis;
    QHBoxLayout *horizontalLayout_12;
    QCustomPlot *errorVirtualMapCPlot;
    QVBoxLayout *verticalLayout;
    QCustomPlot *layerCPlot;
    QGroupBox *layersToPlotGBox;
    QCheckBox *elmLayerCBox_2;
    QCheckBox *ermLayerCBox_2;
    QCheckBox *iplLayerCBox_2;
    QCheckBox *oplLayerCBox_2;
    QCheckBox *iosLayerCBox_2;
    QCheckBox *inlLayerCBox_2;
    QCheckBox *rpeLayerCBox_2;
    QCheckBox *pcvLayerCBox_2;
    QCheckBox *ilmLayerCBox_2;
    QCheckBox *chrLayerCBox_2;
    QCheckBox *gclLayerCBox_2;
    QCheckBox *onlLayerCBox_2;
    QCheckBox *mezLayerCBox_2;
    QPushButton *plotLayersButton;
    QWidget *tabVirtualMap;
    QHBoxLayout *horizontalLayout_18;
    QVBoxLayout *verticalLayout_8;
    QPushButton *computeVirtualMapButton;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_39;
    QComboBox *layer1CBox;
    QLabel *label_40;
    QComboBox *layer2CBox;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_2;
    QLabel *label_28;
    QLineEdit *retinaDepthLEdit;
    QLabel *label_3;
    QLineEdit *retinaVolumeLEdit;
    QLabel *label_4;
    QLineEdit *preretinalVolumeLEdit;
    QLabel *label_5;
    QLineEdit *foveaPitVolumeLEdit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_43;
    QComboBox *contactThresholdCBox;
    QLabel *label_16;
    QLineEdit *contactAreaCFLEdit;
    QLabel *contactAreaProcCFLabel;
    QLabel *label_29;
    QLineEdit *contactAreaIMLEdit;
    QLabel *contactAreaProcIMLabel;
    QLabel *label_34;
    QLineEdit *contactAreaOMLEdit;
    QLabel *contactAreaProcOMLabel;
    QLabel *label_46;
    QCustomPlot *ETDRSgridCPlot;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_41;
    QCustomPlot *virtualMapImageCPlot;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLabel *virtualMapValueHoverLabel;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_45;
    QCustomPlot *virtualMapContourImageCPlot;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_6;
    QLabel *retinaThicknessMapHoverValueLabel;
    QVBoxLayout *verticalLayout_15;
    QCustomPlot *virtualMapCircProfileCPlot;
    QLabel *label_44;
    QWidget *tabErrorAnalysis;
    QVBoxLayout *verticalLayout_14;
    QFormLayout *formLayout_6;
    QLabel *label_12;
    QLabel *autoSegmentFileLabel;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_13;
    QCustomPlot *imageLayersCPlot;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *prevImageLayersButton;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *currImageNumberLayersLEdit;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *nextImageLayersButton;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *virtualMapErrorStatsGBox;
    QLineEdit *virtualMapErrorDevLEdit_um;
    QLabel *label_17;
    QLineEdit *virtualMapErrorAvgLEdit_um;
    QLineEdit *virtualMapErrorAvgLEdit;
    QLabel *label_21;
    QLineEdit *virtualMapErrorDevLEdit;
    QGroupBox *layersErrorStatsGBox;
    QLineEdit *layerErrorDevLEdit_um;
    QLabel *label_27;
    QComboBox *layerErrorCBox;
    QLineEdit *layerErrorDevLEdit;
    QLineEdit *layerErrorAvgLEdit;
    QLineEdit *layerErrorAvgLEdit_um;
    QLabel *label_25;
    QLabel *label_26;
    QLineEdit *layerErrorProcLEdit;
    QGroupBox *currScanLayerErrorStatsGBox;
    QLineEdit *pcvLineErrorDevLEdit;
    QLineEdit *pcvLineErrorAvgLEdit;
    QLineEdit *ilmLineErrorAvgLEdit_um;
    QLabel *label_30;
    QLineEdit *ilmLineErrorAvgLEdit;
    QLabel *label_31;
    QLineEdit *ilmLineErrorDevLEdit_um;
    QLabel *label_32;
    QLineEdit *ilmLineErrorDevLEdit;
    QLineEdit *pcvLineErrorDevLEdit_um;
    QLabel *label_33;
    QLineEdit *pcvLineErrorAvgLEdit_um;
    QGroupBox *groupBox_3;
    QLineEdit *layerErrorMSEAllLEdit;
    QLineEdit *layerErrorAvgAllLEdit;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_42;
    QCustomPlot *virtualMapAutoImageCPlot;
    QSpacerItem *verticalSpacer_4;
    QMenuBar *menuBar;
    QMenu *menuPatient;
    QMenu *menuAnnotations;
    QMenu *menuProgram;
    QMenu *menuFillLineFrom;
    QMenu *menuCompute;
    QMenu *menuInfo;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *OCTAnnotate)
    {
        if (OCTAnnotate->objectName().isEmpty())
            OCTAnnotate->setObjectName(QStringLiteral("OCTAnnotate"));
        OCTAnnotate->resize(1260, 900);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OCTAnnotate->sizePolicy().hasHeightForWidth());
        OCTAnnotate->setSizePolicy(sizePolicy);
        OCTAnnotate->setMinimumSize(QSize(1260, 900));
        actionSaveGeneralExam = new QAction(OCTAnnotate);
        actionSaveGeneralExam->setObjectName(QStringLiteral("actionSaveGeneralExam"));
        actionSaveOCTExam = new QAction(OCTAnnotate);
        actionSaveOCTExam->setObjectName(QStringLiteral("actionSaveOCTExam"));
        actionSaveOCTExam->setEnabled(true);
        actionLoadOCTSequence = new QAction(OCTAnnotate);
        actionLoadOCTSequence->setObjectName(QStringLiteral("actionLoadOCTSequence"));
        actionChangeLayerColor = new QAction(OCTAnnotate);
        actionChangeLayerColor->setObjectName(QStringLiteral("actionChangeLayerColor"));
        actionSetScanCenter = new QAction(OCTAnnotate);
        actionSetScanCenter->setObjectName(QStringLiteral("actionSetScanCenter"));
        actionSetScanCenter->setCheckable(true);
        actionSetScanCenter->setEnabled(false);
        actionClose = new QAction(OCTAnnotate);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionSaveAutoAnnotationsAs = new QAction(OCTAnnotate);
        actionSaveAutoAnnotationsAs->setObjectName(QStringLiteral("actionSaveAutoAnnotationsAs"));
        actionConvertAutoAnnotations = new QAction(OCTAnnotate);
        actionConvertAutoAnnotations->setObjectName(QStringLiteral("actionConvertAutoAnnotations"));
        actionReadManualAnnotations = new QAction(OCTAnnotate);
        actionReadManualAnnotations->setObjectName(QStringLiteral("actionReadManualAnnotations"));
        actionFillFromILM = new QAction(OCTAnnotate);
        actionFillFromILM->setObjectName(QStringLiteral("actionFillFromILM"));
        actionFillFromILM->setEnabled(false);
        actionFillStraight = new QAction(OCTAnnotate);
        actionFillStraight->setObjectName(QStringLiteral("actionFillStraight"));
        actionFillStraight->setEnabled(false);
        actionReadAutoSegmentation = new QAction(OCTAnnotate);
        actionReadAutoSegmentation->setObjectName(QStringLiteral("actionReadAutoSegmentation"));
        actionClose_auto_segmentation = new QAction(OCTAnnotate);
        actionClose_auto_segmentation->setObjectName(QStringLiteral("actionClose_auto_segmentation"));
        actionSetAutoSegmentationAsManual = new QAction(OCTAnnotate);
        actionSetAutoSegmentationAsManual->setObjectName(QStringLiteral("actionSetAutoSegmentationAsManual"));
        actionShowETDRSGrid = new QAction(OCTAnnotate);
        actionShowETDRSGrid->setObjectName(QStringLiteral("actionShowETDRSGrid"));
        actionShowETDRSGrid->setCheckable(true);
        actionShowETDRSGrid->setChecked(true);
        actionSettings = new QAction(OCTAnnotate);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionShowCenterOnBscan = new QAction(OCTAnnotate);
        actionShowCenterOnBscan->setObjectName(QStringLiteral("actionShowCenterOnBscan"));
        actionShowCenterOnBscan->setCheckable(true);
        actionShowCenterOnBscan->setChecked(true);
        actionComputeErrorAllScans = new QAction(OCTAnnotate);
        actionComputeErrorAllScans->setObjectName(QStringLiteral("actionComputeErrorAllScans"));
        actionComputeStatistics = new QAction(OCTAnnotate);
        actionComputeStatistics->setObjectName(QStringLiteral("actionComputeStatistics"));
        actionImageFlattening = new QAction(OCTAnnotate);
        actionImageFlattening->setObjectName(QStringLiteral("actionImageFlattening"));
        actionImageFlattening->setCheckable(true);
        actionEditAnnotations = new QAction(OCTAnnotate);
        actionEditAnnotations->setObjectName(QStringLiteral("actionEditAnnotations"));
        actionEditAnnotations->setCheckable(true);
        actionInfo = new QAction(OCTAnnotate);
        actionInfo->setObjectName(QStringLiteral("actionInfo"));
        actionLoadOCTFile = new QAction(OCTAnnotate);
        actionLoadOCTFile->setObjectName(QStringLiteral("actionLoadOCTFile"));
        centralWidget = new QWidget(OCTAnnotate);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMaximumSize(QSize(6000, 3000));
        horizontalLayout_11 = new QHBoxLayout(centralWidget);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(1076, 619));
        tabWidget->setFocusPolicy(Qt::NoFocus);
        tabDatabase = new QWidget();
        tabDatabase->setObjectName(QStringLiteral("tabDatabase"));
        verticalLayout_7 = new QVBoxLayout(tabDatabase);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        verticalLayout_23->setSizeConstraint(QLayout::SetFixedSize);
        addPatientDBButton = new QPushButton(tabDatabase);
        addPatientDBButton->setObjectName(QStringLiteral("addPatientDBButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addPatientDBButton->sizePolicy().hasHeightForWidth());
        addPatientDBButton->setSizePolicy(sizePolicy1);
        addPatientDBButton->setMinimumSize(QSize(150, 20));
        addPatientDBButton->setMaximumSize(QSize(201, 21));

        verticalLayout_23->addWidget(addPatientDBButton);

        editPatientDBButton = new QPushButton(tabDatabase);
        editPatientDBButton->setObjectName(QStringLiteral("editPatientDBButton"));
        sizePolicy1.setHeightForWidth(editPatientDBButton->sizePolicy().hasHeightForWidth());
        editPatientDBButton->setSizePolicy(sizePolicy1);
        editPatientDBButton->setMinimumSize(QSize(150, 20));
        editPatientDBButton->setMaximumSize(QSize(201, 21));

        verticalLayout_23->addWidget(editPatientDBButton);

        deletePatientDBButton = new QPushButton(tabDatabase);
        deletePatientDBButton->setObjectName(QStringLiteral("deletePatientDBButton"));
        sizePolicy1.setHeightForWidth(deletePatientDBButton->sizePolicy().hasHeightForWidth());
        deletePatientDBButton->setSizePolicy(sizePolicy1);
        deletePatientDBButton->setMinimumSize(QSize(150, 21));
        deletePatientDBButton->setMaximumSize(QSize(201, 21));

        verticalLayout_23->addWidget(deletePatientDBButton);


        verticalLayout_25->addLayout(verticalLayout_23);

        patienSearchGBox = new QGroupBox(tabDatabase);
        patienSearchGBox->setObjectName(QStringLiteral("patienSearchGBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(patienSearchGBox->sizePolicy().hasHeightForWidth());
        patienSearchGBox->setSizePolicy(sizePolicy2);
        patienSearchGBox->setMinimumSize(QSize(201, 271));
        patienSearchGBox->setMaximumSize(QSize(201, 271));
        verticalLayout_22 = new QVBoxLayout(patienSearchGBox);
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        searchLastNameLEdit = new QLineEdit(patienSearchGBox);
        searchLastNameLEdit->setObjectName(QStringLiteral("searchLastNameLEdit"));

        verticalLayout_22->addWidget(searchLastNameLEdit);

        searchFirstNameLEdit = new QLineEdit(patienSearchGBox);
        searchFirstNameLEdit->setObjectName(QStringLiteral("searchFirstNameLEdit"));

        verticalLayout_22->addWidget(searchFirstNameLEdit);

        searchGenderCBox = new QComboBox(patienSearchGBox);
        searchGenderCBox->setObjectName(QStringLiteral("searchGenderCBox"));

        verticalLayout_22->addWidget(searchGenderCBox);

        searchPathologyCBox = new QComboBox(patienSearchGBox);
        searchPathologyCBox->setObjectName(QStringLiteral("searchPathologyCBox"));

        verticalLayout_22->addWidget(searchPathologyCBox);

        searchFileNoLEdit = new QLineEdit(patienSearchGBox);
        searchFileNoLEdit->setObjectName(QStringLiteral("searchFileNoLEdit"));

        verticalLayout_22->addWidget(searchFileNoLEdit);

        searchNotesLEdit = new QLineEdit(patienSearchGBox);
        searchNotesLEdit->setObjectName(QStringLiteral("searchNotesLEdit"));

        verticalLayout_22->addWidget(searchNotesLEdit);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        searchAgeFromLEdit = new QLineEdit(patienSearchGBox);
        searchAgeFromLEdit->setObjectName(QStringLiteral("searchAgeFromLEdit"));
        searchAgeFromLEdit->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_15->addWidget(searchAgeFromLEdit);

        searchAgeToLEdit = new QLineEdit(patienSearchGBox);
        searchAgeToLEdit->setObjectName(QStringLiteral("searchAgeToLEdit"));
        searchAgeToLEdit->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_15->addWidget(searchAgeToLEdit);


        verticalLayout_22->addLayout(horizontalLayout_15);

        showAllScansRButton = new QRadioButton(patienSearchGBox);
        showAllScansRButton->setObjectName(QStringLiteral("showAllScansRButton"));
        showAllScansRButton->setChecked(true);

        verticalLayout_22->addWidget(showAllScansRButton);

        showOnlyDefaultScanRButton = new QRadioButton(patienSearchGBox);
        showOnlyDefaultScanRButton->setObjectName(QStringLiteral("showOnlyDefaultScanRButton"));
        showOnlyDefaultScanRButton->setChecked(false);

        verticalLayout_22->addWidget(showOnlyDefaultScanRButton);

        searchPatientDBButton = new QPushButton(patienSearchGBox);
        searchPatientDBButton->setObjectName(QStringLiteral("searchPatientDBButton"));
        searchPatientDBButton->setMinimumSize(QSize(0, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        searchPatientDBButton->setFont(font);

        verticalLayout_22->addWidget(searchPatientDBButton);


        verticalLayout_25->addWidget(patienSearchGBox);


        horizontalLayout_17->addLayout(verticalLayout_25);

        patientsListTableView = new QTableView(tabDatabase);
        patientsListTableView->setObjectName(QStringLiteral("patientsListTableView"));
        patientsListTableView->setMinimumSize(QSize(750, 361));
        patientsListTableView->setMaximumSize(QSize(16777215, 400));

        horizontalLayout_17->addWidget(patientsListTableView);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetFixedSize);
        groupBox_5 = new QGroupBox(tabDatabase);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy3);
        groupBox_5->setLayoutDirection(Qt::LeftToRight);
        groupBox_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout_3 = new QGridLayout(groupBox_5);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 20));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_9, 0, 1, 1, 1);

        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(0, 20));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_10, 0, 2, 1, 1);

        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(44, 20));
        label_7->setMaximumSize(QSize(50, 16777215));

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        visOPLEdit = new QLineEdit(groupBox_5);
        visOPLEdit->setObjectName(QStringLiteral("visOPLEdit"));
        visOPLEdit->setMinimumSize(QSize(80, 20));
        visOPLEdit->setMaximumSize(QSize(100, 20));
        visOPLEdit->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(visOPLEdit, 1, 1, 1, 1);

        snOPLEdit = new QLineEdit(groupBox_5);
        snOPLEdit->setObjectName(QStringLiteral("snOPLEdit"));
        snOPLEdit->setMinimumSize(QSize(80, 20));
        snOPLEdit->setMaximumSize(QSize(100, 20));
        snOPLEdit->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(snOPLEdit, 2, 1, 1, 1);

        visOLLEdit = new QLineEdit(groupBox_5);
        visOLLEdit->setObjectName(QStringLiteral("visOLLEdit"));
        visOLLEdit->setMinimumSize(QSize(80, 20));
        visOLLEdit->setMaximumSize(QSize(100, 20));
        visOLLEdit->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(visOLLEdit, 1, 2, 1, 1);

        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(44, 20));
        label_8->setMaximumSize(QSize(50, 16777215));

        gridLayout_3->addWidget(label_8, 2, 0, 1, 1);

        snOLLEdit = new QLineEdit(groupBox_5);
        snOLLEdit->setObjectName(QStringLiteral("snOLLEdit"));
        snOLLEdit->setMinimumSize(QSize(80, 20));
        snOLLEdit->setMaximumSize(QSize(100, 20));
        snOLLEdit->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(snOLLEdit, 2, 2, 1, 1);

        label_35 = new QLabel(groupBox_5);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setMaximumSize(QSize(50, 16777215));

        gridLayout_3->addWidget(label_35, 3, 0, 1, 1);

        mcHOPLEdit = new QLineEdit(groupBox_5);
        mcHOPLEdit->setObjectName(QStringLiteral("mcHOPLEdit"));
        mcHOPLEdit->setMinimumSize(QSize(80, 20));
        mcHOPLEdit->setMaximumSize(QSize(100, 20));
        mcHOPLEdit->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(mcHOPLEdit, 4, 1, 1, 1);

        mcVOLLEdit = new QLineEdit(groupBox_5);
        mcVOLLEdit->setObjectName(QStringLiteral("mcVOLLEdit"));
        mcVOLLEdit->setMinimumSize(QSize(80, 20));
        mcVOLLEdit->setMaximumSize(QSize(100, 20));
        mcVOLLEdit->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(mcVOLLEdit, 3, 2, 1, 1);

        label_36 = new QLabel(groupBox_5);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setMinimumSize(QSize(50, 0));
        label_36->setMaximumSize(QSize(50, 16777215));

        gridLayout_3->addWidget(label_36, 4, 0, 1, 1);

        mcVOPLEdit = new QLineEdit(groupBox_5);
        mcVOPLEdit->setObjectName(QStringLiteral("mcVOPLEdit"));
        mcVOPLEdit->setMinimumSize(QSize(80, 20));
        mcVOPLEdit->setMaximumSize(QSize(100, 20));
        mcVOPLEdit->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(mcVOPLEdit, 3, 1, 1, 1);

        mcHOLLEdit = new QLineEdit(groupBox_5);
        mcHOLLEdit->setObjectName(QStringLiteral("mcHOLLEdit"));
        mcHOLLEdit->setMinimumSize(QSize(80, 20));
        mcHOLLEdit->setMaximumSize(QSize(100, 20));
        mcHOLLEdit->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(mcHOLLEdit, 4, 2, 1, 1);


        verticalLayout_5->addWidget(groupBox_5);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalSpacer_11 = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_11);

        fundusDBLabel = new QLabel(tabDatabase);
        fundusDBLabel->setObjectName(QStringLiteral("fundusDBLabel"));
        fundusDBLabel->setMinimumSize(QSize(230, 230));
        fundusDBLabel->setMaximumSize(QSize(250, 250));
        fundusDBLabel->setFrameShape(QFrame::Box);
        fundusDBLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(fundusDBLabel);


        verticalLayout_5->addLayout(horizontalLayout_13);


        horizontalLayout_17->addLayout(verticalLayout_5);


        verticalLayout_7->addLayout(horizontalLayout_17);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setSpacing(6);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        scansListTableView = new QTableView(tabDatabase);
        scansListTableView->setObjectName(QStringLiteral("scansListTableView"));
        scansListTableView->setMinimumSize(QSize(790, 0));

        verticalLayout_27->addWidget(scansListTableView);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_47 = new QLabel(tabDatabase);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setMaximumSize(QSize(130, 23));

        horizontalLayout_8->addWidget(label_47);

        scanListGroupCBox = new QComboBox(tabDatabase);
        scanListGroupCBox->setObjectName(QStringLiteral("scanListGroupCBox"));
        scanListGroupCBox->setMaximumSize(QSize(140, 20));

        horizontalLayout_8->addWidget(scanListGroupCBox);

        searchForScansButton = new QPushButton(tabDatabase);
        searchForScansButton->setObjectName(QStringLiteral("searchForScansButton"));

        horizontalLayout_8->addWidget(searchForScansButton);

        addScanFolderButton = new QPushButton(tabDatabase);
        addScanFolderButton->setObjectName(QStringLiteral("addScanFolderButton"));

        horizontalLayout_8->addWidget(addScanFolderButton);

        addScanFileButton = new QPushButton(tabDatabase);
        addScanFileButton->setObjectName(QStringLiteral("addScanFileButton"));

        horizontalLayout_8->addWidget(addScanFileButton);

        batchProcessingButton = new QPushButton(tabDatabase);
        batchProcessingButton->setObjectName(QStringLiteral("batchProcessingButton"));

        horizontalLayout_8->addWidget(batchProcessingButton);


        verticalLayout_27->addLayout(horizontalLayout_8);


        horizontalLayout_14->addLayout(verticalLayout_27);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        bscanHLabel = new QLabel(tabDatabase);
        bscanHLabel->setObjectName(QStringLiteral("bscanHLabel"));
        sizePolicy2.setHeightForWidth(bscanHLabel->sizePolicy().hasHeightForWidth());
        bscanHLabel->setSizePolicy(sizePolicy2);
        bscanHLabel->setMinimumSize(QSize(361, 151));
        bscanHLabel->setFrameShape(QFrame::Box);
        bscanHLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_26->addWidget(bscanHLabel);

        bscanVLabel = new QLabel(tabDatabase);
        bscanVLabel->setObjectName(QStringLiteral("bscanVLabel"));
        sizePolicy2.setHeightForWidth(bscanVLabel->sizePolicy().hasHeightForWidth());
        bscanVLabel->setSizePolicy(sizePolicy2);
        bscanVLabel->setMinimumSize(QSize(361, 151));
        bscanVLabel->setFrameShape(QFrame::Box);
        bscanVLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_26->addWidget(bscanVLabel);


        horizontalLayout_14->addLayout(verticalLayout_26);


        verticalLayout_7->addLayout(horizontalLayout_14);

        tabWidget->addTab(tabDatabase, QString());
        tabOCTExam = new QWidget();
        tabOCTExam->setObjectName(QStringLiteral("tabOCTExam"));
        horizontalLayout_16 = new QHBoxLayout(tabOCTExam);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setSpacing(6);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_2 = new QLabel(tabOCTExam);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(40, 23));
        label_2->setMaximumSize(QSize(40, 23));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_2);

        imageNumberLabel = new QLabel(tabOCTExam);
        imageNumberLabel->setObjectName(QStringLiteral("imageNumberLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(imageNumberLabel->sizePolicy().hasHeightForWidth());
        imageNumberLabel->setSizePolicy(sizePolicy4);
        imageNumberLabel->setMinimumSize(QSize(100, 23));
        imageNumberLabel->setMaximumSize(QSize(16777215, 23));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, imageNumberLabel);


        horizontalLayout_2->addLayout(formLayout_5);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetMaximumSize);
        zoomOutButton = new QPushButton(tabOCTExam);
        zoomOutButton->setObjectName(QStringLiteral("zoomOutButton"));
        zoomOutButton->setEnabled(false);
        zoomOutButton->setMaximumSize(QSize(37, 23));
        zoomOutButton->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(zoomOutButton, 0, 1, 1, 1);

        zoomInButton = new QPushButton(tabOCTExam);
        zoomInButton->setObjectName(QStringLiteral("zoomInButton"));
        zoomInButton->setEnabled(false);
        zoomInButton->setMaximumSize(QSize(36, 23));
        zoomInButton->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(zoomInButton, 0, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_5);

        horizontalLayout_2->setStretch(0, 3);

        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        bScanHCPlot = new QCustomPlot(tabOCTExam);
        bScanHCPlot->setObjectName(QStringLiteral("bScanHCPlot"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(bScanHCPlot->sizePolicy().hasHeightForWidth());
        bScanHCPlot->setSizePolicy(sizePolicy5);
        bScanHCPlot->setMinimumSize(QSize(400, 600));
        bScanHCPlot->setMaximumSize(QSize(1500, 16777215));

        verticalLayout_2->addWidget(bScanHCPlot);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        prevImageButton = new QPushButton(tabOCTExam);
        prevImageButton->setObjectName(QStringLiteral("prevImageButton"));
        prevImageButton->setEnabled(false);
        prevImageButton->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(prevImageButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        currImageNumberLEdit = new QLineEdit(tabOCTExam);
        currImageNumberLEdit->setObjectName(QStringLiteral("currImageNumberLEdit"));
        currImageNumberLEdit->setMinimumSize(QSize(50, 0));
        currImageNumberLEdit->setMaximumSize(QSize(100, 16777215));
        currImageNumberLEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(currImageNumberLEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        nextImageButton = new QPushButton(tabOCTExam);
        nextImageButton->setObjectName(QStringLiteral("nextImageButton"));
        nextImageButton->setEnabled(false);
        nextImageButton->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(nextImageButton);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        bScanVCPlot = new QCustomPlot(tabOCTExam);
        bScanVCPlot->setObjectName(QStringLiteral("bScanVCPlot"));
        sizePolicy5.setHeightForWidth(bScanVCPlot->sizePolicy().hasHeightForWidth());
        bScanVCPlot->setSizePolicy(sizePolicy5);
        bScanVCPlot->setMinimumSize(QSize(400, 600));
        bScanVCPlot->setMaximumSize(QSize(1500, 16777215));

        verticalLayout_3->addWidget(bScanVCPlot);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        prevNormalImageButton = new QPushButton(tabOCTExam);
        prevNormalImageButton->setObjectName(QStringLiteral("prevNormalImageButton"));
        prevNormalImageButton->setEnabled(false);
        prevNormalImageButton->setMinimumSize(QSize(100, 0));

        horizontalLayout_9->addWidget(prevNormalImageButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        currNormalImageNumberLEdit = new QLineEdit(tabOCTExam);
        currNormalImageNumberLEdit->setObjectName(QStringLiteral("currNormalImageNumberLEdit"));
        currNormalImageNumberLEdit->setMinimumSize(QSize(50, 0));
        currNormalImageNumberLEdit->setMaximumSize(QSize(100, 16777215));
        currNormalImageNumberLEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(currNormalImageNumberLEdit);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);

        nextNormalImageButton = new QPushButton(tabOCTExam);
        nextNormalImageButton->setObjectName(QStringLiteral("nextNormalImageButton"));
        nextNormalImageButton->setEnabled(false);
        nextNormalImageButton->setMinimumSize(QSize(100, 0));

        horizontalLayout_9->addWidget(nextNormalImageButton);


        verticalLayout_3->addLayout(horizontalLayout_9);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_16->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        editLayerGBox = new QGroupBox(tabOCTExam);
        editLayerGBox->setObjectName(QStringLiteral("editLayerGBox"));
        editLayerGBox->setMinimumSize(QSize(221, 311));
        editLayerGBox->setMaximumSize(QSize(221, 1000));
        pcvLayerRButton = new QRadioButton(editLayerGBox);
        pcvLayerRButton->setObjectName(QStringLiteral("pcvLayerRButton"));
        pcvLayerRButton->setGeometry(QRect(30, 40, 51, 21));
        pcvLayerRButton->setFocusPolicy(Qt::NoFocus);
        pcvLayerRButton->setChecked(true);
        ilmLayerRButton = new QRadioButton(editLayerGBox);
        ilmLayerRButton->setObjectName(QStringLiteral("ilmLayerRButton"));
        ilmLayerRButton->setGeometry(QRect(30, 80, 51, 21));
        ilmLayerRButton->setFocusPolicy(Qt::NoFocus);
        pcvColorLabel = new QLabel(editLayerGBox);
        pcvColorLabel->setObjectName(QStringLiteral("pcvColorLabel"));
        pcvColorLabel->setGeometry(QRect(120, 40, 20, 20));
        ilmColorLabel = new QLabel(editLayerGBox);
        ilmColorLabel->setObjectName(QStringLiteral("ilmColorLabel"));
        ilmColorLabel->setGeometry(QRect(120, 80, 20, 20));
        inlLayerRButton = new QRadioButton(editLayerGBox);
        inlLayerRButton->setObjectName(QStringLiteral("inlLayerRButton"));
        inlLayerRButton->setGeometry(QRect(30, 140, 61, 21));
        inlLayerRButton->setFocusPolicy(Qt::NoFocus);
        inlLayerRButton->setChecked(false);
        oplLayerRButton = new QRadioButton(editLayerGBox);
        oplLayerRButton->setObjectName(QStringLiteral("oplLayerRButton"));
        oplLayerRButton->setGeometry(QRect(30, 160, 61, 21));
        oplLayerRButton->setFocusPolicy(Qt::NoFocus);
        oplLayerRButton->setChecked(false);
        onlLayerRButton = new QRadioButton(editLayerGBox);
        onlLayerRButton->setObjectName(QStringLiteral("onlLayerRButton"));
        onlLayerRButton->setGeometry(QRect(30, 180, 61, 21));
        onlLayerRButton->setFocusPolicy(Qt::NoFocus);
        onlLayerRButton->setChecked(false);
        elmLayerRButton = new QRadioButton(editLayerGBox);
        elmLayerRButton->setObjectName(QStringLiteral("elmLayerRButton"));
        elmLayerRButton->setEnabled(true);
        elmLayerRButton->setGeometry(QRect(30, 200, 51, 21));
        elmLayerRButton->setChecked(false);
        inlColorLabel = new QLabel(editLayerGBox);
        inlColorLabel->setObjectName(QStringLiteral("inlColorLabel"));
        inlColorLabel->setGeometry(QRect(120, 140, 20, 20));
        oplColorLabel = new QLabel(editLayerGBox);
        oplColorLabel->setObjectName(QStringLiteral("oplColorLabel"));
        oplColorLabel->setGeometry(QRect(120, 160, 20, 20));
        onlColorLabel = new QLabel(editLayerGBox);
        onlColorLabel->setObjectName(QStringLiteral("onlColorLabel"));
        onlColorLabel->setGeometry(QRect(120, 180, 20, 20));
        elmColorLabel = new QLabel(editLayerGBox);
        elmColorLabel->setObjectName(QStringLiteral("elmColorLabel"));
        elmColorLabel->setGeometry(QRect(120, 200, 20, 20));
        pcvLayerCBox = new QCheckBox(editLayerGBox);
        pcvLayerCBox->setObjectName(QStringLiteral("pcvLayerCBox"));
        pcvLayerCBox->setGeometry(QRect(10, 40, 16, 21));
        pcvLayerCBox->setFocusPolicy(Qt::NoFocus);
        pcvLayerCBox->setChecked(true);
        pcvAnnotCountLabel = new QLabel(editLayerGBox);
        pcvAnnotCountLabel->setObjectName(QStringLiteral("pcvAnnotCountLabel"));
        pcvAnnotCountLabel->setGeometry(QRect(150, 40, 71, 21));
        ilmLayerCBox = new QCheckBox(editLayerGBox);
        ilmLayerCBox->setObjectName(QStringLiteral("ilmLayerCBox"));
        ilmLayerCBox->setGeometry(QRect(10, 80, 16, 21));
        ilmLayerCBox->setFocusPolicy(Qt::NoFocus);
        ilmLayerCBox->setChecked(true);
        ilmAnnotCountLabel = new QLabel(editLayerGBox);
        ilmAnnotCountLabel->setObjectName(QStringLiteral("ilmAnnotCountLabel"));
        ilmAnnotCountLabel->setGeometry(QRect(150, 80, 71, 21));
        inlLayerCBox = new QCheckBox(editLayerGBox);
        inlLayerCBox->setObjectName(QStringLiteral("inlLayerCBox"));
        inlLayerCBox->setGeometry(QRect(10, 140, 16, 21));
        inlLayerCBox->setFocusPolicy(Qt::NoFocus);
        inlLayerCBox->setChecked(true);
        inlAnnotCountLabel = new QLabel(editLayerGBox);
        inlAnnotCountLabel->setObjectName(QStringLiteral("inlAnnotCountLabel"));
        inlAnnotCountLabel->setGeometry(QRect(150, 140, 71, 21));
        oplLayerCBox = new QCheckBox(editLayerGBox);
        oplLayerCBox->setObjectName(QStringLiteral("oplLayerCBox"));
        oplLayerCBox->setGeometry(QRect(10, 160, 16, 21));
        oplLayerCBox->setFocusPolicy(Qt::NoFocus);
        oplLayerCBox->setChecked(true);
        oplAnnotCountLabel = new QLabel(editLayerGBox);
        oplAnnotCountLabel->setObjectName(QStringLiteral("oplAnnotCountLabel"));
        oplAnnotCountLabel->setGeometry(QRect(150, 160, 71, 21));
        onlLayerCBox = new QCheckBox(editLayerGBox);
        onlLayerCBox->setObjectName(QStringLiteral("onlLayerCBox"));
        onlLayerCBox->setGeometry(QRect(10, 180, 16, 21));
        onlLayerCBox->setFocusPolicy(Qt::NoFocus);
        onlLayerCBox->setChecked(true);
        onlAnnotCountLabel = new QLabel(editLayerGBox);
        onlAnnotCountLabel->setObjectName(QStringLiteral("onlAnnotCountLabel"));
        onlAnnotCountLabel->setGeometry(QRect(150, 180, 71, 21));
        elmLayerCBox = new QCheckBox(editLayerGBox);
        elmLayerCBox->setObjectName(QStringLiteral("elmLayerCBox"));
        elmLayerCBox->setGeometry(QRect(10, 200, 16, 21));
        elmLayerCBox->setChecked(true);
        elmAnnotCountLabel = new QLabel(editLayerGBox);
        elmAnnotCountLabel->setObjectName(QStringLiteral("elmAnnotCountLabel"));
        elmAnnotCountLabel->setGeometry(QRect(150, 200, 71, 21));
        gclLayerCBox = new QCheckBox(editLayerGBox);
        gclLayerCBox->setObjectName(QStringLiteral("gclLayerCBox"));
        gclLayerCBox->setGeometry(QRect(10, 100, 16, 21));
        gclLayerCBox->setFocusPolicy(Qt::NoFocus);
        gclLayerCBox->setChecked(true);
        gclLayerRButton = new QRadioButton(editLayerGBox);
        gclLayerRButton->setObjectName(QStringLiteral("gclLayerRButton"));
        gclLayerRButton->setGeometry(QRect(30, 100, 61, 21));
        gclLayerRButton->setFocusPolicy(Qt::NoFocus);
        gclColorLabel = new QLabel(editLayerGBox);
        gclColorLabel->setObjectName(QStringLiteral("gclColorLabel"));
        gclColorLabel->setGeometry(QRect(120, 100, 20, 20));
        gclAnnotCountLabel = new QLabel(editLayerGBox);
        gclAnnotCountLabel->setObjectName(QStringLiteral("gclAnnotCountLabel"));
        gclAnnotCountLabel->setGeometry(QRect(150, 100, 71, 21));
        iplLayerCBox = new QCheckBox(editLayerGBox);
        iplLayerCBox->setObjectName(QStringLiteral("iplLayerCBox"));
        iplLayerCBox->setGeometry(QRect(10, 120, 16, 21));
        iplLayerCBox->setFocusPolicy(Qt::NoFocus);
        iplLayerCBox->setChecked(true);
        iplLayerRButton = new QRadioButton(editLayerGBox);
        iplLayerRButton->setObjectName(QStringLiteral("iplLayerRButton"));
        iplLayerRButton->setGeometry(QRect(30, 120, 61, 21));
        iplLayerRButton->setFocusPolicy(Qt::NoFocus);
        iplColorLabel = new QLabel(editLayerGBox);
        iplColorLabel->setObjectName(QStringLiteral("iplColorLabel"));
        iplColorLabel->setGeometry(QRect(120, 120, 20, 20));
        iplAnnotCountLabel = new QLabel(editLayerGBox);
        iplAnnotCountLabel->setObjectName(QStringLiteral("iplAnnotCountLabel"));
        iplAnnotCountLabel->setGeometry(QRect(150, 120, 71, 21));
        mezLayerCBox = new QCheckBox(editLayerGBox);
        mezLayerCBox->setObjectName(QStringLiteral("mezLayerCBox"));
        mezLayerCBox->setGeometry(QRect(10, 220, 16, 21));
        mezLayerCBox->setChecked(true);
        mezLayerRButton = new QRadioButton(editLayerGBox);
        mezLayerRButton->setObjectName(QStringLiteral("mezLayerRButton"));
        mezLayerRButton->setGeometry(QRect(30, 220, 91, 21));
        mezAnnotCountLabel = new QLabel(editLayerGBox);
        mezAnnotCountLabel->setObjectName(QStringLiteral("mezAnnotCountLabel"));
        mezAnnotCountLabel->setGeometry(QRect(150, 220, 71, 21));
        iosLayerCBox = new QCheckBox(editLayerGBox);
        iosLayerCBox->setObjectName(QStringLiteral("iosLayerCBox"));
        iosLayerCBox->setGeometry(QRect(10, 240, 16, 21));
        iosLayerCBox->setChecked(true);
        iosLayerRButton = new QRadioButton(editLayerGBox);
        iosLayerRButton->setObjectName(QStringLiteral("iosLayerRButton"));
        iosLayerRButton->setGeometry(QRect(30, 240, 61, 21));
        iosAnnotCountLabel = new QLabel(editLayerGBox);
        iosAnnotCountLabel->setObjectName(QStringLiteral("iosAnnotCountLabel"));
        iosAnnotCountLabel->setGeometry(QRect(150, 240, 71, 21));
        rpeLayerCBox = new QCheckBox(editLayerGBox);
        rpeLayerCBox->setObjectName(QStringLiteral("rpeLayerCBox"));
        rpeLayerCBox->setGeometry(QRect(10, 260, 16, 21));
        rpeLayerCBox->setChecked(true);
        rpeLayerRButton = new QRadioButton(editLayerGBox);
        rpeLayerRButton->setObjectName(QStringLiteral("rpeLayerRButton"));
        rpeLayerRButton->setGeometry(QRect(30, 260, 61, 21));
        rpeAnnotCountLabel = new QLabel(editLayerGBox);
        rpeAnnotCountLabel->setObjectName(QStringLiteral("rpeAnnotCountLabel"));
        rpeAnnotCountLabel->setGeometry(QRect(150, 260, 71, 21));
        chrLayerCBox = new QCheckBox(editLayerGBox);
        chrLayerCBox->setObjectName(QStringLiteral("chrLayerCBox"));
        chrLayerCBox->setGeometry(QRect(10, 280, 16, 21));
        chrLayerCBox->setChecked(true);
        chrLayerRButton = new QRadioButton(editLayerGBox);
        chrLayerRButton->setObjectName(QStringLiteral("chrLayerRButton"));
        chrLayerRButton->setGeometry(QRect(30, 280, 81, 21));
        chrAnnotCountLabel = new QLabel(editLayerGBox);
        chrAnnotCountLabel->setObjectName(QStringLiteral("chrAnnotCountLabel"));
        chrAnnotCountLabel->setGeometry(QRect(150, 280, 71, 21));
        mezColorLabel = new QLabel(editLayerGBox);
        mezColorLabel->setObjectName(QStringLiteral("mezColorLabel"));
        mezColorLabel->setGeometry(QRect(120, 220, 20, 20));
        iosColorLabel = new QLabel(editLayerGBox);
        iosColorLabel->setObjectName(QStringLiteral("iosColorLabel"));
        iosColorLabel->setGeometry(QRect(120, 240, 20, 20));
        rpeColorLabel = new QLabel(editLayerGBox);
        rpeColorLabel->setObjectName(QStringLiteral("rpeColorLabel"));
        rpeColorLabel->setGeometry(QRect(120, 260, 20, 20));
        chrColorLabel = new QLabel(editLayerGBox);
        chrColorLabel->setObjectName(QStringLiteral("chrColorLabel"));
        chrColorLabel->setGeometry(QRect(120, 280, 20, 20));
        ermLayerCBox = new QCheckBox(editLayerGBox);
        ermLayerCBox->setObjectName(QStringLiteral("ermLayerCBox"));
        ermLayerCBox->setGeometry(QRect(10, 60, 16, 21));
        ermLayerCBox->setFocusPolicy(Qt::NoFocus);
        ermLayerCBox->setChecked(true);
        ermLayerRButton = new QRadioButton(editLayerGBox);
        ermLayerRButton->setObjectName(QStringLiteral("ermLayerRButton"));
        ermLayerRButton->setGeometry(QRect(30, 60, 51, 21));
        ermLayerRButton->setFocusPolicy(Qt::NoFocus);
        ermLayerRButton->setChecked(false);
        ermColorLabel = new QLabel(editLayerGBox);
        ermColorLabel->setObjectName(QStringLiteral("ermColorLabel"));
        ermColorLabel->setGeometry(QRect(120, 60, 20, 20));
        ermAnnotCountLabel = new QLabel(editLayerGBox);
        ermAnnotCountLabel->setObjectName(QStringLiteral("ermAnnotCountLabel"));
        ermAnnotCountLabel->setGeometry(QRect(150, 60, 71, 21));
        allLayersCBox = new QCheckBox(editLayerGBox);
        allLayersCBox->setObjectName(QStringLiteral("allLayersCBox"));
        allLayersCBox->setGeometry(QRect(10, 20, 151, 21));
        allLayersCBox->setChecked(true);

        verticalLayout_6->addWidget(editLayerGBox);

        formLayout_4 = new QFormLayout();
        formLayout_4->setSpacing(6);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        contrastResetButton = new QPushButton(tabOCTExam);
        contrastResetButton->setObjectName(QStringLiteral("contrastResetButton"));
        contrastResetButton->setMaximumSize(QSize(75, 23));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, contrastResetButton);

        contrastSlider = new QSlider(tabOCTExam);
        contrastSlider->setObjectName(QStringLiteral("contrastSlider"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(contrastSlider->sizePolicy().hasHeightForWidth());
        contrastSlider->setSizePolicy(sizePolicy6);
        contrastSlider->setMinimumSize(QSize(140, 19));
        contrastSlider->setMaximumSize(QSize(140, 16777215));
        contrastSlider->setMinimum(1);
        contrastSlider->setMaximum(30);
        contrastSlider->setPageStep(2);
        contrastSlider->setOrientation(Qt::Horizontal);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, contrastSlider);

        brightnessResetButton = new QPushButton(tabOCTExam);
        brightnessResetButton->setObjectName(QStringLiteral("brightnessResetButton"));
        brightnessResetButton->setMaximumSize(QSize(75, 23));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, brightnessResetButton);

        brightnessSlider = new QSlider(tabOCTExam);
        brightnessSlider->setObjectName(QStringLiteral("brightnessSlider"));
        sizePolicy6.setHeightForWidth(brightnessSlider->sizePolicy().hasHeightForWidth());
        brightnessSlider->setSizePolicy(sizePolicy6);
        brightnessSlider->setMinimumSize(QSize(140, 19));
        brightnessSlider->setMaximumSize(QSize(140, 16777215));
        brightnessSlider->setMinimum(-100);
        brightnessSlider->setMaximum(100);
        brightnessSlider->setOrientation(Qt::Horizontal);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, brightnessSlider);


        verticalLayout_6->addLayout(formLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        fundusImageLabel = new QLabel(tabOCTExam);
        fundusImageLabel->setObjectName(QStringLiteral("fundusImageLabel"));
        fundusImageLabel->setMinimumSize(QSize(222, 222));
        fundusImageLabel->setMaximumSize(QSize(222, 222));
        fundusImageLabel->setFrameShape(QFrame::Box);
        fundusImageLabel->setScaledContents(true);
        fundusImageLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_6->addWidget(fundusImageLabel);


        horizontalLayout_16->addLayout(verticalLayout_6);

        tabWidget->addTab(tabOCTExam, QString());
        tabRetinaAnalysis = new QWidget();
        tabRetinaAnalysis->setObjectName(QStringLiteral("tabRetinaAnalysis"));
        horizontalLayout_12 = new QHBoxLayout(tabRetinaAnalysis);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        errorVirtualMapCPlot = new QCustomPlot(tabRetinaAnalysis);
        errorVirtualMapCPlot->setObjectName(QStringLiteral("errorVirtualMapCPlot"));

        horizontalLayout_12->addWidget(errorVirtualMapCPlot);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        layerCPlot = new QCustomPlot(tabRetinaAnalysis);
        layerCPlot->setObjectName(QStringLiteral("layerCPlot"));
        layerCPlot->setMinimumSize(QSize(620, 180));
        layerCPlot->setMaximumSize(QSize(620, 180));

        verticalLayout->addWidget(layerCPlot);

        layersToPlotGBox = new QGroupBox(tabRetinaAnalysis);
        layersToPlotGBox->setObjectName(QStringLiteral("layersToPlotGBox"));
        elmLayerCBox_2 = new QCheckBox(layersToPlotGBox);
        elmLayerCBox_2->setObjectName(QStringLiteral("elmLayerCBox_2"));
        elmLayerCBox_2->setGeometry(QRect(10, 180, 71, 21));
        elmLayerCBox_2->setChecked(false);
        ermLayerCBox_2 = new QCheckBox(layersToPlotGBox);
        ermLayerCBox_2->setObjectName(QStringLiteral("ermLayerCBox_2"));
        ermLayerCBox_2->setGeometry(QRect(10, 40, 61, 21));
        ermLayerCBox_2->setFocusPolicy(Qt::NoFocus);
        ermLayerCBox_2->setChecked(false);
        iplLayerCBox_2 = new QCheckBox(layersToPlotGBox);
        iplLayerCBox_2->setObjectName(QStringLiteral("iplLayerCBox_2"));
        iplLayerCBox_2->setGeometry(QRect(10, 100, 71, 21));
        iplLayerCBox_2->setFocusPolicy(Qt::NoFocus);
        iplLayerCBox_2->setChecked(false);
        oplLayerCBox_2 = new QCheckBox(layersToPlotGBox);
        oplLayerCBox_2->setObjectName(QStringLiteral("oplLayerCBox_2"));
        oplLayerCBox_2->setGeometry(QRect(10, 140, 71, 21));
        oplLayerCBox_2->setFocusPolicy(Qt::NoFocus);
        oplLayerCBox_2->setChecked(false);
        iosLayerCBox_2 = new QCheckBox(layersToPlotGBox);
        iosLayerCBox_2->setObjectName(QStringLiteral("iosLayerCBox_2"));
        iosLayerCBox_2->setGeometry(QRect(10, 220, 61, 21));
        iosLayerCBox_2->setChecked(false);
        inlLayerCBox_2 = new QCheckBox(layersToPlotGBox);
        inlLayerCBox_2->setObjectName(QStringLiteral("inlLayerCBox_2"));
        inlLayerCBox_2->setGeometry(QRect(10, 120, 71, 21));
        inlLayerCBox_2->setFocusPolicy(Qt::NoFocus);
        inlLayerCBox_2->setChecked(false);
        rpeLayerCBox_2 = new QCheckBox(layersToPlotGBox);
        rpeLayerCBox_2->setObjectName(QStringLiteral("rpeLayerCBox_2"));
        rpeLayerCBox_2->setGeometry(QRect(10, 240, 111, 21));
        rpeLayerCBox_2->setChecked(false);
        pcvLayerCBox_2 = new QCheckBox(layersToPlotGBox);
        pcvLayerCBox_2->setObjectName(QStringLiteral("pcvLayerCBox_2"));
        pcvLayerCBox_2->setGeometry(QRect(10, 20, 61, 21));
        pcvLayerCBox_2->setFocusPolicy(Qt::NoFocus);
        pcvLayerCBox_2->setChecked(false);
        ilmLayerCBox_2 = new QCheckBox(layersToPlotGBox);
        ilmLayerCBox_2->setObjectName(QStringLiteral("ilmLayerCBox_2"));
        ilmLayerCBox_2->setGeometry(QRect(10, 60, 41, 21));
        ilmLayerCBox_2->setFocusPolicy(Qt::NoFocus);
        ilmLayerCBox_2->setChecked(true);
        chrLayerCBox_2 = new QCheckBox(layersToPlotGBox);
        chrLayerCBox_2->setObjectName(QStringLiteral("chrLayerCBox_2"));
        chrLayerCBox_2->setGeometry(QRect(10, 260, 101, 21));
        chrLayerCBox_2->setChecked(true);
        gclLayerCBox_2 = new QCheckBox(layersToPlotGBox);
        gclLayerCBox_2->setObjectName(QStringLiteral("gclLayerCBox_2"));
        gclLayerCBox_2->setGeometry(QRect(10, 80, 71, 21));
        gclLayerCBox_2->setFocusPolicy(Qt::NoFocus);
        gclLayerCBox_2->setChecked(false);
        onlLayerCBox_2 = new QCheckBox(layersToPlotGBox);
        onlLayerCBox_2->setObjectName(QStringLiteral("onlLayerCBox_2"));
        onlLayerCBox_2->setGeometry(QRect(10, 160, 81, 21));
        onlLayerCBox_2->setFocusPolicy(Qt::NoFocus);
        onlLayerCBox_2->setChecked(false);
        mezLayerCBox_2 = new QCheckBox(layersToPlotGBox);
        mezLayerCBox_2->setObjectName(QStringLiteral("mezLayerCBox_2"));
        mezLayerCBox_2->setGeometry(QRect(10, 200, 111, 21));
        mezLayerCBox_2->setChecked(false);
        plotLayersButton = new QPushButton(layersToPlotGBox);
        plotLayersButton->setObjectName(QStringLiteral("plotLayersButton"));
        plotLayersButton->setGeometry(QRect(20, 290, 121, 23));

        verticalLayout->addWidget(layersToPlotGBox);


        horizontalLayout_12->addLayout(verticalLayout);

        tabWidget->addTab(tabRetinaAnalysis, QString());
        tabVirtualMap = new QWidget();
        tabVirtualMap->setObjectName(QStringLiteral("tabVirtualMap"));
        horizontalLayout_18 = new QHBoxLayout(tabVirtualMap);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        computeVirtualMapButton = new QPushButton(tabVirtualMap);
        computeVirtualMapButton->setObjectName(QStringLiteral("computeVirtualMapButton"));
        computeVirtualMapButton->setEnabled(false);
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(computeVirtualMapButton->sizePolicy().hasHeightForWidth());
        computeVirtualMapButton->setSizePolicy(sizePolicy7);
        computeVirtualMapButton->setMinimumSize(QSize(201, 31));
        computeVirtualMapButton->setMaximumSize(QSize(300, 16777215));

        verticalLayout_8->addWidget(computeVirtualMapButton);

        groupBox = new QGroupBox(tabVirtualMap);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy7.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy7);
        groupBox->setMinimumSize(QSize(201, 81));
        groupBox->setMaximumSize(QSize(300, 16777215));
        formLayout = new QFormLayout(groupBox);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_39 = new QLabel(groupBox);
        label_39->setObjectName(QStringLiteral("label_39"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_39);

        layer1CBox = new QComboBox(groupBox);
        layer1CBox->setObjectName(QStringLiteral("layer1CBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, layer1CBox);

        label_40 = new QLabel(groupBox);
        label_40->setObjectName(QStringLiteral("label_40"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_40);

        layer2CBox = new QComboBox(groupBox);
        layer2CBox->setObjectName(QStringLiteral("layer2CBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, layer2CBox);


        verticalLayout_8->addWidget(groupBox);

        groupBox_4 = new QGroupBox(tabVirtualMap);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(120, 0));
        groupBox_4->setMaximumSize(QSize(300, 16777215));
        formLayout_2 = new QFormLayout(groupBox_4);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_28 = new QLabel(groupBox_4);
        label_28->setObjectName(QStringLiteral("label_28"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_28);

        retinaDepthLEdit = new QLineEdit(groupBox_4);
        retinaDepthLEdit->setObjectName(QStringLiteral("retinaDepthLEdit"));
        retinaDepthLEdit->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, retinaDepthLEdit);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        retinaVolumeLEdit = new QLineEdit(groupBox_4);
        retinaVolumeLEdit->setObjectName(QStringLiteral("retinaVolumeLEdit"));
        retinaVolumeLEdit->setReadOnly(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, retinaVolumeLEdit);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_4);

        preretinalVolumeLEdit = new QLineEdit(groupBox_4);
        preretinalVolumeLEdit->setObjectName(QStringLiteral("preretinalVolumeLEdit"));
        preretinalVolumeLEdit->setReadOnly(true);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, preretinalVolumeLEdit);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_5);

        foveaPitVolumeLEdit = new QLineEdit(groupBox_4);
        foveaPitVolumeLEdit->setObjectName(QStringLiteral("foveaPitVolumeLEdit"));
        foveaPitVolumeLEdit->setReadOnly(true);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, foveaPitVolumeLEdit);


        verticalLayout_8->addWidget(groupBox_4);

        groupBox_2 = new QGroupBox(tabVirtualMap);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy7.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy7);
        groupBox_2->setMinimumSize(QSize(221, 121));
        groupBox_2->setMaximumSize(QSize(300, 16777215));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_43 = new QLabel(groupBox_2);
        label_43->setObjectName(QStringLiteral("label_43"));

        gridLayout->addWidget(label_43, 0, 0, 1, 1);

        contactThresholdCBox = new QComboBox(groupBox_2);
        contactThresholdCBox->setObjectName(QStringLiteral("contactThresholdCBox"));

        gridLayout->addWidget(contactThresholdCBox, 0, 1, 1, 1);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout->addWidget(label_16, 1, 0, 1, 1);

        contactAreaCFLEdit = new QLineEdit(groupBox_2);
        contactAreaCFLEdit->setObjectName(QStringLiteral("contactAreaCFLEdit"));
        contactAreaCFLEdit->setReadOnly(true);

        gridLayout->addWidget(contactAreaCFLEdit, 1, 1, 1, 1);

        contactAreaProcCFLabel = new QLabel(groupBox_2);
        contactAreaProcCFLabel->setObjectName(QStringLiteral("contactAreaProcCFLabel"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(contactAreaProcCFLabel->sizePolicy().hasHeightForWidth());
        contactAreaProcCFLabel->setSizePolicy(sizePolicy8);
        contactAreaProcCFLabel->setMinimumSize(QSize(30, 0));

        gridLayout->addWidget(contactAreaProcCFLabel, 1, 2, 1, 1);

        label_29 = new QLabel(groupBox_2);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout->addWidget(label_29, 2, 0, 1, 1);

        contactAreaIMLEdit = new QLineEdit(groupBox_2);
        contactAreaIMLEdit->setObjectName(QStringLiteral("contactAreaIMLEdit"));
        contactAreaIMLEdit->setReadOnly(true);

        gridLayout->addWidget(contactAreaIMLEdit, 2, 1, 1, 1);

        contactAreaProcIMLabel = new QLabel(groupBox_2);
        contactAreaProcIMLabel->setObjectName(QStringLiteral("contactAreaProcIMLabel"));

        gridLayout->addWidget(contactAreaProcIMLabel, 2, 2, 1, 1);

        label_34 = new QLabel(groupBox_2);
        label_34->setObjectName(QStringLiteral("label_34"));

        gridLayout->addWidget(label_34, 3, 0, 1, 1);

        contactAreaOMLEdit = new QLineEdit(groupBox_2);
        contactAreaOMLEdit->setObjectName(QStringLiteral("contactAreaOMLEdit"));
        contactAreaOMLEdit->setReadOnly(true);

        gridLayout->addWidget(contactAreaOMLEdit, 3, 1, 1, 1);

        contactAreaProcOMLabel = new QLabel(groupBox_2);
        contactAreaProcOMLabel->setObjectName(QStringLiteral("contactAreaProcOMLabel"));

        gridLayout->addWidget(contactAreaProcOMLabel, 3, 2, 1, 1);


        verticalLayout_8->addWidget(groupBox_2);

        label_46 = new QLabel(tabVirtualMap);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setFont(font);

        verticalLayout_8->addWidget(label_46);

        ETDRSgridCPlot = new QCustomPlot(tabVirtualMap);
        ETDRSgridCPlot->setObjectName(QStringLiteral("ETDRSgridCPlot"));
        QSizePolicy sizePolicy9(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(ETDRSgridCPlot->sizePolicy().hasHeightForWidth());
        ETDRSgridCPlot->setSizePolicy(sizePolicy9);
        ETDRSgridCPlot->setMinimumSize(QSize(300, 300));
        ETDRSgridCPlot->setMaximumSize(QSize(300, 300));
        ETDRSgridCPlot->setSizeIncrement(QSize(10, 10));

        verticalLayout_8->addWidget(ETDRSgridCPlot);


        horizontalLayout_18->addLayout(verticalLayout_8);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_41 = new QLabel(tabVirtualMap);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setFont(font);

        verticalLayout_9->addWidget(label_41);

        virtualMapImageCPlot = new QCustomPlot(tabVirtualMap);
        virtualMapImageCPlot->setObjectName(QStringLiteral("virtualMapImageCPlot"));
        sizePolicy.setHeightForWidth(virtualMapImageCPlot->sizePolicy().hasHeightForWidth());
        virtualMapImageCPlot->setSizePolicy(sizePolicy);
        virtualMapImageCPlot->setMinimumSize(QSize(400, 450));
        virtualMapImageCPlot->setMaximumSize(QSize(800, 1062));

        verticalLayout_9->addWidget(virtualMapImageCPlot);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(tabVirtualMap);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy6.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy6);

        horizontalLayout_5->addWidget(label);

        virtualMapValueHoverLabel = new QLabel(tabVirtualMap);
        virtualMapValueHoverLabel->setObjectName(QStringLiteral("virtualMapValueHoverLabel"));
        sizePolicy7.setHeightForWidth(virtualMapValueHoverLabel->sizePolicy().hasHeightForWidth());
        virtualMapValueHoverLabel->setSizePolicy(sizePolicy7);

        horizontalLayout_5->addWidget(virtualMapValueHoverLabel);


        verticalLayout_9->addLayout(horizontalLayout_5);


        horizontalLayout_4->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_45 = new QLabel(tabVirtualMap);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setFont(font);

        verticalLayout_10->addWidget(label_45);

        virtualMapContourImageCPlot = new QCustomPlot(tabVirtualMap);
        virtualMapContourImageCPlot->setObjectName(QStringLiteral("virtualMapContourImageCPlot"));
        sizePolicy.setHeightForWidth(virtualMapContourImageCPlot->sizePolicy().hasHeightForWidth());
        virtualMapContourImageCPlot->setSizePolicy(sizePolicy);
        virtualMapContourImageCPlot->setMinimumSize(QSize(400, 450));
        virtualMapContourImageCPlot->setMaximumSize(QSize(800, 1062));

        verticalLayout_10->addWidget(virtualMapContourImageCPlot);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_6 = new QLabel(tabVirtualMap);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy6.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy6);

        horizontalLayout_10->addWidget(label_6);

        retinaThicknessMapHoverValueLabel = new QLabel(tabVirtualMap);
        retinaThicknessMapHoverValueLabel->setObjectName(QStringLiteral("retinaThicknessMapHoverValueLabel"));
        sizePolicy7.setHeightForWidth(retinaThicknessMapHoverValueLabel->sizePolicy().hasHeightForWidth());
        retinaThicknessMapHoverValueLabel->setSizePolicy(sizePolicy7);

        horizontalLayout_10->addWidget(retinaThicknessMapHoverValueLabel);


        verticalLayout_10->addLayout(horizontalLayout_10);


        horizontalLayout_4->addLayout(verticalLayout_10);


        verticalLayout_16->addLayout(horizontalLayout_4);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        virtualMapCircProfileCPlot = new QCustomPlot(tabVirtualMap);
        virtualMapCircProfileCPlot->setObjectName(QStringLiteral("virtualMapCircProfileCPlot"));
        sizePolicy.setHeightForWidth(virtualMapCircProfileCPlot->sizePolicy().hasHeightForWidth());
        virtualMapCircProfileCPlot->setSizePolicy(sizePolicy);
        virtualMapCircProfileCPlot->setMinimumSize(QSize(561, 150));
        virtualMapCircProfileCPlot->setMaximumSize(QSize(2000, 402));

        verticalLayout_15->addWidget(virtualMapCircProfileCPlot);

        label_44 = new QLabel(tabVirtualMap);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setPixmap(QPixmap(QString::fromUtf8("circ_profile_legend.png")));
        label_44->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(label_44);


        verticalLayout_16->addLayout(verticalLayout_15);


        horizontalLayout_18->addLayout(verticalLayout_16);

        tabWidget->addTab(tabVirtualMap, QString());
        tabErrorAnalysis = new QWidget();
        tabErrorAnalysis->setObjectName(QStringLiteral("tabErrorAnalysis"));
        verticalLayout_14 = new QVBoxLayout(tabErrorAnalysis);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setSpacing(6);
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        label_12 = new QLabel(tabErrorAnalysis);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(81, 21));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_12);

        autoSegmentFileLabel = new QLabel(tabErrorAnalysis);
        autoSegmentFileLabel->setObjectName(QStringLiteral("autoSegmentFileLabel"));
        autoSegmentFileLabel->setMinimumSize(QSize(961, 21));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, autoSegmentFileLabel);


        verticalLayout_14->addLayout(formLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        imageLayersCPlot = new QCustomPlot(tabErrorAnalysis);
        imageLayersCPlot->setObjectName(QStringLiteral("imageLayersCPlot"));
        imageLayersCPlot->setMinimumSize(QSize(411, 501));

        verticalLayout_13->addWidget(imageLayersCPlot);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        prevImageLayersButton = new QPushButton(tabErrorAnalysis);
        prevImageLayersButton->setObjectName(QStringLiteral("prevImageLayersButton"));
        prevImageLayersButton->setEnabled(false);

        horizontalLayout_6->addWidget(prevImageLayersButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        currImageNumberLayersLEdit = new QLineEdit(tabErrorAnalysis);
        currImageNumberLayersLEdit->setObjectName(QStringLiteral("currImageNumberLayersLEdit"));
        currImageNumberLayersLEdit->setMaximumSize(QSize(60, 16777215));
        currImageNumberLayersLEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(currImageNumberLayersLEdit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        nextImageLayersButton = new QPushButton(tabErrorAnalysis);
        nextImageLayersButton->setObjectName(QStringLiteral("nextImageLayersButton"));
        nextImageLayersButton->setEnabled(false);

        horizontalLayout_6->addWidget(nextImageLayersButton);


        verticalLayout_13->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout_13);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        virtualMapErrorStatsGBox = new QGroupBox(tabErrorAnalysis);
        virtualMapErrorStatsGBox->setObjectName(QStringLiteral("virtualMapErrorStatsGBox"));
        sizePolicy6.setHeightForWidth(virtualMapErrorStatsGBox->sizePolicy().hasHeightForWidth());
        virtualMapErrorStatsGBox->setSizePolicy(sizePolicy6);
        virtualMapErrorStatsGBox->setMinimumSize(QSize(221, 110));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        virtualMapErrorStatsGBox->setFont(font1);
        virtualMapErrorDevLEdit_um = new QLineEdit(virtualMapErrorStatsGBox);
        virtualMapErrorDevLEdit_um->setObjectName(QStringLiteral("virtualMapErrorDevLEdit_um"));
        virtualMapErrorDevLEdit_um->setEnabled(false);
        virtualMapErrorDevLEdit_um->setGeometry(QRect(110, 80, 81, 20));
        label_17 = new QLabel(virtualMapErrorStatsGBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 20, 141, 16));
        virtualMapErrorAvgLEdit_um = new QLineEdit(virtualMapErrorStatsGBox);
        virtualMapErrorAvgLEdit_um->setObjectName(QStringLiteral("virtualMapErrorAvgLEdit_um"));
        virtualMapErrorAvgLEdit_um->setEnabled(false);
        virtualMapErrorAvgLEdit_um->setGeometry(QRect(110, 40, 81, 20));
        virtualMapErrorAvgLEdit = new QLineEdit(virtualMapErrorStatsGBox);
        virtualMapErrorAvgLEdit->setObjectName(QStringLiteral("virtualMapErrorAvgLEdit"));
        virtualMapErrorAvgLEdit->setEnabled(false);
        virtualMapErrorAvgLEdit->setGeometry(QRect(10, 40, 81, 20));
        label_21 = new QLabel(virtualMapErrorStatsGBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 60, 221, 16));
        virtualMapErrorDevLEdit = new QLineEdit(virtualMapErrorStatsGBox);
        virtualMapErrorDevLEdit->setObjectName(QStringLiteral("virtualMapErrorDevLEdit"));
        virtualMapErrorDevLEdit->setEnabled(false);
        virtualMapErrorDevLEdit->setGeometry(QRect(10, 80, 81, 20));

        verticalLayout_11->addWidget(virtualMapErrorStatsGBox);

        layersErrorStatsGBox = new QGroupBox(tabErrorAnalysis);
        layersErrorStatsGBox->setObjectName(QStringLiteral("layersErrorStatsGBox"));
        layersErrorStatsGBox->setMinimumSize(QSize(221, 170));
        layerErrorDevLEdit_um = new QLineEdit(layersErrorStatsGBox);
        layerErrorDevLEdit_um->setObjectName(QStringLiteral("layerErrorDevLEdit_um"));
        layerErrorDevLEdit_um->setEnabled(false);
        layerErrorDevLEdit_um->setGeometry(QRect(110, 90, 81, 20));
        label_27 = new QLabel(layersErrorStatsGBox);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(10, 70, 211, 21));
        layerErrorCBox = new QComboBox(layersErrorStatsGBox);
        layerErrorCBox->setObjectName(QStringLiteral("layerErrorCBox"));
        layerErrorCBox->setGeometry(QRect(140, 20, 69, 22));
        layerErrorDevLEdit = new QLineEdit(layersErrorStatsGBox);
        layerErrorDevLEdit->setObjectName(QStringLiteral("layerErrorDevLEdit"));
        layerErrorDevLEdit->setEnabled(false);
        layerErrorDevLEdit->setGeometry(QRect(10, 90, 81, 20));
        layerErrorAvgLEdit = new QLineEdit(layersErrorStatsGBox);
        layerErrorAvgLEdit->setObjectName(QStringLiteral("layerErrorAvgLEdit"));
        layerErrorAvgLEdit->setEnabled(false);
        layerErrorAvgLEdit->setGeometry(QRect(10, 50, 81, 20));
        layerErrorAvgLEdit_um = new QLineEdit(layersErrorStatsGBox);
        layerErrorAvgLEdit_um->setObjectName(QStringLiteral("layerErrorAvgLEdit_um"));
        layerErrorAvgLEdit_um->setEnabled(false);
        layerErrorAvgLEdit_um->setGeometry(QRect(110, 50, 81, 20));
        label_25 = new QLabel(layersErrorStatsGBox);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 20, 121, 21));
        label_26 = new QLabel(layersErrorStatsGBox);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 120, 191, 16));
        layerErrorProcLEdit = new QLineEdit(layersErrorStatsGBox);
        layerErrorProcLEdit->setObjectName(QStringLiteral("layerErrorProcLEdit"));
        layerErrorProcLEdit->setEnabled(false);
        layerErrorProcLEdit->setGeometry(QRect(10, 140, 81, 20));

        verticalLayout_11->addWidget(layersErrorStatsGBox);

        currScanLayerErrorStatsGBox = new QGroupBox(tabErrorAnalysis);
        currScanLayerErrorStatsGBox->setObjectName(QStringLiteral("currScanLayerErrorStatsGBox"));
        sizePolicy6.setHeightForWidth(currScanLayerErrorStatsGBox->sizePolicy().hasHeightForWidth());
        currScanLayerErrorStatsGBox->setSizePolicy(sizePolicy6);
        currScanLayerErrorStatsGBox->setMinimumSize(QSize(221, 201));
        pcvLineErrorDevLEdit = new QLineEdit(currScanLayerErrorStatsGBox);
        pcvLineErrorDevLEdit->setObjectName(QStringLiteral("pcvLineErrorDevLEdit"));
        pcvLineErrorDevLEdit->setEnabled(false);
        pcvLineErrorDevLEdit->setGeometry(QRect(10, 80, 81, 20));
        pcvLineErrorAvgLEdit = new QLineEdit(currScanLayerErrorStatsGBox);
        pcvLineErrorAvgLEdit->setObjectName(QStringLiteral("pcvLineErrorAvgLEdit"));
        pcvLineErrorAvgLEdit->setEnabled(false);
        pcvLineErrorAvgLEdit->setGeometry(QRect(10, 40, 81, 20));
        ilmLineErrorAvgLEdit_um = new QLineEdit(currScanLayerErrorStatsGBox);
        ilmLineErrorAvgLEdit_um->setObjectName(QStringLiteral("ilmLineErrorAvgLEdit_um"));
        ilmLineErrorAvgLEdit_um->setEnabled(false);
        ilmLineErrorAvgLEdit_um->setGeometry(QRect(110, 130, 81, 20));
        label_30 = new QLabel(currScanLayerErrorStatsGBox);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(10, 20, 181, 16));
        ilmLineErrorAvgLEdit = new QLineEdit(currScanLayerErrorStatsGBox);
        ilmLineErrorAvgLEdit->setObjectName(QStringLiteral("ilmLineErrorAvgLEdit"));
        ilmLineErrorAvgLEdit->setEnabled(false);
        ilmLineErrorAvgLEdit->setGeometry(QRect(10, 130, 81, 20));
        label_31 = new QLabel(currScanLayerErrorStatsGBox);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(10, 60, 211, 16));
        ilmLineErrorDevLEdit_um = new QLineEdit(currScanLayerErrorStatsGBox);
        ilmLineErrorDevLEdit_um->setObjectName(QStringLiteral("ilmLineErrorDevLEdit_um"));
        ilmLineErrorDevLEdit_um->setEnabled(false);
        ilmLineErrorDevLEdit_um->setGeometry(QRect(110, 170, 81, 20));
        label_32 = new QLabel(currScanLayerErrorStatsGBox);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(10, 150, 211, 16));
        ilmLineErrorDevLEdit = new QLineEdit(currScanLayerErrorStatsGBox);
        ilmLineErrorDevLEdit->setObjectName(QStringLiteral("ilmLineErrorDevLEdit"));
        ilmLineErrorDevLEdit->setEnabled(false);
        ilmLineErrorDevLEdit->setGeometry(QRect(10, 170, 81, 20));
        pcvLineErrorDevLEdit_um = new QLineEdit(currScanLayerErrorStatsGBox);
        pcvLineErrorDevLEdit_um->setObjectName(QStringLiteral("pcvLineErrorDevLEdit_um"));
        pcvLineErrorDevLEdit_um->setEnabled(false);
        pcvLineErrorDevLEdit_um->setGeometry(QRect(110, 80, 81, 20));
        label_33 = new QLabel(currScanLayerErrorStatsGBox);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(10, 110, 181, 16));
        pcvLineErrorAvgLEdit_um = new QLineEdit(currScanLayerErrorStatsGBox);
        pcvLineErrorAvgLEdit_um->setObjectName(QStringLiteral("pcvLineErrorAvgLEdit_um"));
        pcvLineErrorAvgLEdit_um->setEnabled(false);
        pcvLineErrorAvgLEdit_um->setGeometry(QRect(110, 40, 81, 20));

        verticalLayout_11->addWidget(currScanLayerErrorStatsGBox);

        groupBox_3 = new QGroupBox(tabErrorAnalysis);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        layerErrorMSEAllLEdit = new QLineEdit(groupBox_3);
        layerErrorMSEAllLEdit->setObjectName(QStringLiteral("layerErrorMSEAllLEdit"));
        layerErrorMSEAllLEdit->setGeometry(QRect(10, 20, 81, 20));
        layerErrorAvgAllLEdit = new QLineEdit(groupBox_3);
        layerErrorAvgAllLEdit->setObjectName(QStringLiteral("layerErrorAvgAllLEdit"));
        layerErrorAvgAllLEdit->setGeometry(QRect(110, 20, 81, 20));

        verticalLayout_11->addWidget(groupBox_3);


        horizontalLayout_7->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_42 = new QLabel(tabErrorAnalysis);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setFont(font);

        verticalLayout_12->addWidget(label_42);

        virtualMapAutoImageCPlot = new QCustomPlot(tabErrorAnalysis);
        virtualMapAutoImageCPlot->setObjectName(QStringLiteral("virtualMapAutoImageCPlot"));
        sizePolicy.setHeightForWidth(virtualMapAutoImageCPlot->sizePolicy().hasHeightForWidth());
        virtualMapAutoImageCPlot->setSizePolicy(sizePolicy);
        virtualMapAutoImageCPlot->setMinimumSize(QSize(401, 461));

        verticalLayout_12->addWidget(virtualMapAutoImageCPlot);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_4);


        horizontalLayout_7->addLayout(verticalLayout_12);


        verticalLayout_14->addLayout(horizontalLayout_7);

        tabWidget->addTab(tabErrorAnalysis, QString());

        horizontalLayout_11->addWidget(tabWidget);

        OCTAnnotate->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(OCTAnnotate);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1260, 21));
        menuPatient = new QMenu(menuBar);
        menuPatient->setObjectName(QStringLiteral("menuPatient"));
        menuAnnotations = new QMenu(menuPatient);
        menuAnnotations->setObjectName(QStringLiteral("menuAnnotations"));
        menuProgram = new QMenu(menuBar);
        menuProgram->setObjectName(QStringLiteral("menuProgram"));
        menuFillLineFrom = new QMenu(menuProgram);
        menuFillLineFrom->setObjectName(QStringLiteral("menuFillLineFrom"));
        menuCompute = new QMenu(menuBar);
        menuCompute->setObjectName(QStringLiteral("menuCompute"));
        menuInfo = new QMenu(menuBar);
        menuInfo->setObjectName(QStringLiteral("menuInfo"));
        OCTAnnotate->setMenuBar(menuBar);
        statusBar = new QStatusBar(OCTAnnotate);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        OCTAnnotate->setStatusBar(statusBar);
        toolBar = new QToolBar(OCTAnnotate);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        OCTAnnotate->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuProgram->menuAction());
        menuBar->addAction(menuPatient->menuAction());
        menuBar->addAction(menuCompute->menuAction());
        menuBar->addAction(menuInfo->menuAction());
        menuPatient->addAction(actionLoadOCTFile);
        menuPatient->addAction(actionLoadOCTSequence);
        menuPatient->addAction(actionSaveOCTExam);
        menuPatient->addAction(actionSaveGeneralExam);
        menuPatient->addSeparator();
        menuPatient->addAction(menuAnnotations->menuAction());
        menuAnnotations->addAction(actionReadAutoSegmentation);
        menuAnnotations->addAction(actionClose_auto_segmentation);
        menuAnnotations->addAction(actionSaveAutoAnnotationsAs);
        menuAnnotations->addAction(actionConvertAutoAnnotations);
        menuAnnotations->addSeparator();
        menuAnnotations->addAction(actionReadManualAnnotations);
        menuAnnotations->addAction(actionSetAutoSegmentationAsManual);
        menuProgram->addAction(actionChangeLayerColor);
        menuProgram->addAction(actionSetScanCenter);
        menuProgram->addAction(menuFillLineFrom->menuAction());
        menuProgram->addSeparator();
        menuProgram->addAction(actionSettings);
        menuProgram->addAction(actionShowETDRSGrid);
        menuProgram->addAction(actionShowCenterOnBscan);
        menuProgram->addSeparator();
        menuProgram->addAction(actionClose);
        menuFillLineFrom->addAction(actionFillFromILM);
        menuFillLineFrom->addAction(actionFillStraight);
        menuCompute->addAction(actionComputeErrorAllScans);
        menuCompute->addAction(actionComputeStatistics);
        menuInfo->addAction(actionInfo);
        toolBar->addAction(actionImageFlattening);
        toolBar->addAction(actionEditAnnotations);
        toolBar->addAction(actionShowETDRSGrid);
        toolBar->addAction(actionShowCenterOnBscan);

        retranslateUi(OCTAnnotate);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OCTAnnotate);
    } // setupUi

    void retranslateUi(QMainWindow *OCTAnnotate)
    {
        OCTAnnotate->setWindowTitle(QApplication::translate("OCTAnnotate", "OCTAnnotate", 0));
        actionSaveGeneralExam->setText(QApplication::translate("OCTAnnotate", "Save general exam data", 0));
        actionSaveOCTExam->setText(QApplication::translate("OCTAnnotate", "Save OCT scan segmentations", 0));
        actionLoadOCTSequence->setText(QApplication::translate("OCTAnnotate", "Load OCT scan folder", 0));
        actionChangeLayerColor->setText(QApplication::translate("OCTAnnotate", "Change layer color", 0));
        actionSetScanCenter->setText(QApplication::translate("OCTAnnotate", "Set scan center", 0));
        actionClose->setText(QApplication::translate("OCTAnnotate", "Close", 0));
        actionSaveAutoAnnotationsAs->setText(QApplication::translate("OCTAnnotate", "Save automatic segmentation as...", 0));
        actionConvertAutoAnnotations->setText(QApplication::translate("OCTAnnotate", "Convert automatic segmentation from XML to TXT", 0));
        actionReadManualAnnotations->setText(QApplication::translate("OCTAnnotate", "Load manual segmentation", 0));
        actionFillFromILM->setText(QApplication::translate("OCTAnnotate", "from ILM", 0));
        actionFillStraight->setText(QApplication::translate("OCTAnnotate", "straight line", 0));
        actionReadAutoSegmentation->setText(QApplication::translate("OCTAnnotate", "Load auto segmentation", 0));
        actionClose_auto_segmentation->setText(QApplication::translate("OCTAnnotate", "Close auto segmentation", 0));
        actionSetAutoSegmentationAsManual->setText(QApplication::translate("OCTAnnotate", "Copy auto segmentation as manual", 0));
        actionShowETDRSGrid->setText(QApplication::translate("OCTAnnotate", "Show ETDRS grid", 0));
        actionSettings->setText(QApplication::translate("OCTAnnotate", "Settings", 0));
        actionShowCenterOnBscan->setText(QApplication::translate("OCTAnnotate", "Show scan center on cross-section", 0));
        actionComputeErrorAllScans->setText(QApplication::translate("OCTAnnotate", "MSE dla wszystkich skan\303\263w", 0));
        actionComputeStatistics->setText(QApplication::translate("OCTAnnotate", "Statystyk\304\231 trakcji dla wybranych skan\303\263w Avanti", 0));
        actionImageFlattening->setText(QApplication::translate("OCTAnnotate", "Image flattening", 0));
#ifndef QT_NO_TOOLTIP
        actionImageFlattening->setToolTip(QApplication::translate("OCTAnnotate", "Image flattening", 0));
#endif // QT_NO_TOOLTIP
        actionEditAnnotations->setText(QApplication::translate("OCTAnnotate", "Edit segmentations", 0));
#ifndef QT_NO_TOOLTIP
        actionEditAnnotations->setToolTip(QApplication::translate("OCTAnnotate", "Edit Annotations", 0));
#endif // QT_NO_TOOLTIP
        actionInfo->setText(QApplication::translate("OCTAnnotate", "Info", 0));
        actionLoadOCTFile->setText(QApplication::translate("OCTAnnotate", "Load OCT scan file (.oct)", 0));
        addPatientDBButton->setText(QApplication::translate("OCTAnnotate", "Add patient", 0));
        editPatientDBButton->setText(QApplication::translate("OCTAnnotate", "Edit patient", 0));
        deletePatientDBButton->setText(QApplication::translate("OCTAnnotate", "Delete patient", 0));
        patienSearchGBox->setTitle(QApplication::translate("OCTAnnotate", "Search", 0));
        searchLastNameLEdit->setText(QString());
        searchLastNameLEdit->setPlaceholderText(QApplication::translate("OCTAnnotate", "Last name", 0));
        searchFirstNameLEdit->setText(QString());
        searchFirstNameLEdit->setPlaceholderText(QApplication::translate("OCTAnnotate", "First name", 0));
        searchGenderCBox->clear();
        searchGenderCBox->insertItems(0, QStringList()
         << QApplication::translate("OCTAnnotate", "gender", 0)
         << QApplication::translate("OCTAnnotate", "Woman", 0)
         << QApplication::translate("OCTAnnotate", "Man", 0)
        );
        searchGenderCBox->setCurrentText(QApplication::translate("OCTAnnotate", "gender", 0));
        searchPathologyCBox->clear();
        searchPathologyCBox->insertItems(0, QStringList()
         << QApplication::translate("OCTAnnotate", "diagnosis", 0)
         << QApplication::translate("OCTAnnotate", "brak", 0)
         << QApplication::translate("OCTAnnotate", "VMA", 0)
         << QApplication::translate("OCTAnnotate", "VMT", 0)
         << QApplication::translate("OCTAnnotate", "ERM", 0)
         << QApplication::translate("OCTAnnotate", "MH", 0)
         << QApplication::translate("OCTAnnotate", "CNV", 0)
         << QApplication::translate("OCTAnnotate", "other", 0)
        );
        searchFileNoLEdit->setText(QString());
        searchFileNoLEdit->setPlaceholderText(QApplication::translate("OCTAnnotate", "File no", 0));
        searchNotesLEdit->setPlaceholderText(QApplication::translate("OCTAnnotate", "Notes", 0));
        searchAgeFromLEdit->setText(QString());
        searchAgeFromLEdit->setPlaceholderText(QApplication::translate("OCTAnnotate", "Age from", 0));
        searchAgeToLEdit->setText(QString());
        searchAgeToLEdit->setPlaceholderText(QApplication::translate("OCTAnnotate", "Age to [years]", 0));
        showAllScansRButton->setText(QApplication::translate("OCTAnnotate", "show all scans for patient", 0));
        showOnlyDefaultScanRButton->setText(QApplication::translate("OCTAnnotate", "show only one scan for patient", 0));
        searchPatientDBButton->setText(QApplication::translate("OCTAnnotate", "Search", 0));
        groupBox_5->setTitle(QApplication::translate("OCTAnnotate", "Visual acuity i M-Charts", 0));
        label_9->setText(QApplication::translate("OCTAnnotate", "OD", 0));
        label_10->setText(QApplication::translate("OCTAnnotate", "OS", 0));
        label_7->setText(QApplication::translate("OCTAnnotate", "Vis:", 0));
        label_8->setText(QApplication::translate("OCTAnnotate", "Sn:", 0));
        label_35->setText(QApplication::translate("OCTAnnotate", "Vertical:", 0));
        label_36->setText(QApplication::translate("OCTAnnotate", "Horizontal:", 0));
        fundusDBLabel->setText(QApplication::translate("OCTAnnotate", "Fundus", 0));
        label_47->setText(QApplication::translate("OCTAnnotate", "Display scans for:", 0));
        scanListGroupCBox->clear();
        scanListGroupCBox->insertItems(0, QStringList()
         << QApplication::translate("OCTAnnotate", "one patient", 0)
         << QApplication::translate("OCTAnnotate", "filtered patients", 0)
         << QApplication::translate("OCTAnnotate", "all patients", 0)
        );
        searchForScansButton->setText(QApplication::translate("OCTAnnotate", "Search for scans", 0));
        addScanFolderButton->setText(QApplication::translate("OCTAnnotate", "Add OCT scan folder", 0));
        addScanFileButton->setText(QApplication::translate("OCTAnnotate", "Add .OCT scan file", 0));
        batchProcessingButton->setText(QApplication::translate("OCTAnnotate", "Batch processing", 0));
        bscanHLabel->setText(QApplication::translate("OCTAnnotate", "Bscan Horizontal", 0));
        bscanVLabel->setText(QApplication::translate("OCTAnnotate", "Bscan Vertical", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabDatabase), QApplication::translate("OCTAnnotate", "Patients", 0));
        label_2->setText(QApplication::translate("OCTAnnotate", "Image:", 0));
        imageNumberLabel->setText(QString());
        zoomOutButton->setText(QApplication::translate("OCTAnnotate", "-", 0));
        zoomInButton->setText(QApplication::translate("OCTAnnotate", "+", 0));
        prevImageButton->setText(QApplication::translate("OCTAnnotate", "Upper", 0));
        currImageNumberLEdit->setText(QApplication::translate("OCTAnnotate", "0", 0));
        nextImageButton->setText(QApplication::translate("OCTAnnotate", "Lower", 0));
        prevNormalImageButton->setText(QApplication::translate("OCTAnnotate", "Left", 0));
        currNormalImageNumberLEdit->setText(QApplication::translate("OCTAnnotate", "0", 0));
        nextNormalImageButton->setText(QApplication::translate("OCTAnnotate", "Right", 0));
        editLayerGBox->setTitle(QApplication::translate("OCTAnnotate", "Edit layers", 0));
        pcvLayerRButton->setText(QApplication::translate("OCTAnnotate", "PCV", 0));
        ilmLayerRButton->setText(QApplication::translate("OCTAnnotate", "ILM", 0));
        pcvColorLabel->setText(QString());
        ilmColorLabel->setText(QString());
        inlLayerRButton->setText(QApplication::translate("OCTAnnotate", "IPL/INL", 0));
        oplLayerRButton->setText(QApplication::translate("OCTAnnotate", "INL/OPL", 0));
        onlLayerRButton->setText(QApplication::translate("OCTAnnotate", "OPL/ONL", 0));
        elmLayerRButton->setText(QApplication::translate("OCTAnnotate", "ELM", 0));
        inlColorLabel->setText(QString());
        oplColorLabel->setText(QString());
        onlColorLabel->setText(QString());
        elmColorLabel->setText(QString());
        pcvLayerCBox->setText(QString());
        pcvAnnotCountLabel->setText(QApplication::translate("OCTAnnotate", "( --- / --- )", 0));
        ilmLayerCBox->setText(QString());
        ilmAnnotCountLabel->setText(QApplication::translate("OCTAnnotate", "( --- / --- )", 0));
        inlLayerCBox->setText(QString());
        inlAnnotCountLabel->setText(QApplication::translate("OCTAnnotate", "( --- / --- )", 0));
        oplLayerCBox->setText(QString());
        oplAnnotCountLabel->setText(QApplication::translate("OCTAnnotate", "( --- / --- )", 0));
        onlLayerCBox->setText(QString());
        onlAnnotCountLabel->setText(QApplication::translate("OCTAnnotate", "( --- / --- )", 0));
        elmLayerCBox->setText(QString());
        elmAnnotCountLabel->setText(QApplication::translate("OCTAnnotate", "( --- / --- )", 0));
        gclLayerCBox->setText(QString());
        gclLayerRButton->setText(QApplication::translate("OCTAnnotate", "NFL/GCL", 0));
        gclColorLabel->setText(QString());
        gclAnnotCountLabel->setText(QApplication::translate("OCTAnnotate", "( --- / --- )", 0));
        iplLayerCBox->setText(QString());
        iplLayerRButton->setText(QApplication::translate("OCTAnnotate", "GCL/IPL", 0));
        iplColorLabel->setText(QString());
        iplAnnotCountLabel->setText(QApplication::translate("OCTAnnotate", "( --- / --- )", 0));
        mezLayerCBox->setText(QString());
        mezLayerRButton->setText(QApplication::translate("OCTAnnotate", "Myoid/Ellipsoid", 0));
        mezAnnotCountLabel->setText(QApplication::translate("OCTAnnotate", "( --- / --- )", 0));
        iosLayerCBox->setText(QString());
        iosLayerRButton->setText(QApplication::translate("OCTAnnotate", "IS/OS", 0));
        iosAnnotCountLabel->setText(QApplication::translate("OCTAnnotate", "( --- / --- )", 0));
        rpeLayerCBox->setText(QString());
        rpeLayerRButton->setText(QApplication::translate("OCTAnnotate", "OS/RPE", 0));
        rpeAnnotCountLabel->setText(QApplication::translate("OCTAnnotate", "( --- / --- )", 0));
        chrLayerCBox->setText(QString());
        chrLayerRButton->setText(QApplication::translate("OCTAnnotate", "RPE/Choroid", 0));
        chrAnnotCountLabel->setText(QApplication::translate("OCTAnnotate", "( --- / --- )", 0));
        mezColorLabel->setText(QString());
        iosColorLabel->setText(QString());
        rpeColorLabel->setText(QString());
        chrColorLabel->setText(QString());
        ermLayerCBox->setText(QString());
        ermLayerRButton->setText(QApplication::translate("OCTAnnotate", "ERM", 0));
        ermColorLabel->setText(QString());
        ermAnnotCountLabel->setText(QApplication::translate("OCTAnnotate", "( --- / --- )", 0));
        allLayersCBox->setText(QApplication::translate("OCTAnnotate", "Show all layers", 0));
        contrastResetButton->setText(QApplication::translate("OCTAnnotate", "Contrast", 0));
        brightnessResetButton->setText(QApplication::translate("OCTAnnotate", "Brightness", 0));
        fundusImageLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabOCTExam), QApplication::translate("OCTAnnotate", "OCT cross-sections", 0));
        layersToPlotGBox->setTitle(QApplication::translate("OCTAnnotate", "Wyb\303\263r warstw do rysowania", 0));
        elmLayerCBox_2->setText(QApplication::translate("OCTAnnotate", "ELM", 0));
        ermLayerCBox_2->setText(QApplication::translate("OCTAnnotate", "ERM", 0));
        iplLayerCBox_2->setText(QApplication::translate("OCTAnnotate", "GCL / IPL", 0));
        oplLayerCBox_2->setText(QApplication::translate("OCTAnnotate", "INL / OPL", 0));
        iosLayerCBox_2->setText(QApplication::translate("OCTAnnotate", "IS / OS", 0));
        inlLayerCBox_2->setText(QApplication::translate("OCTAnnotate", "IPL / INL", 0));
        rpeLayerCBox_2->setText(QApplication::translate("OCTAnnotate", "OS / RPE", 0));
        pcvLayerCBox_2->setText(QApplication::translate("OCTAnnotate", "PCV", 0));
        ilmLayerCBox_2->setText(QApplication::translate("OCTAnnotate", "ILM", 0));
        chrLayerCBox_2->setText(QApplication::translate("OCTAnnotate", "RPE / Choroid", 0));
        gclLayerCBox_2->setText(QApplication::translate("OCTAnnotate", "NFL / GCL", 0));
        onlLayerCBox_2->setText(QApplication::translate("OCTAnnotate", "OPL / ONL", 0));
        mezLayerCBox_2->setText(QApplication::translate("OCTAnnotate", "Myoid / Ellipsoid", 0));
        plotLayersButton->setText(QApplication::translate("OCTAnnotate", "Wy\305\233wietl", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabRetinaAnalysis), QApplication::translate("OCTAnnotate", "Retina analysis", 0));
        computeVirtualMapButton->setText(QApplication::translate("OCTAnnotate", "Oblicz / Od\305\233wie\305\274 wirtualn\304\205 map\304\231", 0));
        groupBox->setTitle(QApplication::translate("OCTAnnotate", "Select layers:", 0));
        label_39->setText(QApplication::translate("OCTAnnotate", "Layer 1:", 0));
        label_40->setText(QApplication::translate("OCTAnnotate", "Layer 2:", 0));
        groupBox_4->setTitle(QApplication::translate("OCTAnnotate", "Retina statistics", 0));
        label_28->setText(QApplication::translate("OCTAnnotate", "Thickness [um]:", 0));
        label_3->setText(QApplication::translate("OCTAnnotate", "Volume (d=3mm) [mm3]:", 0));
        label_4->setText(QApplication::translate("OCTAnnotate", "Preretinal volume d=3mm [mm3]:", 0));
        label_5->setText(QApplication::translate("OCTAnnotate", "Fovea pit volume d=3mm [mm3]:", 0));
        groupBox_2->setTitle(QApplication::translate("OCTAnnotate", "Contact area [mm2]", 0));
        label_43->setText(QApplication::translate("OCTAnnotate", "Threshold:", 0));
        label_16->setText(QApplication::translate("OCTAnnotate", "Area CF:", 0));
        contactAreaCFLEdit->setText(QApplication::translate("OCTAnnotate", "0", 0));
        contactAreaProcCFLabel->setText(QString());
        label_29->setText(QApplication::translate("OCTAnnotate", "Area IM:", 0));
        contactAreaIMLEdit->setText(QApplication::translate("OCTAnnotate", "0", 0));
        contactAreaProcIMLabel->setText(QString());
        label_34->setText(QApplication::translate("OCTAnnotate", "Area OM:", 0));
        contactAreaOMLEdit->setText(QApplication::translate("OCTAnnotate", "0", 0));
        contactAreaProcOMLabel->setText(QString());
        label_46->setText(QApplication::translate("OCTAnnotate", "Virtual map volumetric analysis:", 0));
        label_41->setText(QApplication::translate("OCTAnnotate", "Virtual map for selected layers:", 0));
        label->setText(QApplication::translate("OCTAnnotate", "Value:", 0));
        virtualMapValueHoverLabel->setText(QString());
        label_45->setText(QApplication::translate("OCTAnnotate", "Retina thickness:", 0));
        label_6->setText(QApplication::translate("OCTAnnotate", "Value:", 0));
        retinaThicknessMapHoverValueLabel->setText(QString());
        label_44->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabVirtualMap), QApplication::translate("OCTAnnotate", "Virtual map", 0));
        label_12->setText(QApplication::translate("OCTAnnotate", "Loaded file:", 0));
        autoSegmentFileLabel->setText(QString());
        prevImageLayersButton->setText(QApplication::translate("OCTAnnotate", "Previous", 0));
        nextImageLayersButton->setText(QApplication::translate("OCTAnnotate", "Next", 0));
        virtualMapErrorStatsGBox->setTitle(QApplication::translate("OCTAnnotate", "Virtual map statistics", 0));
        label_17->setText(QApplication::translate("OCTAnnotate", "Average error", 0));
        label_21->setText(QApplication::translate("OCTAnnotate", "Standard deviation", 0));
        layersErrorStatsGBox->setTitle(QApplication::translate("OCTAnnotate", "Layers statistics", 0));
        label_27->setText(QApplication::translate("OCTAnnotate", "Standard deviation", 0));
        label_25->setText(QApplication::translate("OCTAnnotate", "Average error for:", 0));
        label_26->setText(QApplication::translate("OCTAnnotate", "Percent of erroneous segmentations:", 0));
        currScanLayerErrorStatsGBox->setTitle(QApplication::translate("OCTAnnotate", "Current scan statistics", 0));
        label_30->setText(QApplication::translate("OCTAnnotate", "Average error for PCV layer:", 0));
        label_31->setText(QApplication::translate("OCTAnnotate", "Standard deviation for PCV layer:", 0));
        label_32->setText(QApplication::translate("OCTAnnotate", "Standard deviation for ILM layer:", 0));
        label_33->setText(QApplication::translate("OCTAnnotate", "Average error for ILM layer:", 0));
        groupBox_3->setTitle(QApplication::translate("OCTAnnotate", "Error for all scans", 0));
        label_42->setText(QApplication::translate("OCTAnnotate", "Virtual map of automatic segmentations:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabErrorAnalysis), QApplication::translate("OCTAnnotate", "Error analysis", 0));
        menuPatient->setTitle(QApplication::translate("OCTAnnotate", "Patient", 0));
        menuAnnotations->setTitle(QApplication::translate("OCTAnnotate", "Segmentations", 0));
        menuProgram->setTitle(QApplication::translate("OCTAnnotate", "Program", 0));
        menuFillLineFrom->setTitle(QApplication::translate("OCTAnnotate", "Fill line from points", 0));
        menuCompute->setTitle(QApplication::translate("OCTAnnotate", "Oblicz", 0));
        menuInfo->setTitle(QApplication::translate("OCTAnnotate", "Help", 0));
        toolBar->setWindowTitle(QApplication::translate("OCTAnnotate", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class OCTAnnotate: public Ui_OCTAnnotate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCTANNOTATE_H
