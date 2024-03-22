//
//     Generated by private class-dump
//

@class NSArray, NSDictionary;
@protocol LSListVMDelegate;

@protocol LSListVMProtocol <NSObject>

@property (weak, nonatomic) id<LSListVMDelegate> delegate;
@property (nonatomic) long long lifeCycle;
@property (nonatomic) long long pageState;
@property (nonatomic) long long naviBarState;
@property (nonatomic) long long refreshHeaderState;
@property (nonatomic) long long refreshFooterState;
@property (copy, nonatomic) NSArray *cellVMs;
@property (copy, nonatomic) NSDictionary *trackData;

- (long long)lifeCycle;
- (void)setLifeCycle:(long long)arg0;
- (void)setRefreshFooterState:(long long)arg0;
- (long long)refreshFooterState;
- (void)handleListFetch;
- (id)cellVMs;
- (void)setRefreshHeaderState:(long long)arg0;
- (Class)listFactory;
- (void)handleListLifeCycleChanged:(long long)arg0;
- (void)handleListLoadMore;
- (void)setCellVMs:(id)arg0;
- (long long)naviBarState;
- (long long)refreshHeaderState;
- (void)setNaviBarState:(long long)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)trackData;
- (void)setTrackData:(id)arg0;
- (long long)pageState;
- (void)setPageState:(long long)arg0;

@end