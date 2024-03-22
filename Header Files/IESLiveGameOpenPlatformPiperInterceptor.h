//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_group;

@interface IESLiveGameOpenPlatformPiperInterceptor : NSObject {
    NSString *_appID;
    NSDictionary *_openCapabilityList;
    NSDictionary *_openCapabilityAuthList;
    NSObject<OS_dispatch_group> *_group;
}

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSDictionary *openCapabilityList;
@property (copy, nonatomic) NSDictionary *openCapabilityAuthList;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;

- (id)openCapabilityList;
- (void)setOpenCapabilityList:(id)arg0;
- (long long)_tryInvokingOpenCapabilityMethod:(id)arg0;
- (id)openCapabilityAuthList;
- (void)trackAuthEvent:(id)arg0;
- (void)reqeustAuthForScope:(id)arg0 authType:(long long)arg1 completion:(id /* block */)arg2;
- (void)setOpenCapabilityAuthList:(id)arg0;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (id)group;
- (id)appID;
- (void)setGroup:(id)arg0;

@end
