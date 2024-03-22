//
//     Generated by private class-dump
//

@class AWELocalLifeAnchorModel, AWEPOITradeEntryAnchorView, AWEPOIItemAnchorContentModel, AWEAnchorIntentionalBehavior, NSDictionary, NSString;

@interface AWEPoiListAnchorViewManager : AWEBaseAnchorViewManager <AWEAnchorIntentionalBehaviorDelegate, AWEVideoPlayerBehaviorActionProtocol, AWEAnchorBehaviorActionProtocol> {
    BOOL _isVCAppear;
    BOOL _needCoverHotZoneClickEvent;
    AWELocalLifeAnchorModel *_sourceData;
    AWEPOIItemAnchorContentModel *_anchorContentData;
    AWEPOITradeEntryAnchorView *_entryView;
    AWEAnchorIntentionalBehavior *_intentionalManager;
    NSDictionary *_internalExtraInfo;
    id /* block */ _hotZoneClickBlock;
}

@property (retain, nonatomic) AWELocalLifeAnchorModel *sourceData;
@property (retain, nonatomic) AWEPOIItemAnchorContentModel *anchorContentData;
@property (retain, nonatomic) AWEPOITradeEntryAnchorView *entryView;
@property (retain, nonatomic) AWEAnchorIntentionalBehavior *intentionalManager;
@property (nonatomic) BOOL isVCAppear;
@property (copy, nonatomic) NSDictionary *internalExtraInfo;
@property (copy, nonatomic) id /* block */ hotZoneClickBlock;
@property (nonatomic) BOOL needCoverHotZoneClickEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handlePOIListAnchorParams:(id)arg0 referString:(id)arg1 logExtra:(id)arg2;

- (void)clickMultiAnchorEventHandler:(id /* block */)arg0;
- (void)setIsVCAppear:(BOOL)arg0;
- (BOOL)isVCAppear;
- (void)onAnchorClicked:(id)arg0;
- (void)showAnchorDetailByIntentional;
- (void)anchorBehaviorActionClickWithExtraInfo:(id)arg0;
- (void)anchorBehaviorActionResetWithExtraInfo:(id)arg0;
- (void)anchorBehaviorActionWilShowWithExtraInfo:(id)arg0;
- (void)anchorBehaviorActionSuperViewAppearWithExtraInfo:(id)arg0;
- (void)anchorBehaviorActionSuperViewDisappearWithExtraInfo:(id)arg0;
- (void)videoPlayerBehaviorActionPlayerPeriodChangeWithExtraInfo:(id)arg0;
- (void)videoPlayerBehaviorActionPlayerFinishWithExtraInfo:(id)arg0;
- (void)anchorBehaviorActionSecondInfoExpandWithExtraInfo:(id)arg0;
- (void)anchorBehaviorActionSecondInfoExpandEndWithExtraInfo:(id)arg0;
- (struct CGSize { double x0; double x1; })anchorViewSize;
- (BOOL)canShowSecondInfo;
- (void)triggerAnchorEvent:(long long)arg0 extraInfo:(id)arg1;
- (void)updateAnchorDataWithDataBuilder:(id)arg0;
- (void)updateAnchorExtraInfoWithExtraInfo:(id)arg0;
- (void)clickHotZoneAnchorEventHandler:(id /* block */)arg0 needCoverDefaultEvent:(BOOL)arg1;
- (void)p_updateSourceData;
- (id)anchorContentData;
- (id)internalExtraInfo;
- (void)setHotZoneClickBlock:(id /* block */)arg0;
- (void)setNeedCoverHotZoneClickEvent:(BOOL)arg0;
- (void)setInternalExtraInfo:(id)arg0;
- (void)p_tryShowSecondaryInfo;
- (void)setAnchorContentData:(id)arg0;
- (id /* block */)hotZoneClickBlock;
- (BOOL)needCoverHotZoneClickEvent;
- (id)intentionalManager;
- (BOOL)p_useNewStyleForFeedIfNeeded;
- (void)setIntentionalManager:(id)arg0;
- (id)getCompleteExtraInfoWithExtraInfo:(id)arg0;
- (void).cxx_destruct;
- (id)entryView;
- (id)initWithData:(id)arg0;
- (id)anchorView;
- (void)setEntryView:(id)arg0;
- (id)sourceData;
- (void)setSourceData:(id)arg0;

@end