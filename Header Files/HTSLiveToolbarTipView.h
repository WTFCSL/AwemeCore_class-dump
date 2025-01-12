//
//     Generated by private class-dump
//

@class IESLiveRichTextLabel, UIImageView, UILabel, UIView, IESLiveFlexDisplayTextView;
@protocol IESPriorityGuideDelegate;

@interface HTSLiveToolbarTipView : UIView <HTSLiveToolbarTip, IESLiveBubbleGuide> {
    BOOL shouldHideWithTabSpace;
    BOOL showRightArrow;
    float priority;
    id /* block */ tipHasTapped;
    id<IESPriorityGuideDelegate> delegate;
    id /* block */ didHide;
    UIView *_contentView;
    UILabel *_tipLabel;
    UIImageView *_tipArrow;
    UIImageView *_backgroundImageView;
    IESLiveRichTextLabel *_richTextLabel;
    IESLiveFlexDisplayTextView *_flexTextView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIImageView *tipArrow;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) IESLiveRichTextLabel *richTextLabel;
@property (retain, nonatomic) IESLiveFlexDisplayTextView *flexTextView;
@property (nonatomic) BOOL shouldHideWithTabSpace;
@property (nonatomic) BOOL showRightArrow;
@property (copy, nonatomic) id /* block */ tipHasTapped;
@property (copy, nonatomic) id /* block */ didHide;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) float priority;
@property (weak, nonatomic) id<IESPriorityGuideDelegate> delegate;

- (void)showExclusionDisabledTip:(id)arg0 inView:(id)arg1 atTopOf:(id)arg2;
- (void)refreshTip:(id)arg0;
- (void)setShouldHideWithTabSpace:(BOOL)arg0;
- (void)setTipHasTapped:(id /* block */)arg0;
- (void)showTip:(id)arg0 inView:(id)arg1 atTopOf:(id)arg2 duration:(double)arg3 didShow:(id /* block */)arg4;
- (id)richTextLabel;
- (void)setRichTextLabel:(id)arg0;
- (void)setTipArrow:(id)arg0;
- (BOOL)shouldHideWithTabSpace;
- (void)showTip:(id)arg0 inView:(id)arg1 atBottomOf:(id)arg2 duration:(double)arg3 didShow:(id /* block */)arg4;
- (void)showTip:(id)arg0 inView:(id)arg1 atBottomOf:(id)arg2 didShow:(id /* block */)arg3;
- (void)showTip:(id)arg0 inView:(id)arg1 atTopOf:(id)arg2 didShow:(id /* block */)arg3;
- (void)setDidHide:(id /* block */)arg0;
- (void)setShowRightArrow:(BOOL)arg0;
- (void)showTextPieces:(id)arg0 inView:(id)arg1 atTopOf:(id)arg2 backgroundColor:(id)arg3 contentEdgeInsets:(id)arg4 didShow:(id /* block */)arg5;
- (void)showTip:(id)arg0 inView:(id)arg1 atBottomOf:(id)arg2 duration:(double)arg3 remakeConstraints:(id /* block */)arg4 didShow:(id /* block */)arg5;
- (void)showView:(id)arg0 inView:(id)arg1 atBottomOf:(id)arg2 duration:(double)arg3 didShow:(id /* block */)arg4;
- (void)showExclusionDisabledTip:(id)arg0 inView:(id)arg1 atBottomOf:(id)arg2;
- (void)showTextPieces:(id)arg0 backgroundImage:(id)arg1 arrowImage:(id)arg2 inView:(id)arg3 atTopOf:(id)arg4 didShow:(id /* block */)arg5;
- (void)showTextPieces:(id)arg0 backgroundImage:(id)arg1 arrowImage:(id)arg2 inView:(id)arg3 atBottomOf:(id)arg4 duration:(double)arg5 didShow:(id /* block */)arg6;
- (id)flexTextView;
- (void)hasTouched:(id)arg0;
- (id /* block */)tipHasTapped;
- (void)showTip:(id)arg0 inView:(id)arg1;
- (void)makeBottomConstraintsWithArrowView:(id)arg0 containerView:(id)arg1 bottomItemView:(id)arg2;
- (BOOL)showRightArrow;
- (void)showTip:(id)arg0 inView:(id)arg1 atTopOf:(id)arg2 remakeConstraints:(id /* block */)arg3;
- (void)makeBottomConstraintsWithArrowView:(id)arg0 containerView:(id)arg1 bottomItemView:(id)arg2 arrowSize:(struct CGSize { double x0; double x1; })arg3;
- (void)showTip:(id)arg0 inView:(id)arg1 atBottomOf:(id)arg2 remakeConstraints:(id /* block */)arg3;
- (void)showTip:(id)arg0 inView:(id)arg1 atBottomOf:(id)arg2 remakeConstraints:(id /* block */)arg3 appendContentConstraints:(id /* block */)arg4;
- (BOOL)showTextPieces:(id)arg0 inView:(id)arg1 atTopOf:(id)arg2 backgroundColor:(id)arg3 contentEdgeInsets:(id)arg4;
- (void)makeTopConstraintsWithArrowView:(id)arg0 containerView:(id)arg1 bottomItemView:(id)arg2 arrowSize:(struct CGSize { double x0; double x1; })arg3;
- (void)showTip:(id)arg0 inView:(id)arg1 atTopOf:(id)arg2;
- (void)showTip:(id)arg0 inView:(id)arg1 atBottomOf:(id)arg2;
- (void)showTip:(id)arg0 withTipColorString:(id)arg1 inView:(id)arg2 atTopOf:(id)arg3;
- (void)showTextPieces:(id)arg0 backgroundImage:(id)arg1 arrowImage:(id)arg2 inView:(id)arg3 atTopOf:(id)arg4;
- (void)showTextPieces:(id)arg0 backgroundImage:(id)arg1 arrowImage:(id)arg2 inView:(id)arg3 atBottomOf:(id)arg4;
- (void)showTip:(id)arg0 backgroundImage:(id)arg1 arrowImage:(id)arg2 inView:(id)arg3 atTopOf:(id)arg4;
- (void)showTip:(id)arg0 inView:(id)arg1 atBottomOf:(id)arg2 duration:(double)arg3 remakeConstraints:(id /* block */)arg4 appendContentConstraints:(id /* block */)arg5 didShow:(id /* block */)arg6;
- (void)showTip:(id)arg0 inView:(id)arg1 direction:(long long)arg2 referenceView:(id)arg3 arrowImage:(id)arg4 backgroundColor:(id)arg5 duration:(double)arg6 didShow:(id /* block */)arg7;
- (void)showTip:(id)arg0 withTipColorString:(id)arg1 inView:(id)arg2 atTopOf:(id)arg3 duration:(double)arg4 didShow:(id /* block */)arg5;
- (void)showTip:(id)arg0 inView:(id)arg1 atTopOf:(id)arg2 duration:(double)arg3 remakeConstraints:(id /* block */)arg4 didShow:(id /* block */)arg5;
- (void)showTextPieces:(id)arg0 Tip:(id)arg1 backgroundImage:(id)arg2 arrowImage:(id)arg3 inView:(id)arg4 atTopOf:(id)arg5 duration:(double)arg6 didShow:(id /* block */)arg7;
- (void)showView:(id)arg0 inView:(id)arg1 atTopOf:(id)arg2 duration:(double)arg3 didShow:(id /* block */)arg4;
- (BOOL)showTextPieces:(id)arg0 inView:(id)arg1 atTopOf:(id)arg2;
- (void)setFlexTextView:(id)arg0;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)init;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (void)setPriority:(float)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (id)contentView;
- (id)delegate;
- (void)hide;
- (void)setDelegate:(id)arg0;
- (float)priority;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setContentView:(id)arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (void)setupViews;
- (void)setBackgroundImageView:(id)arg0;
- (id)tipArrow;
- (id /* block */)didHide;

@end
