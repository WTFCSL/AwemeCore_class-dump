//
//     Generated by private class-dump
//

@class NSString, LOTAnimationView, AWELandscapePageContext, UILabel, BDImageView;

@interface AWELandScapeGuideView : UIView {
    BOOL _isShowingGuideLottie;
    BOOL _isShowingNewGuide;
    LOTAnimationView *_longPressLottieView;
    LOTAnimationView *_guideLottieView;
    BDImageView *_animationImageView;
    UILabel *_guideLabel;
    UILabel *_guideNewLabel;
    long long _longPressLoopTimes;
    NSString *_lottieName;
    AWELandscapePageContext *_pageContext;
}

@property (retain, nonatomic) LOTAnimationView *longPressLottieView;
@property (retain, nonatomic) LOTAnimationView *guideLottieView;
@property (retain, nonatomic) BDImageView *animationImageView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UILabel *guideNewLabel;
@property (nonatomic) long long longPressLoopTimes;
@property (nonatomic) BOOL isShowingGuideLottie;
@property (nonatomic) BOOL isShowingNewGuide;
@property (copy, nonatomic) NSString *lottieName;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;

- (id)guideLabel;
- (void)setGuideLabel:(id)arg0;
- (id)lottieName;
- (id)initWithPageContext:(id)arg0;
- (void)showGuideOnView:(id)arg0 type:(long long)arg1;
- (void)hideGuideIfNeed;
- (void)showGuideOnView:(id)arg0 text:(id)arg1 lottieName:(id)arg2;
- (id)longPressLottieView;
- (id)guideNewLabel;
- (void)showOnView:(id)arg0 animationView:(id)arg1 completion:(id /* block */)arg2;
- (void)setGuideLottieView:(id)arg0;
- (id)guideLottieView;
- (void)setLottieName:(id)arg0;
- (void)resetLongPressGuide;
- (void)setupLongPressLottieView;
- (void)setIsShowingGuideLottie:(BOOL)arg0;
- (BOOL)isShowingGuideLottie;
- (BOOL)isShowingNewGuide;
- (void)setIsShowingNewGuide:(BOOL)arg0;
- (void)setLongPressLottieView:(id)arg0;
- (void)setLongPressLottie;
- (long long)longPressLoopTimes;
- (void)setLongPressLoopTimes:(long long)arg0;
- (void)setGuideNewLabel:(id)arg0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (id)animationImageView;
- (void)setAnimationImageView:(id)arg0;

@end
