//
//     Generated by private class-dump
//

@class NSArray, IGListIndexSetResult;

@interface TIMXOMessagesDataSourceUpdate : NSObject {
    long long _reason;
    NSArray *_previousData;
    NSArray *_nowData;
    IGListIndexSetResult *_cachedDiff;
}

@property (retain, nonatomic) IGListIndexSetResult *cachedDiff;
@property (readonly, nonatomic) NSArray *beforeUpdateMessageIdentifiers;
@property (readonly, nonatomic) NSArray *afterUpdateMessageIdentifiers;
@property (nonatomic) long long reason;
@property (retain, nonatomic) NSArray *previousData;
@property (retain, nonatomic) NSArray *nowData;

- (id)beforeUpdateMessageIdentifiers;
- (id)afterUpdateMessageIdentifiers;
- (id)cachedDiff;
- (id)previousData;
- (id)nowData;
- (void)setCachedDiff:(id)arg0;
- (id)calcDiffs;
- (void)setPreviousData:(id)arg0;
- (void)setNowData:(id)arg0;
- (void).cxx_destruct;
- (long long)reason;
- (void)setReason:(long long)arg0;

@end