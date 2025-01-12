//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSMutableSet;

@interface AWEPlayInteractionSuperLikeManager : NSObject {
    NSMutableDictionary *_superLikeStateDict;
    NSMutableSet *_superLikeStateChangedSet;
}

@property (retain, nonatomic) NSMutableDictionary *superLikeStateDict;
@property (retain, nonatomic) NSMutableSet *superLikeStateChangedSet;

+ (BOOL)isHitSuperLikeTest;
+ (void)handleSuperLikeShake;
+ (void)showSuperLikeGuideIfNeedAfterDigg:(id)arg0 referString:(id)arg1 toastTargetView:(id)arg2;
+ (BOOL)enableSuperLikeWithModel:(id)arg0;
+ (void)showAlreadySuperLikeToast;
+ (long long)longPressSupreLikeDuration;
+ (id)getWhiteToDoubleLottieView;
+ (void)showSuperLikeBoom;
+ (void)showBottomToastAfterSuperLike;
+ (id)getDoubleToWhiteLottieView;
+ (void)showBottomToastAfterCancelSuperLike;
+ (id)getRedToDoubleLottieView;
+ (BOOL)disableLongPressFastSpeedWithGesture:(id)arg0 aweme:(id)arg1;
+ (id)getCenterBoomLottieView;
+ (void)showGuideToast:(id)arg0;
+ (BOOL)longPressSuperLikeEnableCenterAnimation;
+ (id)sharedInstance;

- (void)updateWhileUndigWithItemID:(id)arg0;
- (void)updateSuperLikeCacheWithModel:(id)arg0;
- (void)updateModelWithSuperLikeCache:(id)arg0;
- (void)nativeUpdateSuperLikeStateWithAweme:(id)arg0;
- (void)setSuperLikeStateDict:(id)arg0;
- (void)setSuperLikeStateChangedSet:(id)arg0;
- (id)superLikeStateChangedSet;
- (id)superLikeStateDict;
- (id)init;
- (void).cxx_destruct;

@end
