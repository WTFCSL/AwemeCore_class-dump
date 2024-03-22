//
//     Generated by private class-dump
//

@class BDARVFeedADModel, NSString, NSArray, NSDictionary, BDARVSourceModel, BDARVPatchADModel, BDARVCardView, UIColor;
@protocol BDARVCardViewContainerDelegate;

@interface BDARVCardViewContainer : UIView <BDARVCardViewProtocol, BDARVCardViewContainerTypeProtocol, BDARVCardViewContainerProtocol> {
    BOOL _isVideoMute;
    UIColor *_btnHighlightColor;
    UIColor *_btnNormalColor;
    BDARVSourceModel *_sourceModel;
    BDARVCardView *_innerCardView;
    id<BDARVCardViewContainerDelegate> _delegate;
    NSArray *_feedAdModels;
    BDARVFeedADModel *_feedAdModel;
    long long _adType;
    unsigned long long _loadState;
    unsigned long long _cardViewAdType;
    BDARVPatchADModel *_patchAdModel;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _layoutFrame;
}

@property (nonatomic) BOOL bdpAppAdOnScreen;
@property (copy, nonatomic) NSArray *feedAdModels;
@property (retain, nonatomic) BDARVSourceModel *sourceModel;
@property (retain, nonatomic) BDARVFeedADModel *feedAdModel;
@property (nonatomic) long long adType;
@property (nonatomic) unsigned long long loadState;
@property (nonatomic) unsigned long long cardViewAdType;
@property (retain, nonatomic) BDARVPatchADModel *patchAdModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutFrame;
@property (nonatomic) BOOL isVideoMute;
@property (copy, nonatomic) UIColor *btnHighlightColor;
@property (copy, nonatomic) UIColor *btnNormalColor;
@property (retain, nonatomic) BDARVCardView *innerCardView;
@property (copy, nonatomic) NSDictionary *playerConfig;
@property (weak, nonatomic) id<BDARVCardViewContainerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (void)startPreload:(id)arg0;
+ (void)bannerPreloadSuccessWithSource:(id)arg0 adType:(id)arg1 duration:(id)arg2;
+ (id)getBDARVCardViewContainer:(id)arg0 feedAdModels:(id)arg1 delegate:(id)arg2;
+ (id)getBDARVNovelCardViewContainer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 source:(id)arg1 delegate:(id)arg2;
+ (id)getBDARVPatchCardViewContainer:(id)arg0 source:(id)arg1 delegate:(id)arg2;
+ (void)loadAds:(long long)arg0 source:(id)arg1 completed:(id /* block */)arg2;
+ (void)loadPatchAds:(long long)arg0 source:(id)arg1 completed:(id /* block */)arg2;
+ (long long)cacheAdCount:(id)arg0;
+ (long long)patchCacheAdCountCreatorID:(id)arg0;
+ (long long)cacheAdCountAdFrom:(id)arg0;
+ (void)clearCacheAdFrom:(id)arg0;

- (void)sendShowEvent;
- (id)playerConfig;
- (void)setPlayerConfig:(id)arg0;
- (void)setLayoutFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutWithOrigin:(struct CGPoint { double x0; double x1; })arg0;
- (void)layoutWithWidth:(double)arg0;
- (void)layoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)innerCardView;
- (unsigned long long)cardViewAdType;
- (void)innerLoadContent;
- (id)loadNovelAdModuleFromLocal:(id)arg0;
- (id)loadAdModuleFromLocal;
- (void)setInnerCardView:(id)arg0;
- (id)feedAdModel;
- (void)cardViewPreloadMPWithInfo:(id)arg0;
- (void)sendCardViewEventWithLabel:(id)arg0;
- (id)feedAdModels;
- (void)setFeedAdModel:(id)arg0;
- (void)hideCloseBtn;
- (void)sendShowOverEvent:(id)arg0;
- (void)sendCardViewEventWithTag:(id)arg0 label:(id)arg1 refer:(id)arg2;
- (id)loadModuleWithAdType:(long long)arg0;
- (BOOL)isVerticalVideo;
- (BOOL)handleAppstoreClosedLoopWith:(id)arg0;
- (void)setIsVideoMute:(BOOL)arg0;
- (void)setBtnNormalColor:(id)arg0;
- (void)setBtnHighlightColor:(id)arg0;
- (void)cardViewWillStartLoad;
- (void)cardViewDidLoadFailWithError:(id)arg0;
- (void)cardViewDidLoadSuccess;
- (void)cardViewDidContentResize:(struct CGSize { double x0; double x1; })arg0 info:(id)arg1;
- (void)cardViewPreloadFormWithInfo:(id)arg0;
- (void)cardViewDidClickBannerWithInfo:(id)arg0;
- (void)cardViewDidClickVideoWithInfo:(id)arg0;
- (void)cardViewDidClickCardViewWithInfo:(id)arg0;
- (void)cardViewDidClickCardViewButtonWithInfo:(id)arg0;
- (void)cardViewDidClickCloseWithInfo:(id)arg0;
- (void)cardViewDidClickFullScreen:(BOOL)arg0 completed:(id /* block */)arg1;
- (void)cardViewRenderVideoStart;
- (void)cardViewCloseAd;
- (void)cardViewLoadVideoError;
- (void)cardViewVideoAdDidFinish;
- (void)cardViewMuteBtnClick:(BOOL)arg0;
- (void)cardViewReportAction:(id)arg0 adModel:(id)arg1;
- (void)sendCardViewEventWithTag:(id)arg0 label:(id)arg1 refer:(id)arg2 extra:(id)arg3;
- (BOOL)isVideoMute;
- (id)btnHighlightColor;
- (id)btnNormalColor;
- (void)setFeedAdModels:(id)arg0;
- (void)setCardViewAdType:(unsigned long long)arg0;
- (id)patchAdModel;
- (void)setPatchAdModel:(id)arg0;
- (void)setBdpAppAdOnScreen:(BOOL)arg0;
- (void)bdpPluginDealloc;
- (BOOL)bdpAppAdOnScreen;
- (void)resume;
- (void).cxx_destruct;
- (unsigned long long)loadState;
- (void)close;
- (void)stop;
- (void)show;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrame;
- (BOOL)hasVideo;
- (BOOL)hasType:(long long)arg0;
- (id)delegate;
- (void)hide;
- (long long)adType;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (id)sourceModel;
- (void)enterFullScreen;
- (void)exitFullScreen;
- (void)loadContent;
- (void)setAdType:(long long)arg0;
- (void)setSourceModel:(id)arg0;
- (void)setLoadState:(unsigned long long)arg0;

@end