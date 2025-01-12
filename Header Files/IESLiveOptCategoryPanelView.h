//
//     Generated by private class-dump
//

@class UIView;

@interface IESLiveOptCategoryPanelView : UIView {
    double _panelToKeyboardTopDistance;
    UIView *_containerView;
}

@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) double panelToKeyboardTopDistance;

- (void)addKeyboardNotification;
- (void)removeKeyboardNotification;
- (double)panelToKeyboardTopDistance;
- (void)setPanelToKeyboardTopDistance:(double)arg0;
- (void).cxx_destruct;
- (void)keyboardFrameChanged:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;

@end
