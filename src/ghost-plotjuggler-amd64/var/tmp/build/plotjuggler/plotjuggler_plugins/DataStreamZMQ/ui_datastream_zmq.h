/********************************************************************************
** Form generated from reading UI file 'datastream_zmq.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASTREAM_ZMQ_H
#define UI_DATASTREAM_ZMQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataStreamZMQ
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QRadioButton *radioConnect;
    QRadioButton *radioBind;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QLineEdit *lineEditAddress;
    QLineEdit *lineEditPort;
    QLabel *label_6;
    QComboBox *comboBoxProtocol;
    QWidget *boxOptions;
    QVBoxLayout *layoutOptions;
    QLabel *label_5;
    QLabel *label_7;
    QLineEdit *lineEditTopics;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DataStreamZMQ)
    {
        if (DataStreamZMQ->objectName().isEmpty())
            DataStreamZMQ->setObjectName(QString::fromUtf8("DataStreamZMQ"));
        DataStreamZMQ->resize(550, 400);
        DataStreamZMQ->setMinimumSize(QSize(550, 400));
        verticalLayout = new QVBoxLayout(DataStreamZMQ);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(DataStreamZMQ);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        radioConnect = new QRadioButton(DataStreamZMQ);
        radioConnect->setObjectName(QString::fromUtf8("radioConnect"));
        radioConnect->setChecked(true);

        verticalLayout->addWidget(radioConnect);

        radioBind = new QRadioButton(DataStreamZMQ);
        radioBind->setObjectName(QString::fromUtf8("radioBind"));

        verticalLayout->addWidget(radioBind);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(DataStreamZMQ);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(DataStreamZMQ);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_4 = new QLabel(DataStreamZMQ);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        comboBox = new QComboBox(DataStreamZMQ);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 1, 0, 1, 1);

        lineEditAddress = new QLineEdit(DataStreamZMQ);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));

        gridLayout->addWidget(lineEditAddress, 1, 1, 1, 1);

        lineEditPort = new QLineEdit(DataStreamZMQ);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));

        gridLayout->addWidget(lineEditPort, 1, 2, 1, 1);

        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 1);

        verticalLayout->addLayout(gridLayout);

        label_6 = new QLabel(DataStreamZMQ);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        comboBoxProtocol = new QComboBox(DataStreamZMQ);
        comboBoxProtocol->setObjectName(QString::fromUtf8("comboBoxProtocol"));

        verticalLayout->addWidget(comboBoxProtocol);

        boxOptions = new QWidget(DataStreamZMQ);
        boxOptions->setObjectName(QString::fromUtf8("boxOptions"));
        layoutOptions = new QVBoxLayout(boxOptions);
        layoutOptions->setObjectName(QString::fromUtf8("layoutOptions"));
        layoutOptions->setContentsMargins(0, 6, 0, 6);
        label_5 = new QLabel(boxOptions);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font2;
        font2.setBold(true);
        label_5->setFont(font2);

        layoutOptions->addWidget(label_5);


        verticalLayout->addWidget(boxOptions);

        label_7 = new QLabel(DataStreamZMQ);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);

        verticalLayout->addWidget(label_7);

        lineEditTopics = new QLineEdit(DataStreamZMQ);
        lineEditTopics->setObjectName(QString::fromUtf8("lineEditTopics"));

        verticalLayout->addWidget(lineEditTopics);

        verticalSpacer = new QSpacerItem(20, 76, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(DataStreamZMQ);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DataStreamZMQ);
        QObject::connect(buttonBox, SIGNAL(accepted()), DataStreamZMQ, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DataStreamZMQ, SLOT(reject()));

        QMetaObject::connectSlotsByName(DataStreamZMQ);
    } // setupUi

    void retranslateUi(QDialog *DataStreamZMQ)
    {
        DataStreamZMQ->setWindowTitle(QCoreApplication::translate("DataStreamZMQ", "ZMQ Subscriber", nullptr));
        label->setText(QCoreApplication::translate("DataStreamZMQ", "Connection (ZMQ_SUB)", nullptr));
        radioConnect->setText(QCoreApplication::translate("DataStreamZMQ", "Connect (connect to server)", nullptr));
        radioBind->setText(QCoreApplication::translate("DataStreamZMQ", "Bind (accept connections)", nullptr));
        label_2->setText(QCoreApplication::translate("DataStreamZMQ", "Transport", nullptr));
        label_3->setText(QCoreApplication::translate("DataStreamZMQ", "Address", nullptr));
        label_4->setText(QCoreApplication::translate("DataStreamZMQ", "Port", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("DataStreamZMQ", "tcp://", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("DataStreamZMQ", "ipc://", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("DataStreamZMQ", "pgm://", nullptr));

        label_6->setText(QCoreApplication::translate("DataStreamZMQ", "Message Protocol:", nullptr));
        label_5->setText(QCoreApplication::translate("DataStreamZMQ", "Protocol options:", nullptr));
        label_7->setText(QCoreApplication::translate("DataStreamZMQ", "Topics:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataStreamZMQ: public Ui_DataStreamZMQ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASTREAM_ZMQ_H
