//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface IESSDKApplicationDelegate : NSObject {
    NSMutableDictionary *_servicesMapper;
}

@property (retain, nonatomic) NSMutableDictionary *servicesMapper;

+ (id)URLServicerForServiceName:(id)arg0;
+ (BOOL)sendMsgToBytedanceAPPsWithReq:(id)arg0;
+ (BOOL)sendMsgToBytedanceAPPsWithResp:(id)arg0;
+ (BOOL)application:(id)arg0 openURL:(id)arg1 delegate:(id)arg2 forProduct:(long long)arg3;
+ (id)sharedDelegate;
+ (void)registerServiceClass:(Class)arg0;

- (id)servicesMapper;
- (id)URLServicerForServiceName:(id)arg0;
- (void)setServicesMapper:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)registerServiceClass:(Class)arg0;

@end
