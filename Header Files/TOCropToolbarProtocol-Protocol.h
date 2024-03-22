//
//     Generated by private class-dump
//

@class UIButton, NSString;

@protocol TOCropToolbarProtocol <NSObject>

@property (nonatomic) double statusBarHeightInset;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } backgroundViewOutsets;
@property (readonly, nonatomic) UIButton *doneTextButton;
@property (readonly, nonatomic) UIButton *doneIconButton;
@property (copy, nonatomic) NSString *doneTextButtonTitle;
@property (readonly, nonatomic) UIButton *cancelTextButton;
@property (readonly, nonatomic) UIButton *cancelIconButton;
@property (copy, nonatomic) NSString *cancelTextButtonTitle;
@property (readonly, nonatomic) UIButton *rotateCounterclockwiseButton;
@property (readonly, nonatomic) UIButton *resetButton;
@property (readonly, nonatomic) UIButton *clampButton;
@property (readonly, nonatomic) UIButton *rotateClockwiseButton;
@property (readonly, nonatomic) UIButton *rotateButton;
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

- (id)cancelIconButton;
- (id)cancelTextButton;
- (id)doneIconButton;
- (id)doneTextButton;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })backgroundViewOutsets;
- (BOOL)rotateCounterclockwiseButtonHidden;
- (id)rotateCounterclockwiseButton;
- (BOOL)clampButtonHidden;
- (id)clampButton;
- (BOOL)rotateClockwiseButtonHidden;
- (id)rotateClockwiseButton;
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
- (id)resetButton;
- (id /* block */)doneButtonTapped;
- (id /* block */)cancelButtonTapped;
- (id)rotateButton;

@optional

- (BOOL)publishImageAsStory;

@end