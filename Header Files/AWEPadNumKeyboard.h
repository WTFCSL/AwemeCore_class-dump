//
//     Generated by private class-dump
//

@class NSMutableArray, UIStackView;
@protocol AWEPadNumKeyboardDelegate;

@interface AWEPadNumKeyboard : UIView {
    NSMutableArray *_keyboardButtons;
    id<AWEPadNumKeyboardDelegate> _delegate;
    UIStackView *_containerView;
}

@property (retain, nonatomic) NSMutableArray *keyboardButtons;
@property (weak, nonatomic) id<AWEPadNumKeyboardDelegate> delegate;
@property (retain, nonatomic) UIStackView *containerView;

- (void)p_setupUI;
- (id)p_systemKeyboardColor;
- (void)p_setNumButtonWithIndex:(long long)arg0;
- (void)p_setDeleteButton;
- (void)setKeyBoard;
- (void)orientationWillChange;
- (void)p_setVerticalKeyBoard;
- (void)p_setHorizontalKeyBoard;
- (id)keyboardButtons;
- (void)setKeyboardButtons:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (id)containerView;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)buttonTouchDown:(id)arg0;
- (void)buttonTouchUp:(id)arg0;
- (void)orientationDidChange;

@end