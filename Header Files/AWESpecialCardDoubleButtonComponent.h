//
//     Generated by private class-dump
//

@class DUXButton, AWESpecialCardDoubleButtonComponentConfig;

@interface AWESpecialCardDoubleButtonComponent : UIView {
    AWESpecialCardDoubleButtonComponentConfig *_componentConfig;
    DUXButton *_leftButton;
    DUXButton *_rightButton;
}

@property (retain, nonatomic) DUXButton *leftButton;
@property (retain, nonatomic) DUXButton *rightButton;
@property (copy, nonatomic) AWESpecialCardDoubleButtonComponentConfig *componentConfig;

- (id)componentConfig;
- (void)setComponentConfig:(id)arg0;
- (id)getDefaultButton;
- (void)setLeftButton:(id)arg0;
- (id)leftButton;
- (id)rightButton;
- (void).cxx_destruct;
- (void)setRightButton:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (void)updateButton;

@end
