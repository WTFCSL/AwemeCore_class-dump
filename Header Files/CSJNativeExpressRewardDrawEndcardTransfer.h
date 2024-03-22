//
//     Generated by private class-dump
//

@class CSJAdSlot, UIViewController, CSJRewardedVideoWebViewController, CSJNativeExpressRewardDrawAdView, NSString, CSJDislikeContext, CSJMaterialMeta;
@protocol CSJNativeExpressVideoAdDelegate;

@interface CSJNativeExpressRewardDrawEndcardTransfer : NSObject <CSJRewardedVideoWebViewDelegate> {
    BOOL _isShowAlertView;
    id<CSJNativeExpressVideoAdDelegate> _rewardedVideoAd;
    CSJNativeExpressRewardDrawAdView *_drawAdView;
    CSJAdSlot *_slot;
    CSJMaterialMeta *_materialMeta;
    CSJRewardedVideoWebViewController *_endcardWebVC;
    CSJDislikeContext *_dislikeContext;
    UIViewController *_currentViewController;
    UIViewController *_rootVC;
    UIViewController *_fromVC;
}

@property (retain, nonatomic) CSJAdSlot *slot;
@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (retain, nonatomic) CSJRewardedVideoWebViewController *endcardWebVC;
@property (retain, nonatomic) CSJDislikeContext *dislikeContext;
@property (nonatomic) BOOL isShowAlertView;
@property (weak, nonatomic) UIViewController *currentViewController;
@property (weak, nonatomic) UIViewController *rootVC;
@property (retain, nonatomic) UIViewController *fromVC;
@property (weak, nonatomic) id<CSJNativeExpressVideoAdDelegate> rewardedVideoAd;
@property (weak, nonatomic) CSJNativeExpressRewardDrawAdView *drawAdView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)materialMeta;
- (id)dislikeContext;
- (void)setMaterialMeta:(id)arg0;
- (void)setDislikeContext:(id)arg0;
- (void)createEndcardWebVC;
- (id)endcardWebVC;
- (void)setRootVC:(id)arg0;
- (void)setFromVC:(id)arg0;
- (id)rootVC;
- (id)drawAdView;
- (void)setIsShowAlertView:(BOOL)arg0;
- (id)initWithSlot:(id)arg0 materialMeta:(id)arg1;
- (void)switchToEndcardWithRootVC:(id)arg0 fromVC:(id)arg1 isMute:(BOOL)arg2;
- (void)setDrawAdView:(id)arg0;
- (void)setEndcardWebVC:(id)arg0;
- (BOOL)isShowAlertView;
- (id)fromVC;
- (id)rewardedVideoAd;
- (void)setRewardedVideoAd:(id)arg0;
- (id)getTrackTag;
- (void)rewardedVideoAdClose;
- (void)rewardedVideoH5AdDidClickNeedJump:(BOOL)arg0;
- (void)rewardedVideoWebViewControllerClick:(id)arg0 clickInfo:(id)arg1;
- (void)rewardedVideoWebViewControllerDislikeClick:(id)arg0;
- (id)slot;
- (void).cxx_destruct;
- (void)setSlot:(id)arg0;
- (void)setCurrentViewController:(id)arg0;
- (id)currentViewController;

@end
