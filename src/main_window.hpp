#ifndef MICASA_MAIN_WINDOW_HPP_
#define MICASA_MAIN_WINDOW_HPP_

#include "image/view.hpp"

#include <QMainWindow>
#include <QWidget>

namespace micasa {

class main_window : public QMainWindow
{
public:
	main_window();

protected:
	void keyPressEvent(QKeyEvent* event) override;
	void resizeEvent(QResizeEvent* event) override;

private:
	QWidget* _background;
	image::view* _view;
};

} // namespace micasa

#endif