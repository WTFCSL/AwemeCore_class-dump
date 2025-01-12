//
//     Generated by private class-dump
//

@class DUXLottieView, NSString, UILabel, AWEGradientView, UIView;

@interface AWENearbyLifeSwipeUpGuideView : UIView <UIScrollViewDelegate> {
    DUXLottieView *_lottieView;
    UILabel *_tipsTitle;
    AWEGradientView *_bottomGradientView;
    UIView *_contentView;
}

@property (retain, nonatomic) DUXLottieView *lottieView;
@property (retain, nonatomic) UILabel *tipsTitle;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (retain, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)delayShowSecond;
+ (id)fqcString;
+ (long long)showTimeSecond;
+ (BOOL)enable;

- (id)lottieView;
- (void)setLottieView:(id)arg0;
- (void)setTipsTitle:(id)arg0;
- (id)tipsTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 pageType:(long long)arg1;
- (void)lottiePlay;
- (void)lottieStop;
- (void)setupUIWithPageType:(long long)arg0;
- (void).cxx_destruct;
- (id)contentView;
- (void)registerNotifications;
- (void)setContentView:(id)arg0;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg0;
- (void)appDidBecomeActive;

@end
