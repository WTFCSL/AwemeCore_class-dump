//
//     Generated by private class-dump
//

@class NSMutableDictionary, UIImageView, IESECGoodsDetailTimeCountdownView, UILabel, IESECGoodsFeedCommonGirdleRightComponent;

@interface IESECGoodsFeedCommonGirdleComponentView : IESECGoodsDetailBaseComponentView {
    UIImageView *_backgroundImageView;
    UIImageView *_leftLogoImageView;
    UILabel *_rightSloganTextLabel;
    IESECGoodsDetailTimeCountdownView *_countDownView;
    long long _showComponentOptions;
    NSMutableDictionary *_rightComponentCache;
    IESECGoodsFeedCommonGirdleRightComponent *_rightComponent;
}

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *leftLogoImageView;
@property (retain, nonatomic) UILabel *rightSloganTextLabel;
@property (retain, nonatomic) IESECGoodsDetailTimeCountdownView *countDownView;
@property (nonatomic) long long showComponentOptions;
@property (retain, nonatomic) NSMutableDictionary *rightComponentCache;
@property (retain, nonatomic) IESECGoodsFeedCommonGirdleRightComponent *rightComponent;

+ (double)bottomOverlapHeight;
+ (BOOL)componentViewShouldShow:(id)arg0 style:(long long)arg1;
+ (double)componentViewHeight:(id)arg0 style:(long long)arg1;

- (id)countDownView;
- (void)setCountDownView:(id)arg0;
- (void)updateWithParameters:(id)arg0;
- (id)rightComponent;
- (void)setRightComponent:(id)arg0;
- (void)handleActivityUpdateNotification:(id)arg0;
- (id)initWithParameters:(id)arg0 style:(long long)arg1 tracker:(id)arg2;
- (id)rightComponentCache;
- (id)rightComponentForType:(long long)arg0 withParameters:(id)arg1;
- (void)setComponentsShowStateWithModel:(id)arg0;
- (void)configLeftLogoImageViewWithModel:(id)arg0;
- (void)updateRightContainer;
- (id)leftLogoImageView;
- (void)configCountViewWithActivityManager:(id)arg0;
- (void)setLeftLogoImageView:(id)arg0;
- (id)rightSloganTextLabel;
- (void)setRightSloganTextLabel:(id)arg0;
- (long long)showComponentOptions;
- (void)setShowComponentOptions:(long long)arg0;
- (void)setRightComponentCache:(id)arg0;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (void)setupUI;
- (void)setBackgroundImageView:(id)arg0;

@end