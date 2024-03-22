//
//     Generated by private class-dump
//

@class UIButton, NSString, UIView;

@interface TOCropToolbar : UIView <TOCropToolbarProtocol> {
    BOOL _clampButtonGlowing;
    BOOL _clampButtonHidden;
    BOOL _rotateCounterclockwiseButtonHidden;
    BOOL _rotateClockwiseButtonHidden;
    BOOL _reverseContentLayout;
    double _statusBarHeightInset;
    UIButton *_doneTextButton;
    UIButton *_doneIconButton;
    NSString *_doneTextButtonTitle;
    UIButton *_cancelTextButton;
    UIButton *_cancelIconButton;
    NSString *_cancelTextButtonTitle;
    UIButton *_rotateCounterclockwiseButton;
    UIButton *_resetButton;
    UIButton *_clampButton;
    UIButton *_rotateClockwiseButton;
    UIButton *_rotateButton;
    id /* block */ _cancelButtonTapped;
    id /* block */ _doneButtonTapped;
    id /* block */ _rotateCounterclockwiseButtonTapped;
    id /* block */ _rotateClockwiseButtonTapped;
    id /* block */ _clampButtonTapped;
    id /* block */ _resetButtonTapped;
    UIView *_backgroundView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _backgroundViewOutsets;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *doneTextButton;
@property (retain, nonatomic) UIButton *doneIconButton;
@property (retain, nonatomic) UIButton *cancelTextButton;
@property (retain, nonatomic) UIButton *cancelIconButton;
@property (retain, nonatomic) UIButton *resetButton;
@property (retain, nonatomic) UIButton *clampButton;
@property (retain, nonatomic) UIButton *rotateButton;
@property (nonatomic) BOOL reverseContentLayout;
@property (nonatomic) double statusBarHeightInset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } backgroundViewOutsets;
@property (copy, nonatomic) NSString *doneTextButtonTitle;
@property (copy, nonatomic) NSString *cancelTextButtonTitle;
@property (readonly, nonatomic) UIButton *rotateCounterclockwiseButton;
@property (readonly, nonatomic) UIButton *rotateClockwiseButton;
@property (copy, nonatomic) id /* block */ cancelButtonTapped;
@property (copy, nonatomic) id /* block */ doneButtonTapped;
@property (copy, nonatomic) id /* block */ rotateCounterclockwiseButtonTapped;
@property (copy, nonatomic) id /* block */ rotateClockwiseButtonTapped;
@property (copy, nonatomic) id /* block */ clampButtonTapped;
@property (copy, nonatomic) id /* block */ resetButtonTapped;
@property (nonatomic) BOOL clampButtonGlowing;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } clampButtonFrame;
@property (nonatomic) BOOL clampButtonHidden;
@property (nonatomic) BOOL rotateCounterclockwiseButtonHidden;
@property (nonatomic) BOOL rotateClockwiseButtonHidden;
@property (nonatomic) BOOL resetButtonEnabled;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } doneButtonFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)doneImage;
+ (id)clampImage;
+ (id)rotateCCWImage;
+ (id)rotateCWImage;
+ (id)resetImage;
+ (id)cancelImage;

- (void)setReverseContentLayout:(BOOL)arg0;
- (id)cancelIconButton;
- (id)cancelTextButton;
- (id)doneIconButton;
- (id)doneTextButton;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })backgroundViewOutsets;
- (BOOL)reverseContentLayout;
- (BOOL)rotateCounterclockwiseButtonHidden;
- (id)rotateCounterclockwiseButton;
- (BOOL)clampButtonHidden;
- (id)clampButton;
- (BOOL)rotateClockwiseButtonHidden;
- (id)rotateClockwiseButton;
- (void)layoutToolbarButtons:(id)arg0 withSameButtonSize:(struct CGSize { double x0; double x1; })arg1 inContainerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 horizontally:(BOOL)arg3;
- (double)statusBarHeightInset;
- (id /* block */)resetButtonTapped;
- (id /* block */)rotateCounterclockwiseButtonTapped;
- (id /* block */)rotateClockwiseButtonTapped;
- (id /* block */)clampButtonTapped;
- (void)setStatusBarHeightInset:(double)arg0;
- (void)setBackgroundViewOutsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)doneTextButtonTitle;
- (void)setDoneTextButtonTitle:(id)arg0;
- (id)cancelTextButtonTitle;
- (void)setCancelTextButtonTitle:(id)arg0;
- (void)setCancelButtonTapped:(id /* block */)arg0;
- (void)setDoneButtonTapped:(id /* block */)arg0;
- (void)setRotateCounterclockwiseButtonTapped:(id /* block */)arg0;
- (void)setRotateClockwiseButtonTapped:(id /* block */)arg0;
- (void)setClampButtonTapped:(id /* block */)arg0;
- (void)setResetButtonTapped:(id /* block */)arg0;
- (BOOL)clampButtonGlowing;
- (void)setClampButtonGlowing:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clampButtonFrame;
- (void)setClampButtonHidden:(BOOL)arg0;
- (void)setRotateCounterclockwiseButtonHidden:(BOOL)arg0;
- (void)setRotateClockwiseButtonHidden:(BOOL)arg0;
- (BOOL)resetButtonEnabled;
- (void)setResetButtonEnabled:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })doneButtonFrame;
- (void)setRotateCounterClockwiseButtonHidden:(BOOL)arg0;
- (void)setDoneTextButton:(id)arg0;
- (void)setDoneIconButton:(id)arg0;
- (void)setCancelTextButton:(id)arg0;
- (void)setCancelIconButton:(id)arg0;
- (void)setClampButton:(id)arg0;
- (void)buttonTapped:(id)arg0;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)setBackgroundView:(id)arg0;
- (id)resetButton;
- (id /* block */)doneButtonTapped;
- (id /* block */)cancelButtonTapped;
- (void)setResetButton:(id)arg0;
- (id)rotateButton;
- (void)setRotateButton:(id)arg0;

@end
