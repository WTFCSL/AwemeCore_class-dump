//
//     Generated by private class-dump
//

@class UIColor, NSString, NSMutableDictionary, UIView, NSMutableArray;

@interface AWEPopoverActionSheet : UIView <AWEACCPopoverActionSheetHandlerProtocol> {
    BOOL _isAnimating;
    UIView *_contentView;
    long long _colorMode;
    id /* block */ _dismissCompletionBlock;
    double _fixedContentWidth;
    double _fixedContentHeight;
    double _fixedOffsetY;
    double _fixedOffsetX;
    UIColor *_defaultShapeLayerColor;
    UIColor *_defaultMaskLayerColor;
    NSMutableArray *_actionBlocks;
    NSMutableArray *_actionButtons;
    NSMutableDictionary *_yellowDotsIndex;
    double _contentViewWidth;
    long long _alignmentMode;
    UIView *_accessibilityCloseView;
    struct CGPoint { double x; double y; } _anchorPoint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *actionBlocks;
@property (retain, nonatomic) NSMutableArray *actionButtons;
@property (retain, nonatomic) NSMutableDictionary *yellowDotsIndex;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double contentViewWidth;
@property (nonatomic) long long alignmentMode;
@property (retain, nonatomic) UIView *accessibilityCloseView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) long long colorMode;
@property (copy, nonatomic) id /* block */ dismissCompletionBlock;
@property (nonatomic) double fixedContentWidth;
@property (nonatomic) double fixedContentHeight;
@property (nonatomic) double fixedOffsetY;
@property (nonatomic) double fixedOffsetX;
@property (retain, nonatomic) UIColor *defaultShapeLayerColor;
@property (retain, nonatomic) UIColor *defaultMaskLayerColor;

- (id)initWithAlignmentModel:(long long)arg0;
- (void)__addActionWithTitle:(id)arg0 titleColor:(id)arg1 titleFont:(id)arg2 image:(id)arg3 imagePosition:(unsigned long long)arg4 handler:(id /* block */)arg5;
- (void)__addActionWithTitle:(id)arg0 titleColor:(id)arg1 titleFont:(id)arg2 image:(id)arg3 imagePosition:(unsigned long long)arg4 yellowDotStyle:(unsigned long long)arg5 shouldShow:(BOOL)arg6 handler:(id /* block */)arg7;
- (void)__dismiss;
- (void)__doNothing;
- (void)setupContentForView:(id)arg0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 direction:(unsigned long long)arg2 coverView:(id)arg3 calculateFrameWithCoverView:(BOOL)arg4;
- (void)cutShape:(unsigned long long)arg0;
- (id)accessibilityCloseView;
- (void)showForView:(id)arg0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 coverView:(id)arg2 direction:(unsigned long long)arg3 calculateFrameWithCoverView:(BOOL)arg4;
- (void)showForView:(id)arg0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 coverView:(id)arg2 direction:(unsigned long long)arg3;
- (id)__setupButtonWithTitle:(id)arg0 titleFont:(id)arg1 titleColor:(id)arg2 image:(id)arg3 imagePosition:(unsigned long long)arg4 yellowDotStyle:(unsigned long long)arg5 shouldShowYellowDot:(BOOL)arg6;
- (id)__setupButtonWithCommonAttribute;
- (id)__buttonTitleColor:(id)arg0;
- (id)yellowDotsIndex;
- (void)clickAction:(id)arg0;
- (double)fixedContentWidth;
- (double)fixedContentHeight;
- (double)fixedOffsetY;
- (double)fixedOffsetX;
- (id)defaultShapeLayerColor;
- (id)defaultMaskLayerColor;
- (void)addActionWithTitle:(id)arg0 handler:(id /* block */)arg1;
- (void)addActionWithTitle:(id)arg0 titleColor:(id)arg1 titleFont:(id)arg2 handler:(id /* block */)arg3;
- (void)addActionWithImage:(id)arg0 title:(id)arg1 titleColor:(id)arg2 handler:(id /* block */)arg3;
- (void)addActionWithImage:(id)arg0 title:(id)arg1 titleColor:(id)arg2 titleFont:(id)arg3 handler:(id /* block */)arg4;
- (void)addActionWithImage:(id)arg0 imagePosition:(unsigned long long)arg1 title:(id)arg2 titleColor:(id)arg3 handler:(id /* block */)arg4;
- (void)addActionWithImage:(id)arg0 title:(id)arg1 titleColor:(id)arg2 actionCellYellowDot:(unsigned long long)arg3 shouldShow:(BOOL)arg4 handler:(id /* block */)arg5;
- (void)showForView:(id)arg0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 direction:(unsigned long long)arg2;
- (void)setupContentForView:(id)arg0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 direction:(unsigned long long)arg2;
- (void)dimiss;
- (void)setFixedContentWidth:(double)arg0;
- (void)setFixedContentHeight:(double)arg0;
- (void)setFixedOffsetY:(double)arg0;
- (void)setFixedOffsetX:(double)arg0;
- (void)setDefaultShapeLayerColor:(id)arg0;
- (void)setDefaultMaskLayerColor:(id)arg0;
- (void)setYellowDotsIndex:(id)arg0;
- (void)setAccessibilityCloseView:(id)arg0;
- (long long)colorMode;
- (BOOL)isAnimating;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setColorMode:(long long)arg0;
- (id)init;
- (id)actionButtons;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (void).cxx_destruct;
- (id)actionBlocks;
- (id)contentView;
- (void)setActionBlocks:(id)arg0;
- (void)setActionButtons:(id)arg0;
- (void)setIsAnimating:(BOOL)arg0;
- (void)setContentView:(id)arg0;
- (long long)alignmentMode;
- (void)setAlignmentMode:(long long)arg0;
- (double)contentViewWidth;
- (void)setContentViewWidth:(double)arg0;
- (id /* block */)dismissCompletionBlock;
- (void)setDismissCompletionBlock:(id /* block */)arg0;

@end
