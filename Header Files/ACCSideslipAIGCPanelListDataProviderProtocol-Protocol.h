//
//     Generated by private class-dump
//

@class NSNumber;

@protocol ACCSideslipAIGCPanelListDataProviderProtocol <ACCSideslipPropPanelListDataProvider>

@property (retain, nonatomic) NSNumber *reloadIndex;
@property (nonatomic) BOOL isAISuite;

- (void)clearDatasource;
- (BOOL)isAISuite;
- (void)setIsAISuite:(BOOL)arg0;
- (void)setTotalListCount:(long long)arg0;
- (void)refreshItem:(id)arg0 atIndex:(long long)arg1;
- (void)updateFocusIndex:(long long)arg0;
- (id)AIGCSelectMsgBodyAtIndex:(long long)arg0;
- (id)AIGCRetryMsgBodyAtIndex:(long long)arg0;
- (id)AIGCRequestMsgBody:(id)arg0;
- (id)AIGCAsyncModeMsgBodyWithAsync:(BOOL)arg0;
- (void)refreshNames:(id)arg0;
- (id)reloadIndex;
- (void)setReloadIndex:(id)arg0;

@end