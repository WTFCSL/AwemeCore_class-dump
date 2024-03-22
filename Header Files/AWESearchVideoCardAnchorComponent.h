//
//     Generated by private class-dump
//

@class UIView, NSString, AWEModernFeedVideoFooterNativeView, AWEModernFeedVideoFooterLynxView, AWEModernFeedGoodsLynxView, AWEModernFeedTagView, AWEModernFeedNormalTagView, AWEGeneralSearchVideoCardModel;

@interface AWESearchVideoCardAnchorComponent : AWESearchComponent <AWEModernFeedVideoFooterLynxViewDelegate, AWESearchVideoCardAnchorComponentProtocol> {
    BOOL _ironManClicked;
    BOOL _enableFixGeneralCachalotSearchShowError;
    BOOL _currentModelFromSetupModelOnly;
    UIView *_contentView;
    AWEModernFeedGoodsLynxView *_goodsLynxView;
    AWEModernFeedTagView *_tagView;
    AWEModernFeedNormalTagView *_normalTagView;
    AWEGeneralSearchVideoCardModel *_bindedModel;
    AWEModernFeedVideoFooterLynxView *_footerLynxView;
    AWEModernFeedVideoFooterNativeView *_footerNativeView;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEModernFeedGoodsLynxView *goodsLynxView;
@property (retain, nonatomic) AWEModernFeedTagView *tagView;
@property (retain, nonatomic) AWEModernFeedNormalTagView *normalTagView;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *bindedModel;
@property (retain, nonatomic) AWEModernFeedVideoFooterLynxView *footerLynxView;
@property (retain, nonatomic) AWEModernFeedVideoFooterNativeView *footerNativeView;
@property (nonatomic) BOOL ironManClicked;
@property (nonatomic) BOOL enableFixGeneralCachalotSearchShowError;
@property (nonatomic) BOOL currentModelFromSetupModelOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)arg0 width:(double)arg1;
+ (struct CGSize { double x0; double x1; })p_calculateComponentSize:(double)arg0 withModel:(id)arg1;

- (id)referString;
- (void)sendShowEvent;
- (void)trackAnchorShowWithType:(id)arg0;
- (BOOL)ironManClicked;
- (void)trackIronMan_in_video_tag;
- (void)setIronManClicked:(BOOL)arg0;
- (void)trackEvent:(id)arg0 message:(id)arg1;
- (void)trackAnchorShowWithType:(id)arg0 extraParameter:(id)arg1;
- (void)updateSubviewsContent:(BOOL)arg0;
- (void)onIronManButtonClicked:(id)arg0;
- (void)shoppingCartClickAction;
- (void)onPoiButtonClicked:(id)arg0;
- (void)onPlatformButtonClicked:(id)arg0;
- (void)onMvButtonClicked:(id)arg0;
- (void)onStickerButtonClicked:(id)arg0;
- (void)jumpToMerchandiseWithRequest:(id)arg0;
- (void)awe_enterPOIFullScreenPage;
- (void)setBindedModel:(id)arg0;
- (void)setModelOnly:(id)arg0;
- (id)bindedModel;
- (void)updateWithChunkModel:(id)arg0;
- (id)playerProvider;
- (void)updateWithModel:(id)arg0 forceUpdate:(BOOL)arg1;
- (id)provideProtocol;
- (void)componentViewDidStartShowing;
- (void)componentViewDidEndShowing;
- (id)accessibilityElementsArr;
- (id)stickerSearchParams:(BOOL)arg0;
- (id)footerLynxView;
- (id)footerNativeView;
- (id)normalTagView;
- (BOOL)shouldAdaptSearchUIQualityUpgrade;
- (void)updateVideoFooterLynxView;
- (void)onLynxOpenMixVideoNotification:(id)arg0;
- (void)footerLynxView:(id)arg0 didChangedHeight:(double)arg1;
- (void)setFooterLynxView:(id)arg0;
- (void)setFooterNativeView:(id)arg0;
- (id)goodsLynxView;
- (void)didClickAnchorTagView;
- (void)_updateSubviewsWithModel:(id)arg0 animated:(BOOL)arg1;
- (void)trackAnchorEntranceShow;
- (id)logExtraAddSearchParams:(id)arg0 searchParams:(id)arg1;
- (id)searchResultParames;
- (void)trackAnchorEntranceShowForPOI;
- (id)gameIronManSearchParames;
- (void)setNormalTagView:(id)arg0;
- (void)setGoodsLynxView:(id)arg0;
- (id)p_context;
- (void)p_updateWithModel:(id)arg0 forceUpdate:(BOOL)arg1;
- (void)setCurrentModelFromSetupModelOnly:(BOOL)arg0;
- (BOOL)currentModelFromSetupModelOnly;
- (void)updateSubviewFramesWithIsNeedUpdateData:(BOOL)arg0;
- (void)p_trackOldNativeAnchorShow;
- (void)p_super_updateSubviewFramesWithIsNeedUpdateData:(BOOL)arg0;
- (BOOL)enableFixGeneralCachalotSearchShowError;
- (void)setEnableFixGeneralCachalotSearchShowError:(BOOL)arg0;
- (id)interactor;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (id)logData;
- (id)contentView;
- (void)setContentView:(id)arg0;
- (id)componentView;
- (void)setupUI;
- (id)router;
- (id)tagView;
- (void)setTagView:(id)arg0;

@end
