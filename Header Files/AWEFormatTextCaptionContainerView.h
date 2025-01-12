//
//     Generated by private class-dump
//

@class AWEFormatCaptionTextView;

@interface AWEFormatTextCaptionContainerView : UIView {
    BOOL _isTextCaptionShowing;
    BOOL _isAnimating;
    AWEFormatCaptionTextView *_currentTextView;
    AWEFormatCaptionTextView *_nextTextView;
}

@property (nonatomic) BOOL isTextCaptionShowing;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) AWEFormatCaptionTextView *currentTextView;
@property (retain, nonatomic) AWEFormatCaptionTextView *nextTextView;

- (void)setupCurrentTextViewBeforeAnimationWithHeight:(double)arg0;
- (void)updateTextCaptionHeight:(double)arg0;
- (void)setupCurrentTextViewInAnimation;
- (id)currentTextView;
- (void)setupTextViewAlphaAnimationWithTextView:(id)arg0 alpha:(double)arg1;
- (void)updateTextCaptionAfterSetTextWithCompletion:(id /* block */)arg0;
- (void)animateWithDuration:(double)arg0 timingFunction:(id)arg1 shouldUpdateAnimatingFlag:(BOOL)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)setupNextTextViewInAnimationWithOffset:(double)arg0;
- (id)nextTextView;
- (void)updateCurrentTextViewHeight:(double)arg0;
- (void)showTextCaptionWithRoleType:(unsigned long long)arg0 text:(id)arg1 completion:(id /* block */)arg2;
- (void)switchTextCaptionWithRoleType:(unsigned long long)arg0 text:(id)arg1 completion:(id /* block */)arg2;
- (void)hideTextCaption;
- (void)refreshText:(id)arg0;
- (BOOL)isTextCaptionShowing;
- (void)setIsTextCaptionShowing:(BOOL)arg0;
- (void)setCurrentTextView:(id)arg0;
- (void)setNextTextView:(id)arg0;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setIsAnimating:(BOOL)arg0;
- (void)appendText:(id)arg0;

@end
