//
//     Generated by private class-dump
//

@class NSMutableArray;

@protocol AWEGCPStrategyDataManager <NSObject>

@property (nonatomic) BOOL hasMoreData;
@property (copy, nonatomic) id /* block */ reloadListDataComplete;
@property (retain, nonatomic) NSMutableArray *strategyArray;

- (id)strategyArray;
- (void)setStrategyArray:(id)arg0;
- (void)requestStrategyListWithComplete:(id /* block */)arg0;
- (void)setReloadListDataComplete:(id /* block */)arg0;
- (id /* block */)reloadListDataComplete;
- (BOOL)hasMoreData;
- (void)setHasMoreData:(BOOL)arg0;

@end