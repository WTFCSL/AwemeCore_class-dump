//
//     Generated by private class-dump
//

@class NSString, CSJNativeExpressRewardedVideoAd, NSDictionary, CSJRewardedVideoModel, CSJAdSlot;
@protocol CSJRewardedVideoAdDelegate;

@interface CSJRewardedVideoAd : NSObject <CSJNativeExpressRewardedVideoAdDelegate, CSJMopubAdMarkUpDelegate, CSJAdClientBiddingProtocol> {
    BOOL _materialMetaIsFromPreload;
    BOOL _didSetADM;
    BOOL _playFinishDidCallback;
    CSJRewardedVideoModel *_rewardedVideoModel;
    id<CSJRewardedVideoAdDelegate> _delegate;
    id<CSJRewardedVideoAdDelegate> _rewardPlayAgainInteractionDelegate;
    CSJNativeExpressRewardedVideoAd *_nativeExpressRewardedVideoAd;
    double _expireTimestamp;
    CSJAdSlot *_slot;
}

@property (retain, nonatomic) CSJNativeExpressRewardedVideoAd *nativeExpressRewardedVideoAd;
@property (nonatomic) BOOL materialMetaIsFromPreload;
@property (nonatomic) double expireTimestamp;
@property (nonatomic) BOOL didSetADM;
@property (nonatomic) BOOL playFinishDidCallback;
@property (retain, nonatomic) CSJAdSlot *slot;
@property (retain, nonatomic) CSJRewardedVideoModel *rewardedVideoModel;
@property (weak, nonatomic) id<CSJRewardedVideoAdDelegate> delegate;
@property (weak, nonatomic) id<CSJRewardedVideoAdDelegate> rewardPlayAgainInteractionDelegate;
@property (readonly, copy, nonatomic) NSDictionary *mediaExt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleMopubSuccessLoadVideo:(id)arg0 isPre:(BOOL)arg1;
- (BOOL)didSetADM;
- (void)win:(id)arg0;
- (void)loss:(id)arg0 lossReason:(id)arg1 winBidder:(id)arg2;
- (void)setDidSetADM:(BOOL)arg0;
- (id)mediaExt;
- (void)setAdMarkup:(id)arg0;
- (id)biddingToken;
- (void)loadAdData;
- (id)getAdCreativeToken;
- (BOOL)materialMetaIsFromPreload;
- (void)setRewardedVideoModel:(id)arg0;
- (double)getExpireTimestamp;
- (void)setMaterialMetaIsFromPreload:(BOOL)arg0;
- (id)rewardedVideoModel;
- (id)initWithSlot:(id)arg0 rewardedVideoModel:(id)arg1;
- (void)setNativeExpressRewardedVideoAd:(id)arg0;
- (id)nativeExpressRewardedVideoAd;
- (BOOL)showAdFromRootViewController:(id)arg0 ritScene:(long long)arg1 ritSceneDescribe:(id)arg2;
- (void)safeDelegate_rewardedVideoAd:(id)arg0 didFailWithError:(id)arg1;
- (void)safeDelegate_rewardedVideoAdVideoDidLoad:(id)arg0;
- (void)safeDelegate_rewardedVideoAdDidLoad:(id)arg0;
- (unsigned long long)rewardedVideoAdType;
- (void)safeDelegate_rewardedVideoAdCallback:(id)arg0 withType:(unsigned long long)arg1;
- (void)safeDelegate_rewardedVideoAdWillVisible:(id)arg0;
- (void)safeDelegate_rewardedVideoAdDidVisible:(id)arg0;
- (void)safeDelegate_rewardedVideoAdWillClose:(id)arg0;
- (void)safeDelegate_rewardedVideoAdDidClose:(id)arg0;
- (void)safeDelegate_rewardedVideoAdDidClick:(id)arg0;
- (void)safeDelegate_rewardedVideoAdDidClickSkip:(id)arg0;
- (void)safeDelegate_rewardedVideoAdDidPlayFinish:(id)arg0 didFailWithError:(id)arg1;
- (void)safeDelegate_rewardedVideoAdServerRewardDidSucceed:(id)arg0 verify:(BOOL)arg1;
- (void)safeDelegate_rewardedVideoAdServerRewardDidFail:(id)arg0 error:(id)arg1;
- (void)setPlayFinishDidCallback:(BOOL)arg0;
- (BOOL)playFinishDidCallback;
- (void)nativeExpressRewardedVideoAdDidLoad:(id)arg0;
- (void)nativeExpressRewardedVideoAd:(id)arg0 didFailWithError:(id)arg1;
- (void)nativeExpressRewardedVideoAdCallback:(id)arg0 withType:(unsigned long long)arg1;
- (void)nativeExpressRewardedVideoAdDidDownLoadVideo:(id)arg0;
- (void)nativeExpressRewardedVideoAdViewRenderSuccess:(id)arg0;
- (void)nativeExpressRewardedVideoAdViewRenderFail:(id)arg0 error:(id)arg1;
- (void)nativeExpressRewardedVideoAdWillVisible:(id)arg0;
- (void)nativeExpressRewardedVideoAdDidVisible:(id)arg0;
- (void)nativeExpressRewardedVideoAdWillClose:(id)arg0;
- (void)nativeExpressRewardedVideoAdDidClose:(id)arg0;
- (void)nativeExpressRewardedVideoAdDidClick:(id)arg0;
- (void)nativeExpressRewardedVideoAdDidClickSkip:(id)arg0;
- (void)nativeExpressRewardedVideoAdDidPlayFinish:(id)arg0 didFailWithError:(id)arg1;
- (void)nativeExpressRewardedVideoAdServerRewardDidSucceed:(id)arg0 verify:(BOOL)arg1;
- (void)nativeExpressRewardedVideoAdServerRewardDidFail:(id)arg0 error:(id)arg1;
- (void)nativeExpressRewardedVideoAdDidCloseOtherController:(id)arg0 interactionType:(long long)arg1;
- (void)handleFailLoadMaterial:(id)arg0;
- (void)setRewardPlayAgainInteractionDelegate:(id)arg0;
- (id)rewardPlayAgainInteractionDelegate;
- (id)initWithSlotID:(id)arg0 rewardedVideoModel:(id)arg1;
- (BOOL)showAdFromRootViewController:(id)arg0;
- (id)slot;
- (BOOL)isMemberOfClass:(Class)arg0;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg0;
- (id)delegate;
- (void)setSlot:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setPrice:(id)arg0;
- (double)expireTimestamp;
- (void)setExpireTimestamp:(double)arg0;

@end
