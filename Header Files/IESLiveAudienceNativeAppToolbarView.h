//
//     Generated by private class-dump
//

@class UIImageView, NSString, ShelfInfo;
@protocol IESLiveWebPPlayer;

@interface IESLiveAudienceNativeAppToolbarView : UIView <IESLiveAudienceNativeAppAnimationActions, IESLiveToolBarCoordinaryAnimationAction> {
    long long _animationABType;
    long long _animationTriggerTimes;
    BOOL _isShowingFlowerAnim;
    id /* block */ _willStartFlowerAnimationBlock;
    UIImageView<IESLiveWebPPlayer> *_snowImageView;
    ShelfInfo *_shelfInfo;
}

@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *snowImageView;
@property (retain, nonatomic) ShelfInfo *shelfInfo;
@property (nonatomic) BOOL isShowingFlowerAnim;
@property (copy, nonatomic) id /* block */ willStartFlowerAnimationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)arg0;
- (long long)abType;
- (unsigned long long)animationTriggerState;
- (id)shelfInfo;
- (void)setShelfInfo:(id)arg0;
- (void)addCoordinateAnimationAction;
- (void)updateStaticImage:(id)arg0;
- (BOOL)isShowingFlowerAnimation;
- (BOOL)enableAllAnimationWithShelfInfo:(id)arg0;
- (BOOL)enableTriggerCenterFlowerAnimationWithShelfInfo:(id)arg0 isEnterRoom:(BOOL)arg1 is01Shelf:(BOOL)arg2;
- (BOOL)enablePlayCenterFlowerAnimationWithShelfInfo:(id)arg0;
- (BOOL)enablePlayBusinessFlowerAnimationWithShelfInfo:(id)arg0 isEnterRoom:(BOOL)arg1 isChange:(BOOL)arg2;
- (BOOL)enableSmallCardAnimationWithShelfInfo:(id)arg0 isEnterRoom:(BOOL)arg1 isShow:(BOOL)arg2 cardContainerView:(id)arg3;
- (BOOL)enableBigCardAnimationWhenIsEnterRoom:(BOOL)arg0;
- (void)triggerCoordinateAnimation;
- (void)updateShelfInfo:(id)arg0;
- (void)setWillStartFlowerAnimationBlock:(id /* block */)arg0;
- (void)prefetchWebPURL;
- (void)updateUIForAnimation;
- (id)snowImageView;
- (BOOL)isShowingFlowerAnim;
- (void)setIsShowingFlowerAnim:(BOOL)arg0;
- (id /* block */)willStartFlowerAnimationBlock;
- (BOOL)enableDeviceWithKey:(id)arg0;
- (void)playAnimationWithComplete:(id /* block */)arg0;
- (void)setSnowImageView:(id)arg0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)triggerAnimation;
- (void)setupService;

@end