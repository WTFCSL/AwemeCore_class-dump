//
//     Generated by private class-dump
//

@interface WBSDKReachability : NSObject {
    struct __SCNetworkReachability { } *_reachabilityRef;
}

+ (id)reachabilityWithAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)arg0;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithHostName:(id)arg0;

- (long long)networkStatusForFlags:(unsigned int)arg0;
- (BOOL)startNotifier;
- (void)stopNotifier;
- (long long)currentReachabilityStatus;
- (BOOL)connectionRequired;
- (void)dealloc;

@end
