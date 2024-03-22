//
//     Generated by private class-dump
//

@class NSString, NSSet, NSMutableArray;

@interface AWEOFGAuthMethodCache : NSObject {
    NSString *_clientKey;
    NSSet *_authMethodSet;
    NSMutableArray *_completions;
    long long _status;
}

@property (nonatomic) BOOL updated;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSSet *authMethodSet;
@property (retain, nonatomic) NSMutableArray *completions;
@property (nonatomic) long long status;

+ (id)modelPropertyWhitelist;

- (id)authMethodSet;
- (void)setAuthMethodSet:(id)arg0;
- (id)clientKey;
- (id)init;
- (void)setCompletions:(id)arg0;
- (void).cxx_destruct;
- (long long)status;
- (BOOL)updated;
- (void)setUpdated:(BOOL)arg0;
- (void)setStatus:(long long)arg0;
- (void)setClientKey:(id)arg0;
- (id)completions;

@end