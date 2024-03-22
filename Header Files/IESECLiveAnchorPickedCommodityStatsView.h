//
//     Generated by private class-dump
//

@class IESECLiveRoomContext, NSString, IESECLiveAnchorPickedCommodityStatsViewFooter, IESECLiveApi, UITableView, IESECLiveStateView, NSMutableArray, IESECLiveAnchorAirView;

@interface IESECLiveAnchorPickedCommodityStatsView : IESECLiveAnchorNavigationBaseView <UITableViewDataSource, UITableViewDelegate, IESECLiveAnchorPickedCommodityStatsViewFooterDelegate> {
    BOOL _hasMore;
    IESECLiveApi *_api;
    IESECLiveRoomContext *_roomContext;
    NSString *_roomId;
    NSString *_descText;
    NSString *_descURL;
    NSString *_pageIndex;
    long long _status;
    NSMutableArray *_goods;
    UITableView *_tableView;
    IESECLiveAnchorPickedCommodityStatsViewFooter *_footerView;
    IESECLiveStateView *_stateView;
    IESECLiveAnchorAirView *_airView;
}

@property (retain, nonatomic) IESECLiveApi *api;
@property (retain, nonatomic) IESECLiveRoomContext *roomContext;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *descText;
@property (copy, nonatomic) NSString *descURL;
@property (copy, nonatomic) NSString *pageIndex;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSMutableArray *goods;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESECLiveAnchorPickedCommodityStatsViewFooter *footerView;
@property (retain, nonatomic) IESECLiveStateView *stateView;
@property (retain, nonatomic) IESECLiveAnchorAirView *airView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (id)goods;
- (void)setGoods:(id)arg0;
- (id)stateView;
- (void)setStateView:(id)arg0;
- (id)descText;
- (void)setDescText:(id)arg0;
- (id)descURL;
- (void)setDescURL:(id)arg0;
- (void)setRoomContext:(id)arg0;
- (void)setAirView:(id)arg0;
- (id)airView;
- (void)firstRightButtonFired:(id)arg0;
- (void)commodityStateViewFooterClick:(id)arg0;
- (void)setupStatsUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 roomContext:(id)arg1 roomId:(id)arg2;
- (id)pageIndex;
- (void)setPageIndex:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (id)footerView;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void)setFooterView:(id)arg0;
- (void).cxx_destruct;
- (id)tableView;
- (long long)status;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)scrollViewDidScroll:(id)arg0;
- (void)setHasMore:(BOOL)arg0;
- (void)setStatus:(long long)arg0;
- (BOOL)hasMore;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)api;
- (void)loadData:(BOOL)arg0;
- (id)roomContext;
- (void)setApi:(id)arg0;

@end
