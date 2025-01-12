//
//     Generated by private class-dump
//

@class UIView;
@protocol IESLivePipViewService;

@interface IESLivePipWindowView : UIView {
    UIView<IESLivePipViewService> *_pipView;
}

@property (retain, nonatomic) UIView<IESLivePipViewService> *pipView;

- (id)pipView;
- (void)setPipView:(id)arg0;
- (void)updatePipView:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachArea;
- (void)p_popGestureActions:(id)arg0;
- (BOOL)p_isAttachToLeft;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)clear;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;

@end
