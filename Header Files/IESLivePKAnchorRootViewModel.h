//
//     Generated by private class-dump
//

@class NSString, NSArray, IESLivePKNormalPanelViewModel, NSMutableDictionary, HTSLivePKApi, NSNumber, RivalsRecommendResponse_TopTip;
@protocol IESLiveRoomServiceAdapter;

@interface IESLivePKAnchorRootViewModel : NSObject {
    BOOL _isFlexActivityUpdate;
    id<IESLiveRoomServiceAdapter> _room;
    RivalsRecommendResponse_TopTip *_topTipInfo;
    NSString *_searchBarString;
    NSString *_tabName;
    NSArray *_tabs;
    IESLivePKNormalPanelViewModel *_normalPKPanelViewModel;
    HTSLivePKApi *_api;
    NSMutableDictionary *_flexActivityPanelViewModels;
}

@property (retain, nonatomic) HTSLivePKApi *api;
@property (retain, nonatomic) NSArray *tabs;
@property (retain, nonatomic) IESLivePKNormalPanelViewModel *normalPKPanelViewModel;
@property (retain, nonatomic) NSMutableDictionary *flexActivityPanelViewModels;
@property (nonatomic) BOOL isFlexActivityUpdate;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (retain, nonatomic) RivalsRecommendResponse_TopTip *topTipInfo;
@property (retain, nonatomic) NSNumber *currentTabFlexActivityID;
@property (retain, nonatomic) NSString *searchBarString;
@property (retain, nonatomic) NSString *tabName;
@property (readonly, nonatomic) BOOL couldRefreshPanel;

- (long long)useNewStyle;
- (void)requestBattleRivalsWithEntrance:(unsigned long long)arg0 lastTabName:(id)arg1 tabType:(int)arg2 recommendSelectType:(int)arg3 loadType:(long long)arg4 isFirst:(BOOL)arg5 requestSource:(id)arg6 callback:(id /* block */)arg7;
- (id)initWithDIContext:(id)arg0 room:(id)arg1;
- (id)normalPKPanelViewModel;
- (BOOL)couldRefreshPanel;
- (void)updatePKDurationIfNeeded;
- (void)fetchPanelData:(id /* block */)arg0;
- (void)updateViewModelWithResponse:(id)arg0 loadType:(long long)arg1 completion:(id /* block */)arg2;
- (BOOL)needShowTabCollectionView;
- (id)currentTabFlexActivityID;
- (void)setCurrentTabFlexActivityID:(id)arg0;
- (id)getFlexActivityViewModelWithID:(id)arg0;
- (void)registerFlexActivity:(id)arg0 completion:(id /* block */)arg1;
- (id)searchBarString;
- (BOOL)needShowTopTipsForPeakDuration;
- (id)topTipInfo;
- (void)setSearchBarString:(id)arg0;
- (void)setTopTipInfo:(id)arg0;
- (void)updateNewStyleViewModelWithResponse:(id)arg0 loadType:(long long)arg1 completion:(id /* block */)arg2;
- (void)setIsFlexActivityUpdate:(BOOL)arg0;
- (id)setupNormalPKTab;
- (void)addClickFlagForTabItem:(id)arg0;
- (id)setupTabItemWithData:(id)arg0;
- (void)trackTabShowWithItem:(id)arg0;
- (void)updateFlexActivityViewModel:(id)arg0;
- (BOOL)isFlexActivityUpdate;
- (id)flexActivityPanelViewModels;
- (void)updateTabItemWithData:(id)arg0;
- (void)setFlexActivityPanelViewModels:(id)arg0;
- (void)setNormalPKPanelViewModel:(id)arg0;
- (BOOL)shouldUseTemporaryPKDuration;
- (void).cxx_destruct;
- (id)tabs;
- (BOOL)hasActivity;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)api;
- (void)setTabs:(id)arg0;
- (void)setTabName:(id)arg0;
- (id)tabName;
- (void)clean;
- (void)setApi:(id)arg0;

@end
