//
//     Generated by private class-dump
//

@class NSArray, AFDFrequencyCountRule, NSObject, AFDFrequencyExitRule;
@protocol AFDCloseFriendsRecInsertStrategyDataSource;

@protocol AFDCloseFriendsRecInsertStrategyProtocol <NSObject>

@property (weak, nonatomic) NSObject<AFDCloseFriendsRecInsertStrategyDataSource> *dataSource;
@property (retain, nonatomic) NSArray *recommendData;
@property (readonly, nonatomic) AFDFrequencyCountRule *countRule;
@property (readonly, nonatomic) AFDFrequencyExitRule *exitRule;

- (BOOL)shouldFetchRecommendData;
- (id)recommendData;
- (BOOL)shouldInsertRecommendData;
- (void)insertRecommendDataWithCompletion:(id /* block */)arg0;
- (void)reloadRecommendDataWithCompletion:(id /* block */)arg0;
- (void)setRecommendData:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;

@optional

- (id)countRule;
- (id)exitRule;

@end
