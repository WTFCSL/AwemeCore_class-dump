//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface AVMDLiOSNetUtils : NSObject {
    NSObject<OS_dispatch_queue> *_networkQueue;
    BOOL _scheduleing;
    BOOL _Ipv4Reachable;
    BOOL _Ipv6Reachable;
    unsigned long long _currentState;
    struct __SCNetworkReachability { } *_reachabilityRef;
}

@property (nonatomic) unsigned long long currentState;
@property (nonatomic) BOOL scheduleing;
@property (nonatomic) struct __SCNetworkReachability { } *reachabilityRef;
@property (nonatomic) BOOL Ipv4Reachable;
@property (nonatomic) BOOL Ipv6Reachable;

+ (BOOL)getNetworkIndex:(unsigned int *)arg0 cellularIndex:(unsigned int *)arg1;
+ (id)convertAddrToString:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)arg0;
+ (id)shareInstance;

- (BOOL)scheduleing;
- (void)setScheduleing:(BOOL)arg0;
- (void)probdIpv4Reachable;
- (void)probdIpv6Reachable;
- (BOOL)Ipv4Reachable;
- (BOOL)Ipv6Reachable;
- (id)getStateString;
- (void)setIpv4Reachable:(BOOL)arg0;
- (void)setIpv6Reachable:(BOOL)arg0;
- (void)setCurrentState:(unsigned long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)currentState;
- (void)setReachabilityRef:(struct __SCNetworkReachability { } *)arg0;
- (void)stop;
- (struct __SCNetworkReachability { } *)reachabilityRef;
- (void)start;
- (void)dealloc;

@end
