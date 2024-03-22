//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@protocol AWEConcernFeedRequestThroughPassParamProviderProtocol <NSObject, AWEConcernFeedRequestParamProviderProtocol>

@property (retain, nonatomic) NSNumber *level;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *fetchCount;
@property (nonatomic) BOOL alreadyLastView;
@property (nonatomic) BOOL useBackUp;
@property (nonatomic) long long refreshIndex;
@property (copy, nonatomic) NSString *previousPageValue;

- (void)setPreviousPageValue:(id)arg0;
- (id)previousPageValue;
- (BOOL)alreadyLastView;
- (void)setAlreadyLastView:(BOOL)arg0;
- (void)updateThroughPassParamWithResponse:(id)arg0;
- (BOOL)useBackUp;
- (void)setUseBackUp:(BOOL)arg0;
- (long long)refreshIndex;
- (void)setRefreshIndex:(long long)arg0;
- (void)setLevel:(id)arg0;
- (id)cursor;
- (id)level;
- (void)setCursor:(id)arg0;
- (void)setFetchCount:(id)arg0;
- (id)fetchCount;

@end
