//
//     Generated by private class-dump
//

@class CTTelephonyNetworkInfo;

@interface AppMonitorReachability : NSObject {
    BOOL isHighVersion;
    struct __SCNetworkReachability { } *_reachabilityRef;
    BOOL isMoreThanIOS7;
    CTTelephonyNetworkInfo *_telephonyInfo;
}

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (struct __SCNetworkReachability { } *)createNetworkReachabilityRef;
- (id)currentReachabilityStatusString;
- (id)init;
- (long long)networkStatusForFlags:(unsigned int)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (long long)currentReachabilityStatus;
- (void)dealloc;
- (id)currentStatusString;

@end