#include <iostream>

namespace bridge {

    class WindowImp {
    public:
        virtual void DevDrawText() = 0;
        virtual void DevDrawLine() = 0;
    };

    class XWindowImp : public WindowImp {
    public:
        void DevDrawText() override {
            std::cout << "XWindow: ������ �����\n";
        }
        void DevDrawLine() override {
            std::cout << "XWindow: ������ �����\n";
        }
    };

    class PMWindowImp : public WindowImp {
    public:
        void DevDrawText() override {
            std::cout << "PMWindow: ������ �����\n";
        }
        void DevDrawLine() override {
            std::cout << "PMWindow: ������ �����\n";
        }
    };

    class Window {
    protected:
        WindowImp* imp;
    public:
        Window(WindowImp* imp) : imp(imp) {}

        virtual void Draw_Text() {
            imp->DevDrawText();
        }

        virtual void Draw_Rect() {
            imp->DevDrawLine();
            imp->DevDrawLine();
            imp->DevDrawLine();
            imp->DevDrawLine();
        }
    };

    class IconWindow : public Window {
    public:
        IconWindow(WindowImp* imp) : Window(imp) {}

        void DrawBorder() {
            std::cout << "IconWindow: ������ �������\n";
        }
    };

    class TransientWindow : public Window {
    public:
        TransientWindow(WindowImp* imp) : Window(imp) {}

        void DrawCloseBox() {
            std::cout << "TransientWindow: ������ ������ ��������\n";
        }
    };
}