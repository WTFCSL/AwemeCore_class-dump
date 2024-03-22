//
//     Generated by private class-dump
//

@class AWEPadSearchEntranceView, NSString, UIView;
@protocol AWESearchRecommendWordProtocol, AWEDiscoverFeedEntranceViewProtocol;

@interface AWEPadSearchEntranceService : HTSService <AWEPadSearchEntranceService, AWESearchrecommendWordUpdateObsever, AWEFeedThemeManagerProtocol> {
    UIView<AWEDiscoverFeedEntranceViewProtocol> *_discoverEntranceView;
    id<AWESearchRecommendWordProtocol> _recommendWordManager;
    AWEPadSearchEntranceView *_padSearchEntranceView;
}

@property (weak, nonatomic) UIView<AWEDiscoverFeedEntranceViewProtocol> *discoverEntranceView;
@property (retain, nonatomic) id<AWESearchRecommendWordProtocol> recommendWordManager;
@property (retain, nonatomic) AWEPadSearchEntranceView *padSearchEntranceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)recommendWordManager;
- (void)configAlpha:(double)arg0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg1;
- (void)themeDidChange:(long long)arg0;
- (id)discoverEntranceView;
- (void)setDiscoverEntranceView:(id)arg0;
- (void)setRecommendWordManager:(id)arg0;
- (BOOL)setupDiscoverEntranceView:(id)arg0;
- (id)getSearchURLWithPageName:(id)arg0 itemID:(id)arg1 videoInfoExtra:(id)arg2 clickIntoSearchTime:(unsigned long long)arg3;
- (void)containerViewController:(id)arg0 onDiscoverButtonClicked:(id)arg1;
- (BOOL)updateDiscoverEntranceViewFrame:(id)arg0 withConstraintView:(id)arg1 withContainerView:(id)arg2;
- (void)updateRelatedWord:(id)arg0;
- (void)updateRecommendWord:(id)arg0 awemeModel:(id)arg1;
- (void)fetchRecommWordWithGroupId:(id)arg0 businessID:(id)arg1 pd:(id)arg2 categoryName:(id)arg3 wordsSource:(id)arg4 enterFrom:(id)arg5 broadcast:(BOOL)arg6 completion:(id /* block */)arg7;
- (void)fetchRecommendWordWithEnterFrom:(id)arg0;
- (id)trendingWordsFrom;
- (void)fetchRelatedWordWithGroupID:(id)arg0 enterFrom:(id)arg1;
- (void)trackEventTrendingWordShow:(id)arg0 enterFromSecond:(id)arg1 gid:(id)arg2 wordSource:(id)arg3;
- (void)trackEventTrendingWordClick:(id)arg0 groupID:(id)arg1 gid:(id)arg2 wordSource:(id)arg3;
- (void)fetchRecommWordWithGroupId:(id)arg0 businessID:(id)arg1 pd:(id)arg2 categoryName:(id)arg3 wordsSource:(id)arg4 query:(id)arg5 query_id:(id)arg6 enterFrom:(id)arg7 broadcast:(BOOL)arg8 completion:(id /* block */)arg9;
- (void)fetchRecommWordByLastQueryWithBusinessID:(id)arg0 pd:(id)arg1 categoryName:(id)arg2 wordsSource:(id)arg3 enterFrom:(id)arg4 broadcast:(BOOL)arg5 completion:(id /* block */)arg6;
- (id)padSearchEntranceView;
- (id)typeToReferString:(long long)arg0;
- (void)recommendWordDidChange:(id)arg0 requestParams:(id)arg1;
- (void)setPadSearchEntranceView:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end