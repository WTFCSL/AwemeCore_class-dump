//
//     Generated by private class-dump
//

@class NSString;

@interface BDSCUserAction : NSObject <BDModelCustom> {
    long long _startSearchCount;
    long long _startSearchSessionCount;
    long long _searchSuccessSessionCount;
    long long _playCount;
    long long _showResearchCardCount;
}

@property (nonatomic) long long startSearchCount;
@property (nonatomic) long long startSearchSessionCount;
@property (nonatomic) long long searchSuccessSessionCount;
@property (nonatomic) long long playCount;
@property (nonatomic) long long showResearchCardCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (long long)startSearchCount;
- (void)setStartSearchCount:(long long)arg0;
- (long long)startSearchSessionCount;
- (void)setStartSearchSessionCount:(long long)arg0;
- (long long)searchSuccessSessionCount;
- (void)setSearchSuccessSessionCount:(long long)arg0;
- (long long)showResearchCardCount;
- (void)setShowResearchCardCount:(long long)arg0;
- (long long)playCount;
- (void)setPlayCount:(long long)arg0;

@end