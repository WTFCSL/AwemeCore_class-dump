//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIImage, AWEQuickStoryRecommendStickerModel, AWEAwemeModel;

@interface AWEQuickStoryStickerIconViewController : UIViewController <AWEBizTabBarLightModeListenerProtocol> {
    BOOL _isShowingMomentGuide;
    BOOL _isAnimating;
    BOOL _isDismissing;
    AWEQuickStoryRecommendStickerModel *_stickerModel;
    id /* block */ _tapIconActionBlock;
    NSString *_referString;
    AWEAwemeModel *_awemeModel;
    UIImageView *_stickerIcon;
    UIImageView *_animationStickerIcon;
    UIImage *_momentInvertImage;
}

@property (retain, nonatomic) UIImageView *stickerIcon;
@property (retain, nonatomic) UIImageView *animationStickerIcon;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL isDismissing;
@property (retain, nonatomic) UIImage *momentInvertImage;
@property (retain, nonatomic) AWEQuickStoryRecommendStickerModel *stickerModel;
@property (copy, nonatomic) id /* block */ tapIconActionBlock;
@property (nonatomic) BOOL isShowingMomentGuide;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)referString;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)switchToLightModeWithProgress:(double)arg0;
- (void)setStickerModel:(id)arg0;
- (id)stickerModel;
- (void)dismissStickerWithAnimation:(BOOL)arg0;
- (void)setTapIconActionBlock:(id /* block */)arg0;
- (void)updateSticker:(id)arg0 withAwemeModel:(id)arg1;
- (void)showSticker:(id)arg0 withAwemeModel:(id)arg1;
- (void)trackFastCrossTriggerEventForMomentWithAweme:(id)arg0;
- (id)stickerIcon;
- (void)setIsShowingMomentGuide:(BOOL)arg0;
- (void)showIconTransform;
- (void)stickerIconTapped:(id)arg0;
- (void)setAnimationStickerIcon:(id)arg0;
- (id)animationStickerIcon;
- (void)stickerAddRadiusIfNeedWithIsClearRadius:(BOOL)arg0;
- (id)invertImageColors:(id)arg0;
- (void)setMomentInvertImage:(id)arg0;
- (void)p_trackFastCrossTriggerEventWithAwemeModel:(id)arg0;
- (void)animationStickerAddRadiusIfNeed;
- (BOOL)openStickerAddCornerOpt;
- (BOOL)currentAwemeModelIsAISticker;
- (double)stickerAddCornerValue;
- (id /* block */)tapIconActionBlock;
- (id)momentInvertImage;
- (id)imageWithDarkImage:(id)arg0 lightImage:(id)arg1 progress:(double)arg2;
- (void)showIconWithImage:(id)arg0 andMode:(unsigned long long)arg1;
- (void)updateIconWithImage:(id)arg0 andMode:(unsigned long long)arg1;
- (BOOL)isShowingMomentGuide;
- (void)setStickerIcon:(id)arg0;
- (BOOL)isAnimating;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (BOOL)isDismissing;
- (void)viewDidLoad;
- (void)setIsAnimating:(BOOL)arg0;
- (void)setupUI;
- (void)setIsDismissing:(BOOL)arg0;

@end
