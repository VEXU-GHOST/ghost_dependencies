/********************************************************************************
** Form generated from reading UI file 'protobuf_parser.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROTOBUF_PARSER_H
#define UI_PROTOBUF_PARSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProtobufLoader
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonLoad;
    QLineEdit *loadedProto;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label;
    QTextBrowser *protoPreview;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonInclude;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonRemove;
    QListWidget *listWidget;

    void setupUi(QWidget *ProtobufLoader)
    {
        if (ProtobufLoader->objectName().isEmpty())
            ProtobufLoader->setObjectName(QString::fromUtf8("ProtobufLoader"));
        ProtobufLoader->resize(423, 374);
        verticalLayout = new QVBoxLayout(ProtobufLoader);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        tabWidget = new QTabWidget(ProtobufLoader);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        verticalLayout_3->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 10, -1, -1);
        pushButtonLoad = new QPushButton(tab);
        pushButtonLoad->setObjectName(QString::fromUtf8("pushButtonLoad"));

        horizontalLayout_3->addWidget(pushButtonLoad);

        loadedProto = new QLineEdit(tab);
        loadedProto->setObjectName(QString::fromUtf8("loadedProto"));
        loadedProto->setReadOnly(true);

        horizontalLayout_3->addWidget(loadedProto);


        verticalLayout_3->addLayout(horizontalLayout_3);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_3->addWidget(comboBox);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        protoPreview = new QTextBrowser(tab);
        protoPreview->setObjectName(QString::fromUtf8("protoPreview"));

        verticalLayout_3->addWidget(protoPreview);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        verticalLayout_2->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 10, -1, -1);
        pushButtonInclude = new QPushButton(tab_2);
        pushButtonInclude->setObjectName(QString::fromUtf8("pushButtonInclude"));

        horizontalLayout->addWidget(pushButtonInclude);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonRemove = new QPushButton(tab_2);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));
        pushButtonRemove->setMinimumSize(QSize(26, 26));
        pushButtonRemove->setMaximumSize(QSize(26, 26));
        pushButtonRemove->setFlat(true);

        horizontalLayout->addWidget(pushButtonRemove);


        verticalLayout_2->addLayout(horizontalLayout);

        listWidget = new QListWidget(tab_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_2->addWidget(listWidget);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(ProtobufLoader);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ProtobufLoader);
    } // setupUi

    void retranslateUi(QWidget *ProtobufLoader)
    {
        ProtobufLoader->setWindowTitle(QCoreApplication::translate("ProtobufLoader", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("ProtobufLoader", "To parse a protobuf message, you need to load its definition from file and specify its type explicitly.", nullptr));
        pushButtonLoad->setText(QCoreApplication::translate("ProtobufLoader", "Load .proto file", nullptr));
        label_3->setText(QCoreApplication::translate("ProtobufLoader", "Select your message type:", nullptr));
        label->setText(QCoreApplication::translate("ProtobufLoader", "File text:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("ProtobufLoader", "Proto File", nullptr));
        label_4->setText(QCoreApplication::translate("ProtobufLoader", "If you have problems loading a .proto file that import other files, you might need to include some additional folders.", nullptr));
        pushButtonInclude->setText(QCoreApplication::translate("ProtobufLoader", "Add include Folder", nullptr));
        pushButtonRemove->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("ProtobufLoader", "Include Folders", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProtobufLoader: public Ui_ProtobufLoader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROTOBUF_PARSER_H
