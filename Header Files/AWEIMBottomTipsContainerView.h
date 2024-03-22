//
//     Generated by private class-dump
//

@class NSTimer, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface AWEIMBottomTipsContainerView : UIView {
    BOOL _isAutoDismiss;
    BOOL _isDismissAfterTapAction;
    BOOL _needRevise;
    BOOL _willConfirm;
    UIView *_contentView;
    double _showTime;
    double _bottomPadding;
    id /* block */ _tapViewBlock;
    UIView *_tapArea;
    id /* block */ _confirmBlock;
    id /* block */ _dismissCompletionBlock;
    id /* block */ _willDismissBlock;
    id /* block */ _didShowBlock;
    NSTimer *_showTimer;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_panGesture;
    struct CGPoint { double x; double y; } _originCenter;
}

@property (retain, nonatomic) NSTimer *showTimer;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGPoint { double x; double y; } originCenter;
@property (nonatomic) BOOL willConfirm;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL isAutoDismiss;
@property (nonatomic) BOOL isDismissAfterTapAction;
@property (nonatomic) double showTime;
@property (nonatomic) double bottomPadding;
@property (nonatomic) BOOL needRevise;
@property (copy, nonatomic) id /* block */ tapViewBlock;
@property (retain, nonatomic) UIView *tapArea;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ dismissCompletionBlock;
@property (copy, nonatomic) id /* block */ willDismissBlock;
@property (copy, nonatomic) id /* block */ didShowBlock;

- (id /* block */)didShowBlock;
- (void)setDidShowBlock:(id /* block */)arg0;
- (void)setWillDismissBlock:(id /* block */)arg0;
- (id /* block */)willDismissBlock;
- (id /* block */)confirmBlock;
- (void)setShowTimer:(id)arg0;
- (double)showTime;
- (void)setShowTime:(double)arg0;
- (void)setConfirmBlock:(id /* block */)arg0;
- (void)tapGestureAction:(id)arg0;
- (void)panGestureAction:(id)arg0;
- (void)setBottomPadding:(double)arg0 needReviseAreaInset:(BOOL)arg1;
- (void)_initUI;
- (void)_initProperties;
- (BOOL)isAutoDismiss;
- (BOOL)needRevise;
- (id /* block */)tapViewBlock;
- (void)__resetTimer;
- (BOOL)isDismissAfterTapAction;
- (void)showLongPressShareAlertIfNeeded;
- (void)__autoDismissIfNeed;
- (void)setTapArea:(id)arg0;
- (void)tapActionEnable:(BOOL)arg0;
- (void)setIsAutoDismiss:(BOOL)arg0;
- (void)setIsDismissAfterTapAction:(BOOL)arg0;
- (void)setNeedRevise:(BOOL)arg0;
- (void)setTapViewBlock:(id /* block */)arg0;
- (id)tapArea;
- (struct CGPoint { double x0; double x1; })originCenter;
- (void)setOriginCenter:(struct CGPoint { double x0; double x1; })arg0;
- (void)setWillConfirm:(BOOL)arg0;
- (void)dismiss;
- (void).cxx_destruct;
- (double)bottomPadding;
- (void)show;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)tapGesture;
- (id)contentView;
- (void)dealloc;
- (void)dismissWithAnimation:(BOOL)arg0;
- (void)setContentView:(id)arg0;
- (id)showTimer;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (void)setBottomPadding:(double)arg0;
- (void)timerAction;
- (void)setTapGesture:(id)arg0;
- (id /* block */)dismissCompletionBlock;
- (void)setDismissCompletionBlock:(id /* block */)arg0;
- (BOOL)willConfirm;

@end
