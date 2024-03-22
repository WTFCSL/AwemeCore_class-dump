//
//     Generated by private class-dump
//

@class IESECPopoverBubbleView, UIColor, UIView;

@interface IESECPopoverDialog : UIView {
    BOOL _blankGestureThrough;
    BOOL _blankGestureDismiss;
    BOOL _targetGestureThrough;
    BOOL _showShadow;
    BOOL _display;
    long long _direction;
    UIView *_targetView;
    UIView *_contentView;
    double _radius;
    UIColor *_bubbleBackgroundColor;
    double _tailOffset;
    double _targetSpace;
    id /* block */ _dismissBlock;
    IESECPopoverBubbleView *_bubbleView;
    struct CGPoint { double x; double y; } _targetPoint;
    struct CGPoint { double x; double y; } _tailPosition;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetRect;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _padding;
}

@property (nonatomic) BOOL display;
@property (nonatomic) struct CGPoint { double x; double y; } targetPoint;
@property (retain, nonatomic) IESECPopoverBubbleView *bubbleView;
@property (nonatomic) struct CGPoint { double x; double y; } tailPosition;
@property (nonatomic) long long direction;
@property (retain, nonatomic) UIView *targetView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double radius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (retain, nonatomic) UIColor *bubbleBackgroundColor;
@property (nonatomic) double tailOffset;
@property (nonatomic) double targetSpace;
@property (nonatomic) BOOL blankGestureThrough;
@property (nonatomic) BOOL blankGestureDismiss;
@property (nonatomic) BOOL targetGestureThrough;
@property (nonatomic) BOOL showShadow;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void)setTailOffset:(double)arg0;
- (double)tailOffset;
- (BOOL)showShadow;
- (void)setBubbleBackgroundColor:(id)arg0;
- (void)setBlankGestureThrough:(BOOL)arg0;
- (void)setBlankGestureDismiss:(BOOL)arg0;
- (void)setTargetSpace:(double)arg0;
- (void)setShowShadow:(BOOL)arg0;
- (void)setTargetGestureThrough:(BOOL)arg0;
- (void)updateTargetPoint;
- (double)targetSpace;
- (BOOL)blankGestureThrough;
- (BOOL)blankGestureDismiss;
- (BOOL)targetGestureThrough;
- (struct CGPoint { double x0; double x1; })tailPosition;
- (void)setTailPosition:(struct CGPoint { double x0; double x1; })arg0;
- (void)setDisplay:(BOOL)arg0;
- (void)setPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetRect;
- (void)dismiss;
- (void).cxx_destruct;
- (id)targetView;
- (long long)direction;
- (double)radius;
- (void)show;
- (id)contentView;
- (void)setTargetView:(id)arg0;
- (void)setRadius:(double)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;
- (void)updateConfig;
- (BOOL)display;
- (void)setDirection:(long long)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setContentView:(id)arg0;
- (struct CGPoint { double x0; double x1; })targetPoint;
- (void)setTargetPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)handleTap:(id)arg0;
- (id)bubbleView;
- (void)setBubbleView:(id)arg0;
- (id)bubbleBackgroundColor;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;
- (void)refreshConstraints;

@end