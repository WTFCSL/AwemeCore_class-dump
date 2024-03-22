//
//     Generated by private class-dump
//

@class NSString, UIImageView, NSTimer, UIView;

@interface AWEFavoriteCoverAnimationView : UIView <CAAnimationDelegate> {
    BOOL _isShowing;
    id /* block */ _endCoverAnimationPromise;
    UIView *_containerView;
    NSString *_coverURL;
    UIImageView *_imageView;
    NSTimer *_autoHideTimer;
    long long _style;
}

@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSString *coverURL;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) NSTimer *autoHideTimer;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ endCoverAnimationPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsShowing:(BOOL)arg0;
- (void)startAutoHideIfNeeded;
- (void)hideWithAnimation:(BOOL)arg0;
- (id)homepageTabBarButton;
- (void)setEndCoverAnimationPromise:(id /* block */)arg0;
- (id /* block */)endCoverAnimationPromise;
- (id)initWithCover:(id)arg0 animationStyle:(long long)arg1;
- (void)showCoverAnimation;
- (void)setupUICover:(id)arg0 animationStyle:(long long)arg1;
- (void)setupRightBottomBarStyleUI;
- (void)setupLeftSideBarStyleUI;
- (double)coverViewHeight;
- (void)showCoverAnimationWithLeftSideBarStyle;
- (void)showCoverAnimationWithRightBottomBarStyle;
- (void)coverAnimationHideWithLeftSideBarStyle;
- (void)coverAnimationHideWithRightBottomBarStyle;
- (void)coverAnimationHide;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (long long)style;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)imageView;
- (void)setContainerView:(id)arg0;
- (BOOL)isShowing;
- (void)setImageView:(id)arg0;
- (id)containerView;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)setStyle:(long long)arg0;
- (double)coverViewWidth;
- (id)autoHideTimer;
- (void)setAutoHideTimer:(id)arg0;
- (id)coverURL;
- (void)setCoverURL:(id)arg0;

@end