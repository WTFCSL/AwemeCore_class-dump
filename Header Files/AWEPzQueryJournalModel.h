//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDate;

@interface AWEPzQueryJournalModel : NSObject {
    BOOL _scopeShareRecord;
    NSString *_componentID;
    NSArray *_scopes;
    NSArray *_excludedScopes;
    NSDate *_afterDate;
    long long _limitCount;
    NSString *_secUid;
}

@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSArray *scopes;
@property (copy, nonatomic) NSArray *excludedScopes;
@property (nonatomic) BOOL scopeShareRecord;
@property (retain, nonatomic) NSDate *afterDate;
@property (nonatomic) long long limitCount;
@property (copy, nonatomic) NSString *secUid;

- (id)secUid;
- (void)setSecUid:(id)arg0;
- (id)excludedScopes;
- (void)setExcludedScopes:(id)arg0;
- (BOOL)scopeShareRecord;
- (void)setScopeShareRecord:(BOOL)arg0;
- (void)setAfterDate:(id)arg0;
- (long long)limitCount;
- (id)scopes;
- (void)setScopes:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setLimitCount:(long long)arg0;
- (id)componentID;
- (void)setComponentID:(id)arg0;
- (id)afterDate;

@end
