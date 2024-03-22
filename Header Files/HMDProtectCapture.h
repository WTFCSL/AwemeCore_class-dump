//
//     Generated by private class-dump
//

@class NSString, NSArray, NSMutableSet, NSDictionary;

@interface HMDProtectCapture : NSObject {
    BOOL _filterWithTopStack;
    NSString *_exception;
    NSString *_reason;
    long long _protectType;
    NSString *_protectTypeString;
    NSArray *_backtraces;
    NSString *_log;
    id _crashKey;
    NSMutableSet *_crashKeySet;
    NSArray *_crashKeyList;
    NSDictionary *_customDictionary;
    NSDictionary *_customFilter;
}

@property (retain, nonatomic) NSString *exception;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic) long long protectType;
@property (retain, nonatomic) NSString *protectTypeString;
@property (retain, nonatomic) NSArray *backtraces;
@property (retain, nonatomic) NSString *log;
@property (retain, nonatomic) id crashKey;
@property (retain, nonatomic) NSMutableSet *crashKeySet;
@property (retain, nonatomic) NSArray *crashKeyList;
@property (nonatomic) BOOL filterWithTopStack;
@property (retain, nonatomic) NSDictionary *customDictionary;
@property (retain, nonatomic) NSDictionary *customFilter;

+ (id)captureException:(id)arg0 reason:(id)arg1 crashKey:(id)arg2;
+ (id)captureWithNSException:(id)arg0 crashKey:(id)arg1;
+ (id)captureException:(id)arg0 reason:(id)arg1;
+ (id)captureWithNSException:(id)arg0;

- (void)setCrashKey:(id)arg0;
- (id)initWithException:(id)arg0 reason:(id)arg1 crashKey:(id)arg2;
- (long long)protectType;
- (void)setProtectType:(long long)arg0;
- (id)protectTypeString;
- (void)setProtectTypeString:(id)arg0;
- (id)crashKey;
- (id)crashKeySet;
- (void)setCrashKeySet:(id)arg0;
- (id)crashKeyList;
- (void)setCrashKeyList:(id)arg0;
- (BOOL)filterWithTopStack;
- (void)setFilterWithTopStack:(BOOL)arg0;
- (id)customDictionary;
- (void)setCustomDictionary:(id)arg0;
- (id)customFilter;
- (void)setCustomFilter:(id)arg0;
- (void)setBacktraces:(id)arg0;
- (void).cxx_destruct;
- (void)setLog:(id)arg0;
- (id)reason;
- (id)log;
- (id)exception;
- (void)setException:(id)arg0;
- (void)setReason:(id)arg0;
- (id)backtraces;

@end