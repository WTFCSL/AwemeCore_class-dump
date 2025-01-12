//
//     Generated by private class-dump
//

@class NSArray, UIImageView, UIView;
@protocol AWETabBarDelegate;

@interface AWETabBar : UITabBar <AWEBizTabBarPrivateProtocol> {
    BOOL _alignBottomIfExceed;
    id<AWETabBarDelegate> _tabBarDelegate;
    UIView *_backgroundView;
    UIImageView *_darkBackgroundImageView;
    UIImageView *_lightBackgroundImageView;
    UIView *_separatorLine;
    double _desiredHeight;
    NSArray *_tabBarButtons;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _exceedBounds;
}

@property (readonly, nonatomic) UIView *awe_blurView;
@property (copy, nonatomic) NSArray *tabBarButtons;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *darkBackgroundImageView;
@property (retain, nonatomic) UIImageView *lightBackgroundImageView;
@property (retain, nonatomic) UIView *separatorLine;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } exceedBounds;
@property (weak, nonatomic) id<AWETabBarDelegate> tabBarDelegate;
@property (nonatomic) double desiredHeight;
@property (nonatomic) BOOL alignBottomIfExceed;

+ (BOOL)enableBackgroundImagesStyle;
+ (BOOL)canUseGaussEffect;
+ (BOOL)awe_enableBackgroundImages;
+ (Class)aAWEBizTabBarDOUYINLiteAdapterClass;
+ (Class)aAWEBizTabBarConfigCommonAdapterClass;
+ (void)_aweLazyRegisterLoad_AWEFeedLongVideo;

- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)awe_snapshotImageView;
- (id)awe_snapshotImageViewAfterScreenUpdates:(BOOL)arg0;
- (id)awe_snapshotImageAfterScreenUpdates:(BOOL)arg0;
- (void)switchToLightModeWithProgress:(double)arg0;
- (void)setDarkBackgroundImageView:(id)arg0;
- (id)darkBackgroundImageView;
- (void)setLightBackgroundImageView:(id)arg0;
- (id)lightBackgroundImageView;
- (void)setExceedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)alignBottomIfExceed;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })exceedBounds;
- (void)updateTabBarButtons:(id)arg0 animated:(BOOL)arg1;
- (id)p_methodExtraInfo;
- (id)tabBarDelegate;
- (void)updateTabBarButtons:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })snapshotTabBarRect;
- (void)setTabBarDelegate:(id)arg0;
- (void)setAlignBottomIfExceed:(BOOL)arg0;
- (void)showBackgroundImagesWithProgress:(double)arg0;
- (void)setupWithLightMode:(BOOL)arg0;
- (id)custom_blurView;
- (void)setAwe_blurView:(id)arg0;
- (id)awe_blurView;
- (id)aAWEBizTabBarConfigCommonAdapter;
- (id)lightColorWithName:(id)arg0;
- (void)updateView:(id)arg0 fromColor:(id)arg1 toColor:(id)arg2 progress:(double)arg3;
- (void)updateBackgroundImagesLightModeWithProgress:(double)arg0;
- (id)aAWEBizTabBarDOUYINLiteAdapter;
- (id)awe_backgroundImageRenderer;
- (void)setAwe_backgroundImageRenderer:(id)arg0;
- (id)adapter_tabBarView;
- (BOOL)awefeed_pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)awefeed_hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setAlpha:(double)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })arg0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg0;
- (void)setBackgroundView:(id)arg0;
- (id)snapshotViewAfterScreenUpdates:(BOOL)arg0;
- (double)desiredHeight;
- (void)setDesiredHeight:(double)arg0;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg0;
- (void)setTabBarButtons:(id)arg0;
- (id)tabBarButtons;

@end
