//
//     Generated by private class-dump
//

@class AWEPOIDetailMoreOptionViewController, NSString, NSDictionary, DitoGeneralContainerPageContext, AWEPOIDetailNGNavigationBarComponentView, AWEPOIDetailResponse, HalfContainerOffset;

@interface AWEPOIDetailNGNavigationBarViewModel : DitoComponentViewModel {
    BOOL _navBarIconWithRoundCircle;
    BOOL _firstCompleteShow;
    BOOL _shouldEventThrough;
    AWEPOIDetailNGNavigationBarComponentView *_componentView;
    NSString *_lynxUrl;
    NSDictionary *_lynxData;
    double _iconChangeThreshHold;
    AWEPOIDetailMoreOptionViewController *_moreOptionController;
    AWEPOIDetailResponse *_temporatyPOIDetail;
    HalfContainerOffset *_naviStartOffset;
    HalfContainerOffset *_naviEndOffset;
    HalfContainerOffset *_naviBGStartOffset;
    HalfContainerOffset *_naviBGEndOffset;
    HalfContainerOffset *_naviIconChangeOffset;
    NSString *_mapURL;
    NSDictionary *_sourceData;
}

@property (retain, nonatomic) AWEPOIDetailMoreOptionViewController *moreOptionController;
@property (retain, nonatomic) AWEPOIDetailResponse *temporatyPOIDetail;
@property (retain, nonatomic) HalfContainerOffset *naviStartOffset;
@property (retain, nonatomic) HalfContainerOffset *naviEndOffset;
@property (retain, nonatomic) HalfContainerOffset *naviBGStartOffset;
@property (retain, nonatomic) HalfContainerOffset *naviBGEndOffset;
@property (retain, nonatomic) HalfContainerOffset *naviIconChangeOffset;
@property (copy, nonatomic) NSString *mapURL;
@property (copy, nonatomic) NSDictionary *sourceData;
@property (readonly, nonatomic) DitoGeneralContainerPageContext *generalContext;
@property (nonatomic) BOOL firstCompleteShow;
@property (nonatomic) BOOL shouldEventThrough;
@property (weak, nonatomic) AWEPOIDetailNGNavigationBarComponentView *componentView;
@property (nonatomic) BOOL navBarIconWithRoundCircle;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSDictionary *lynxData;
@property (nonatomic) double iconChangeThreshHold;

- (id)lynxData;
- (id)lynxUrl;
- (void)setLynxData:(id)arg0;
- (void)setLynxUrl:(id)arg0;
- (id)poiDetail;
- (id)constData;
- (BOOL)navBarIconWithRoundCircle;
- (id)naviIconChangeOffset;
- (id)generalContext;
- (id)buildNaviOffset:(id)arg0;
- (void)setNaviBGStartOffset:(id)arg0;
- (void)setNaviBGEndOffset:(id)arg0;
- (void)setNaviIconChangeOffset:(id)arg0;
- (void)updatePOIDetail;
- (void)dispatchNaviBarStatusDidChangeAction:(double)arg0;
- (double)tryFetchNaviBarAlphaWithDynamicParams;
- (id)naviBGEndOffset;
- (id)naviBGStartOffset;
- (id)moreOptionController;
- (void)setMoreOptionController:(id)arg0;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)arg0;
- (void)bindStateAndAction;
- (void)pageView:(id)arg0 didScroll:(id)arg1;
- (void)didHalfContainerOffsetChange:(id)arg0 offset:(double)arg1;
- (void)changeAlphaWithRatio:(double)arg0;
- (double)iconChangeThreshHold;
- (BOOL)shouldEventThrough;
- (void)setNaviStartOffset:(id)arg0;
- (void)setNaviEndOffset:(id)arg0;
- (void)setTemporatyPOIDetail:(id)arg0;
- (void)setIconChangeThreshHold:(double)arg0;
- (double)hotelHeaderImageHeight;
- (void)userDidTapMore:(id)arg0;
- (double)alphaByScrollViewOffsetY:(double)arg0;
- (void)p_showMoreOptionView;
- (id)temporatyPOIDetail;
- (void)setShouldEventThrough:(BOOL)arg0;
- (id)naviStartOffset;
- (id)naviEndOffset;
- (id)fetchMapURL;
- (void)setNavBarIconWithRoundCircle:(BOOL)arg0;
- (id)mapURL;
- (void)setMapURL:(id)arg0;
- (BOOL)firstCompleteShow;
- (void)setFirstCompleteShow:(BOOL)arg0;
- (void)parseData:(id)arg0;
- (void).cxx_destruct;
- (id)initWithNode:(id)arg0;
- (id)store;
- (void)setComponentView:(id)arg0;
- (id)componentView;
- (id)sourceData;
- (void)setSourceData:(id)arg0;

@end
