//
//     Generated by private class-dump
//

@class NSNumber, NSString, DitoPageContext, AWEPOIUGCRatePageContext, AWEPOILoadingView, AWEPOIUGCRateScoreNavigationBarBizModel;
@protocol DitoExtensionContainerProtocol;

@interface AWEPOIUGCRateExtension : NSObject <DitoGeneralContainerTrackParamsDataSourceProtocol, AWEDitoGeneralContainerExtensionManagerExtraProtocol, DitoGeneralLynxContainerBusinessExtender, DitoExtensionProtocol> {
    DitoPageContext *_context;
    id<DitoExtensionContainerProtocol> _container;
    AWEPOILoadingView *_loadingView;
    AWEPOIUGCRateScoreNavigationBarBizModel *_navBarBizModel;
    NSNumber *_navBarThresholdOffset;
}

@property (readonly, nonatomic) AWEPOIUGCRatePageContext *pageContext;
@property (retain, nonatomic) AWEPOILoadingView *loadingView;
@property (retain, nonatomic) AWEPOIUGCRateScoreNavigationBarBizModel *navBarBizModel;
@property (retain, nonatomic) NSNumber *navBarThresholdOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;

- (void)configWithRouterParamDict:(id)arg0;
- (void)buildLoadingView;
- (void)resetLoadingView;
- (id)constData;
- (void)didLoadPageModel:(id)arg0;
- (void)didEndParseData:(id)arg0 error:(id)arg1;
- (void)didEndParseLoadMoreData:(id)arg0 error:(id)arg1;
- (void)didEndReload;
- (void)didSendRequest;
- (void)didEndRequestWithResponse:(id)arg0 error:(id)arg1;
- (void)pageDidScroll:(id)arg0;
- (void)initializeExtension;
- (void)ditoViewControllerDidTapEmptyPagePrimaryButton:(id)arg0;
- (void)ditoViewControllerViewChangeToState:(unsigned long long)arg0 withConfig:(id)arg1;
- (void)updateLynxThreadStrategyForPageModel:(id)arg0;
- (void)setupCubeModel:(id)arg0;
- (id)extraParamsWithCubeModel:(id)arg0 withContext:(id)arg1;
- (void)bindBDXEvent:(id)arg0;
- (void)setupStoreWithParams:(id)arg0;
- (void)setupConstDataWithParams:(id)arg0;
- (void)poiRateLynxLepusReady:(id)arg0;
- (void)updateSloganTrackParams;
- (id)navBarThresholdOffset;
- (id)navBarBizModel;
- (void)setNavBarBizModel:(id)arg0;
- (void)setNavBarThresholdOffset:(id)arg0;
- (id)container;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setContainer:(id)arg0;
- (id)context;
- (void)dealloc;
- (void)viewDidLoad;
- (id)pageContext;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end