//
//     Generated by private class-dump
//

@class NSString, AWEStorage;

@interface AFDBusinessFrequencyExitRuleContext : NSObject {
    BOOL _uidSpecific;
    long long _count;
    long long _unavailableDay;
    long long _totalCount;
    long long _totalCountUnavailableDay;
    NSString *_identifier;
    AWEStorage *_storage;
}

@property (nonatomic) long long count;
@property (nonatomic) long long unavailableDay;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long totalCountUnavailableDay;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) AWEStorage *storage;
@property (nonatomic) BOOL uidSpecific;

- (void)setUidSpecific:(BOOL)arg0;
- (void)setUnavailableDay:(long long)arg0;
- (void)setTotalCountUnavailableDay:(long long)arg0;
- (BOOL)uidSpecific;
- (long long)unavailableDay;
- (long long)totalCountUnavailableDay;
- (void)setStorage:(id)arg0;
- (void)setCount:(long long)arg0;
- (void).cxx_destruct;
- (id)storage;
- (id)identifier;
- (long long)count;
- (long long)totalCount;
- (void)setIdentifier:(id)arg0;
- (void)setTotalCount:(long long)arg0;

@end