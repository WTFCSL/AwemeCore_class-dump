//
//     Generated by private class-dump
//

@class NSString, NSDictionary, CSJNativeExpressFullscreenVideoAd, CSJAdSlot;
@protocol CSJFullscreenVideoAdDelegate;

@interface CSJFullscreenVideoAd : NSObject <CSJNativeExpressFullscreenVideoAdDelegate, CSJMopubAdMarkUpDelegate, CSJAdClientBiddingProtocol> {
    BOOL _materialMetaIsFromPreload;
    BOOL _didSetADM;
    id<CSJFullscreenVideoAdDelegate> _delegate;
    CSJNativeExpressFullscreenVideoAd *_nativeExpressFullscreenVideoAd;
    CSJAdSlot *_slot;
    double _expireTimestamp;
}

@property (retain, nonatomic) CSJNativeExpressFullscreenVideoAd *nativeExpressFullscreenVideoAd;
@property (retain, nonatomic) CSJAdSlot *slot;
@property (nonatomic) BOOL materialMetaIsFromPreload;
@property (nonatomic) double expireTimestamp;
@property (nonatomic) BOOL didSetADM;
@property (weak, nonatomic) id<CSJFullscreenVideoAdDelegate> delegate;
@property (readonly, copy, nonatomic) NSDictionary *mediaExt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNativeExpressFullscreenVideoAd:(id)arg0;
- (id)nativeExpressFullscreenVideoAd;
- (void)handleMopubSuccessLoadVideo:(id)arg0 isPre:(BOOL)arg1;
- (void)safeDelegate_fullscreenVideoAdVideoDataDidLoad:(id)arg0;
- (void)safeDelegate_fullscreenVideoMaterialMetaAdDidLoad:(id)arg0;
- (void)safeDelegate_fullscreenVideoAd:(id)arg0 didFailWithError:(id)arg1;
- (void)safeDelegate_fullscreenVideoAdWillVisible:(id)arg0;
- (void)safeDelegate_fullscreenVideoAdDidVisible:(id)arg0;
- (void)safeDelegate_fullscreenVideoAdDidClick:(id)arg0;
- (void)safeDelegate_fullscreenVideoAdDidClickSkip:(id)arg0;
- (void)safeDelegate_fullscreenVideoAdWillClose:(id)arg0;
- (void)safeDelegate_fullscreenVideoAdDidClose:(id)arg0;
- (void)safeDelegate_fullscreenVideoAdDidPlayFinish:(id)arg0 didFailWithError:(id)arg1;
- (unsigned long long)fullscreenVideoAdType;
- (void)safeDelegate_fullscreenVideoAdCallback:(id)arg0 withType:(unsigned long long)arg1;
- (BOOL)didSetADM;
- (void)win:(id)arg0;
- (void)loss:(id)arg0 lossReason:(id)arg1 winBidder:(id)arg2;
- (void)setDidSetADM:(BOOL)arg0;
- (id)mediaExt;
- (void)setAdMarkup:(id)arg0;
- (id)biddingToken;
- (void)loadAdData;
- (id)getAdCreativeToken;
- (BOOL)showAdFromRootViewController:(id)arg0 ritSceneDescribe:(id)arg1;
- (BOOL)materialMetaIsFromPreload;
- (void)nativeExpressFullscreenVideoAdDidLoad:(id)arg0;
- (void)nativeExpressFullscreenVideoAdCallback:(id)arg0 withType:(unsigned long long)arg1;
- (void)nativeExpressFullscreenVideoAdDidDownLoadVideo:(id)arg0;
- (void)nativeExpressFullscreenVideoAdViewRenderSuccess:(id)arg0;
- (void)nativeExpressFullscreenVideoAdDidClickSkip:(id)arg0;
- (void)nativeExpressFullscreenVideoAdDidPlayFinish:(id)arg0 didFailWithError:(id)arg1;
- (void)nativeExpressFullscreenVideoAdWillClose:(id)arg0;
- (void)nativeExpressFullscreenVideoAdDidClose:(id)arg0;
- (void)nativeExpressFullscreenVideoAdDidClick:(id)arg0;
- (void)nativeExpressFullscreenVideoAdDidVisible:(id)arg0;
- (void)nativeExpressFullscreenVideoAd:(id)arg0 didFailWithError:(id)arg1;
- (void)nativeExpressFullscreenVideoAdViewRenderFail:(id)arg0 error:(id)arg1;
- (void)nativeExpressFullscreenVideoAdDidCloseOtherController:(id)arg0 interactionType:(long long)arg1;
- (void)nativeExpressFullscreenVideoAdWillVisible:(id)arg0;
- (double)getExpireTimestamp;
- (void)setMaterialMetaIsFromPreload:(BOOL)arg0;
- (BOOL)showAdFromRootViewController:(id)arg0;
- (id)slot;
- (BOOL)isMemberOfClass:(Class)arg0;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg0;
- (id)initWithSlot:(id)arg0;
- (id)delegate;
- (void)setSlot:(id)arg0;
- (id)initWithSlotID:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setPrice:(id)arg0;
- (double)expireTimestamp;
- (void)setExpireTimestamp:(double)arg0;

@end
