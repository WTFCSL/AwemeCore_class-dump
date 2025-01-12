//
//     Generated by private class-dump
//

@class UIColor, AWEGradientView;
@protocol AWEProfileBannerBGCoverMaskViewDelegate;

@interface AWEProfileBannerBGCoverMaskView : UIView {
    id<AWEProfileBannerBGCoverMaskViewDelegate> _delegate;
    UIColor *_lightColor;
    UIColor *_darkColor;
    AWEGradientView *_gradientView;
}

@property (retain, nonatomic) UIColor *lightColor;
@property (retain, nonatomic) UIColor *darkColor;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (weak, nonatomic) id<AWEProfileBannerBGCoverMaskViewDelegate> delegate;

+ (id)maskViewWithLightColor:(id)arg0 darkColor:(id)arg1;
+ (id)defaultMaskView;

- (void)p_setupUI;
- (void)updateLightColor:(id)arg0 darkColor:(id)arg1;
- (void)p_refreshColor;
- (void).cxx_destruct;
- (void)setGradientView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (id)darkColor;
- (void)setDelegate:(id)arg0;
- (id)gradientView;
- (id)lightColor;
- (void)setLightColor:(id)arg0;
- (void)setDarkColor:(id)arg0;

@end
