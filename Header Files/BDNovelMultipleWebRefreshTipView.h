//
//     Generated by private class-dump
//

@class CAGradientLayer, BDNovelAudioTextView, UIImpactFeedbackGenerator, BDNovelMultipleWebRefreshTipViewParam;

@interface BDNovelMultipleWebRefreshTipView : UIView {
    BOOL _isEnableRefresh;
    CAGradientLayer *_gradientLayer;
    BDNovelAudioTextView *_textView;
    UIImpactFeedbackGenerator *_impactLight;
    BDNovelMultipleWebRefreshTipViewParam *_param;
}

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain) BDNovelAudioTextView *textView;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactLight;
@property (nonatomic) BOOL isEnableRefresh;
@property (retain, nonatomic) BDNovelMultipleWebRefreshTipViewParam *param;

- (void)updateWithDict:(id)arg0;
- (void)setupDefaultParam:(BOOL)arg0;
- (void)setImpactLight:(id)arg0;
- (void)innerRefreshEnable:(BOOL)arg0;
- (BOOL)isEnableRefresh;
- (id)impactLight;
- (void)setIsEnableRefresh:(BOOL)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 isPullUp:(BOOL)arg1;
- (void)setRefreshEnable:(BOOL)arg0;
- (id)textView;
- (void)setParam:(id)arg0;
- (id)gradientLayer;
- (void).cxx_destruct;
- (id)param;
- (void)setTextView:(id)arg0;
- (void)layoutSubviews;
- (void)setGradientLayer:(id)arg0;

@end
