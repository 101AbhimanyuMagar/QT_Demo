#include <QApplication>
#include <QTextEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QWidget>
#include <QDialog>
#include <QLabel>
#include <QFont>
#include <QPlainTextEdit>



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    window.setWindowTitle("Text Editor");

    QTextEdit textEdit(&window);

    QPushButton boldButton("Bold", &window);
    QObject::connect(&boldButton, &QPushButton::clicked, [&](){
        QTextCharFormat fmt;
        fmt.setFontWeight(textEdit.fontWeight() == QFont::Bold ? QFont::Normal : QFont::Bold);
        textEdit.mergeCurrentCharFormat(fmt);
    });

    QPushButton superscriptButton("Superscript", &window);
    QObject::connect(&superscriptButton, &QPushButton::clicked, [&](){
        QTextCharFormat fmt;
        fmt.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
        textEdit.mergeCurrentCharFormat(fmt);
    });

    QPushButton subscriptButton("Subscript", &window);
    QObject::connect(&subscriptButton, &QPushButton::clicked, [&](){
        QTextCharFormat fmt;
        fmt.setVerticalAlignment(QTextCharFormat::AlignSubScript);
        textEdit.mergeCurrentCharFormat(fmt);
    });
//
    QPushButton aboutMeButton("About Me", &window);
        QObject::connect(&aboutMeButton, &QPushButton::clicked, [&](){
            QDialog dialog(&window);
            dialog.setWindowTitle("About Me");
            dialog.setMinimumSize(500, 500);

            QFont titleFont("Arial", 16, QFont::Bold);

//            QMargins margins = dialog.contentsMargins();
//            margins.setTop(60);
//            dialog.setContentsMargins(margins);


            QLabel nameLabel("ABHIMANYU MAGAR", &dialog);
            QFont nameFont("Arial", 20, QFont::Bold);
            nameLabel.setFont(nameFont);

            QLabel contactLabel("+919325872719  |  abhimannyumagar77@gmail.com", &dialog);
            QFont contactFont("Arial", 12);
            contactLabel.setFont(contactFont);

            QLabel locationLabel("Pune, India", &dialog);
            QFont locationFont("Arial", 12);
            locationLabel.setFont(locationFont);

            QLabel objectiveLabel("OBJECTIVE", &dialog);
            objectiveLabel.setFont(titleFont);

            QLabel objectiveTextLabel("A goal-oriented software engineer looking for internship and use my expertise in software development and computer programming to create high-quality applications", &dialog);
            QFont objectiveTextFont("Arial", 12);
            objectiveTextLabel.setFont(objectiveTextFont);

            QLabel educationLabel("EDUCATION", &dialog);
            educationLabel.setFont(titleFont);

            QLabel beLabel("Bachelore of Engineering - Information Technology, Expected 2024\nSinhgad College Of Engineering, Pune  CGPA - 8.67/10", &dialog);
            QFont beFont("Arial", 12);
            beLabel.setFont(beFont);

            QLabel hsLabel("Higher Secondary School 2018 - 2020\nNavbharat Junior College - 69%", &dialog);
            hsLabel.setFont(beFont);

            QLabel ssLabel("Secondary School 2017 - 2018\nNavbharat High School - 76%", &dialog);
            ssLabel.setFont(beFont);

            QLabel skillsLabel("TECHNICAL SKILLS", &dialog);
            skillsLabel.setFont(titleFont);

            QLabel skillsTextLabel("Programming Languages - C++, C, Python\nWeb Development - JavaScript, NodeJS, ExpressJS, ReactJS, Tailwind CSS\nDatabases - MySQL, MongoDB\nCS Fundamental - OOPS, OS, DBMS, Data Structure, Algorithms, Computer Networks", &dialog);
            skillsTextLabel.setFont(objectiveTextFont);

            QLabel projectsLabel("PROJECTS", &dialog);
            projectsLabel.setFont(titleFont);

            QLabel ytLabel("Youtube 2.0 | Tech Stack - React.js, Tailwind CSS", &dialog);
            ytLabel.setFont(beFont);
            QLabel ytDescLabel("- Developed an application that shows YouTube videos without Ad’s by using Rapid API youtube v3\n- Using react it’s fast to rendering and tailwind use to responsive for all devices", &dialog);
            ytDescLabel.setFont(objectiveTextFont);
            QLabel ytGithubLabel("§ GitHub", &dialog);
            ytGithubLabel.setFont(beFont);

            QLabel adLabel("ApniDukan | Tech Stack - HTML, CSS", &dialog);
            adLabel.setFont(beFont);
            QLabel adDescLabel("- Built a e-commerce application helps to buy products for kids and young peoples\n- One place for by daily products for kids, majorly work on animation it likes to customers", &dialog);
            adDescLabel.setFont(objectiveTextFont);
            QLabel adGithubLabel("GitHub", &dialog);
            adGithubLabel.setFont(beFont);

            QLabel portLabel("Portfolio | Tech Stack - React.js, Tailwind CSS", &dialog);
            portLabel.setFont(beFont);
            QLabel portDescLabel("- Single page website using react", &dialog);

            // Creating layout for dialog box
            QVBoxLayout layout(&dialog);
            layout.addWidget(&nameLabel);
            layout.addWidget(&contactLabel);
            layout.addWidget(&locationLabel);
            layout.addSpacing(20);
            layout.addWidget(&objectiveLabel);
            layout.addWidget(&objectiveTextLabel);
            layout.addSpacing(20);
            layout.addWidget(&educationLabel);
            layout.addWidget(&beLabel);
            layout.addWidget(&hsLabel);
            layout.addWidget(&ssLabel);
            layout.addSpacing(20);
            layout.addWidget(&skillsLabel);
            layout.addWidget(&skillsTextLabel);
            layout.addSpacing(20);
            layout.addWidget(&projectsLabel);
            layout.addWidget(&ytLabel);
            layout.addWidget(&ytDescLabel);
            layout.addWidget(&ytGithubLabel);
            layout.addWidget(&adLabel);
            layout.addWidget(&adDescLabel);
            layout.addWidget(&adGithubLabel);
            layout.addWidget(&portLabel);
            layout.addWidget(&portDescLabel);

            // Executing the dialog box
            dialog.exec();
        });





    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(&textEdit);
    layout->addWidget(&boldButton);
    layout->addWidget(&superscriptButton);
    layout->addWidget(&subscriptButton);
    layout->addWidget(&aboutMeButton);
    window.setLayout(layout);

    window.show();
    return app.exec();
}
