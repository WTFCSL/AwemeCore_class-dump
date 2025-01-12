//
//     Generated by private class-dump
//

@class UIColor, UILabel, UIView, UIButton;

@interface BDNovelTipView : UIView {
    BOOL _tipAlignTop;
    BOOL _isDisableClickOtherAutoHide;
    BOOL _useCurveTip;
    UIView *_backgroundView;
    UILabel *_textLabel;
    UIView *_separateView;
    UIButton *_closeButton;
    UIColor *_backgroundColor;
    UIColor *_textColor;
    UIColor *_separateViewColor;
    double _showTipOffset;
    double _textOffset;
    double _popoverSharpHeight;
    double _popoverSharpWidth;
    double _popoverCornerRadius;
    struct CGSize { double width; double height; } _defaultTipSize;
}

@property (nonatomic) double popoverSharpHeight;
@property (nonatomic) double popoverSharpWidth;
@property (nonatomic) double popoverCornerRadius;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) BOOL tipAlignTop;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *separateViewColor;
@property (nonatomic) double showTipOffset;
@property (nonatomic) struct CGSize { double width; double height; } defaultTipSize;
@property (nonatomic) double textOffset;
@property (nonatomic) BOOL isDisableClickOtherAutoHide;
@property (nonatomic) BOOL useCurveTip;

- (void)onCloseAction:(id)arg0;
- (void)setSeparateView:(id)arg0;
- (id)separateView;
- (id)separateViewColor;
- (struct CGSize { double x0; double x1; })defaultTipSize;
- (BOOL)tipAlignTop;
- (BOOL)useCurveTip;
- (double)showTipOffset;
- (void)setPopoverSharpHeight:(double)arg0;
- (void)setPopoverSharpWidth:(double)arg0;
- (void)setPopoverCornerRadius:(double)arg0;
- (id)popoverSharpBezierPathWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 position:(BOOL)arg1 sharpOffset:(double)arg2;
- (BOOL)isDisableClickOtherAutoHide;
- (double)popoverSharpHeight;
- (double)popoverCornerRadius;
- (void)setTipAlignTop:(BOOL)arg0;
- (void)setSeparateViewColor:(id)arg0;
- (void)setShowTipOffset:(double)arg0;
- (void)setDefaultTipSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setIsDisableClickOtherAutoHide:(BOOL)arg0;
- (void)setUseCurveTip:(BOOL)arg0;
- (double)popoverSharpWidth;
- (id)textLabel;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)arg0;
- (void)setTextOffset:(double)arg0;
- (id)backgroundColor;
- (double)textOffset;
- (void)setTextColor:(id)arg0;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setBackgroundColor:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)textColor;
- (void)setTextLabel:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end
