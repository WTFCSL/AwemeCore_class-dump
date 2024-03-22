//
//     Generated by private class-dump
//

@class UIView, NSString, UIImage, BDTuringWaitingView, UIImageView, UIButton, UILabel, BDTuringIndicatorContentView;

@interface BDTuringIndicatorView : UIView {
    BOOL _showDismissButton;
    BOOL _autoDismiss;
    BOOL _isUserDismiss;
    double _dismissDelay;
    double _duration;
    long long _indicatorStyle;
    UILabel *_indicatorTextLabel;
    UIImageView *_indicatorImageView;
    BDTuringWaitingView *_indicatorWaitingView;
    UIButton *_dismissButton;
    BDTuringIndicatorContentView *_contentView;
    UIView *_parentView;
    NSString *_indicatorText;
    UIImage *_indicatorImage;
    id /* block */ _dismissHandler;
    long long _supportMaxLine;
    double _expectedWidth;
}

@property (nonatomic) long long indicatorStyle;
@property (retain, nonatomic) UILabel *indicatorTextLabel;
@property (retain, nonatomic) UIImageView *indicatorImageView;
@property (retain, nonatomic) BDTuringWaitingView *indicatorWaitingView;
@property (retain, nonatomic) UIButton *dismissButton;
@property (retain, nonatomic) BDTuringIndicatorContentView *contentView;
@property (weak, nonatomic) UIView *parentView;
@property (copy, nonatomic) NSString *indicatorText;
@property (copy, nonatomic) UIImage *indicatorImage;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (nonatomic) BOOL isUserDismiss;
@property (nonatomic) long long supportMaxLine;
@property (nonatomic) double expectedWidth;
@property (nonatomic) BOOL showDismissButton;
@property (nonatomic) BOOL autoDismiss;
@property (nonatomic) double dismissDelay;
@property (nonatomic) double duration;

+ (float)OSVersionNumber;
+ (id)_defaultParentView;
+ (void)showWithIndicatorStyle:(long long)arg0 indicatorText:(id)arg1 indicatorImage:(id)arg2 autoDismiss:(BOOL)arg3 dismissHandler:(id /* block */)arg4;
+ (void)dismissIndicators;
+ (void)showWithIndicatorStyle:(long long)arg0 indicatorText:(id)arg1 indicatorImage:(id)arg2 maxLine:(long long)arg3 expectedWidth:(double)arg4 autoDismiss:(BOOL)arg5 dismissHandler:(id /* block */)arg6;
+ (double)heightOfText:(id)arg0 fontSize:(double)arg1 forWidth:(double)arg2 forLineHeight:(double)arg3 constraintToMaxNumberOfLines:(long long)arg4 firstLineIndent:(double)arg5 textAlignment:(long long)arg6;
+ (double)heightOfText:(id)arg0 fontSize:(double)arg1 forWidth:(double)arg2 forLineHeight:(double)arg3 constraintToMaxNumberOfLines:(long long)arg4 firstLineIndent:(double)arg5 textAlignment:(long long)arg6 lineBreakMode:(long long)arg7;
+ (struct CGSize { double x0; double x1; })sizeOfText:(id)arg0 fontSize:(double)arg1 forWidth:(double)arg2 forLineHeight:(double)arg3 constraintToMaxNumberOfLines:(long long)arg4 firstLineIndent:(double)arg5 textAlignment:(long long)arg6 lineBreakMode:(long long)arg7;
+ (void)showWithIndicatorStyle:(long long)arg0 indicatorText:(id)arg1 indicatorImage:(id)arg2 maxLine:(long long)arg3 autoDismiss:(BOOL)arg4 dismissHandler:(id /* block */)arg5;
+ (void)showIndicatorForTextMessage:(id)arg0;
+ (id)_attributesWithFontSize:(double)arg0 lineHeight:(double)arg1 lineBreakMode:(long long)arg2 isBoldFontStyle:(BOOL)arg3 firstLineIndent:(double)arg4 textAlignment:(long long)arg5;

- (void)initSubViews;
- (id)initWithIndicatorStyle:(long long)arg0 indicatorText:(id)arg1 indicatorImage:(id)arg2 dismissHandler:(id /* block */)arg3;
- (void)_layoutIndicatorImageViewWithImage:(id)arg0;
- (void)_layoutIndicatorLabelWithText:(id)arg0;
- (BOOL)_needShowWaitingView;
- (void)_dismissAllCurrentIndicators;
- (id)indicatorImageView;
- (id)indicatorTextLabel;
- (void)setIndicatorText:(id)arg0;
- (void)setIndicatorImage:(id)arg0;
- (id)indicatorWaitingView;
- (BOOL)isUserDismiss;
- (void)setIsUserDismiss:(BOOL)arg0;
- (id)indicatorText;
- (void)_dismissAllCurrentIndicatorsOnParentView:(id)arg0 animated:(BOOL)arg1;
- (void)setIndicatorTextLabel:(id)arg0;
- (void)setIndicatorImageView:(id)arg0;
- (void)setIndicatorWaitingView:(id)arg0;
- (id)initWithIndicatorStyle:(long long)arg0 indicatorText:(id)arg1 indicatorImage:(id)arg2 maxLine:(long long)arg3 dismissHandler:(id /* block */)arg4;
- (id)initWithIndicatorStyle:(long long)arg0 indicatorText:(id)arg1 indicatorImage:(id)arg2 maxLine:(long long)arg3 expectedWidth:(double)arg4 dismissHandler:(id /* block */)arg5;
- (id)getLoadingUIImage;
- (void)dismissByUser;
- (void)observeStatusBarOrientationChanged:(id)arg0;
- (void)rotateContentForInterfaceOrientation:(long long)arg0;
- (void)makeRotationTransformOnIOS7;
- (void)layoutContentSubViewsOnIOS7;
- (BOOL)p_needTransform;
- (void)showFromParentView:(id)arg0 offset:(struct UIOffset { double x0; double x1; })arg1;
- (void)dismissFromParentView;
- (void)showFromParentView:(id)arg0;
- (void)_dismissFromParentViewAnimated:(BOOL)arg0;
- (double)dismissDelay;
- (double)indicatorMaxWidth;
- (double)expectedWidth;
- (void)setShowDismissButton:(BOOL)arg0;
- (void)setDismissDelay:(double)arg0;
- (void)updateIndicatorWithText:(id)arg0 shouldRemoveWaitingView:(BOOL)arg1;
- (void)updateIndicatorWithImage:(id)arg0;
- (BOOL)showDismissButton;
- (long long)supportMaxLine;
- (void)setSupportMaxLine:(long long)arg0;
- (void)setExpectedWidth:(double)arg0;
- (id)indicatorImage;
- (void).cxx_destruct;
- (void)setDismissHandler:(id /* block */)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)duration;
- (id)contentView;
- (BOOL)autoDismiss;
- (id)initWithCoder:(id)arg0;
- (void)setAutoDismiss:(BOOL)arg0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setIndicatorStyle:(long long)arg0;
- (id /* block */)dismissHandler;
- (void)setDuration:(double)arg0;
- (void)setContentView:(id)arg0;
- (id)dismissButton;
- (void)setDismissButton:(id)arg0;
- (long long)indicatorStyle;
- (id)parentView;
- (void)setParentView:(id)arg0;
- (id)getBundle;

@end