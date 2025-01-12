//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, TSPKLock;

@interface TSPKCallStackFilter : NSObject {
    BOOL _disableCache;
    BOOL _isUpdating;
    NSString *_appVersion;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_callStackFilterInfo;
    id<TSPKLock> _lock;
}

@property (copy, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *callStackFilterInfo;
@property (nonatomic) BOOL disableCache;
@property (nonatomic) BOOL isUpdating;
@property (retain, nonatomic) id<TSPKLock> lock;

+ (id)shared;

- (id)callStackFilterInfo;
- (void)fixWithCache;
- (void)parseInfoToRules:(id)arg0;
- (BOOL)fixRules;
- (void)updateWithConfigs:(id)arg0;
- (BOOL)checkAllowCallWithDataType:(id)arg0;
- (void)setCallStackFilterInfo:(id)arg0;
- (BOOL)isUpdating;
- (id)init;
- (void)setAppVersion:(id)arg0;
- (void).cxx_destruct;
- (void)setDisableCache:(BOOL)arg0;
- (id)appVersion;
- (id)lock;
- (BOOL)disableCache;
- (void)setIsUpdating:(BOOL)arg0;
- (id)queue;
- (void)setLock:(id)arg0;
- (void)setQueue:(id)arg0;

@end
