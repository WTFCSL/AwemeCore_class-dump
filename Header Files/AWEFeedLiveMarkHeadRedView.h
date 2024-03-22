//
//     Generated by private class-dump
//

@class NSString, AWEFeedLiveMarkHeadAnimatedView, UIView, UIButton;

@interface AWEFeedLiveMarkHeadRedView : UIView <AWEFeedLiveMarkViewNewTypeHeadProtocol> {
    BOOL _isEnterAnimating;
    UIView *_containerView;
    UIView *_blurView;
    UIView *_seperateLine;
    AWEFeedLiveMarkHeadAnimatedView *_liveView;
    UIButton *_tapArea;
    id /* block */ _liveTappedBlock;
    NSString *_enterFrom;
    NSString *_enterMethod;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *blurView;
@property (nonatomic) BOOL isEnterAnimating;
@property (retain, nonatomic) UIView *seperateLine;
@property (retain, nonatomic) AWEFeedLiveMarkHeadAnimatedView *liveView;
@property (retain, nonatomic) UIButton *tapArea;
@property (copy, nonatomic) id /* block */ liveTappedBlock;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (id)seperateLine;
- (void)setSeperateLine:(id)arg0;
- (void)setTapArea:(id)arg0;
- (id)tapArea;
- (id /* block */)liveTappedBlock;
- (BOOL)shouldShowGuide;
- (BOOL)isEnterAnimating;
- (void)setIsEnterAnimating:(BOOL)arg0;
- (void)trackLiveShowStatic;
- (void)setLiveTappedBlock:(id /* block */)arg0;
- (void)liveAreaTap;
- (void)setLiveTapBlock:(id /* block */)arg0;
- (void)setEnterFrom:(id)arg0 enterMethod:(id)arg1;
- (void)setBlurView:(id)arg0;
- (void).cxx_destruct;
- (id)blurView;
- (void)show;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)hide;
- (void)layoutSubviews;
- (void)setupUI;
- (id)liveView;
- (void)setLiveView:(id)arg0;

@end
