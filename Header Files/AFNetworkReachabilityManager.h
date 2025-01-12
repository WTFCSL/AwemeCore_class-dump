//
//     Generated by private class-dump
//

@interface AFNetworkReachabilityManager : NSObject {
    long long _networkReachabilityStatus;
    struct __SCNetworkReachability { } *_networkReachability;
    unsigned long long _networkReachabilityAssociation;
    id /* block */ _networkReachabilityStatusBlock;
}

@property (nonatomic) struct __SCNetworkReachability { } *networkReachability;
@property (nonatomic) unsigned long long networkReachabilityAssociation;
@property (nonatomic) long long networkReachabilityStatus;
@property (copy, nonatomic) id /* block */ networkReachabilityStatusBlock;
@property (readonly, nonatomic, getter=isReachable) BOOL reachable;
@property (readonly, nonatomic, getter=isReachableViaWWAN) BOOL reachableViaWWAN;
@property (readonly, nonatomic, getter=isReachableViaWiFi) BOOL reachableViaWiFi;

+ (id)managerForAddress:(const void *)arg0;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg0;
+ (id)sharedManager;
+ (id)managerForDomain:(id)arg0;

- (void)setNetworkReachabilityAssociation:(unsigned long long)arg0;
- (void)setNetworkReachabilityStatus:(long long)arg0;
- (BOOL)isReachableViaWWAN;
- (BOOL)isReachableViaWiFi;
- (long long)networkReachabilityStatus;
- (id /* block */)networkReachabilityStatusBlock;
- (unsigned long long)networkReachabilityAssociation;
- (void)setNetworkReachabilityStatusBlock:(id /* block */)arg0;
- (id)localizedNetworkReachabilityStatusString;
- (void)setReachabilityStatusChangeBlock:(id /* block */)arg0;
- (BOOL)isReachable;
- (void).cxx_destruct;
- (void)startMonitoring;
- (struct __SCNetworkReachability { } *)networkReachability;
- (void)setNetworkReachability:(struct __SCNetworkReachability { } *)arg0;
- (void)dealloc;
- (void)stopMonitoring;
- (id)initWithReachability:(struct __SCNetworkReachability { } *)arg0;

@end
