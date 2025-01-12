//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveUserService;

@interface IESLiveECUserServiceIESECBridger : NSObject <IESLiveECUserService> {
    id<IESLiveUserService> _protoObj;
}

@property (retain, nonatomic) id<IESLiveUserService> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)arg0;
+ (id)bridgedProtocol;

- (void)loginWithUserInfo:(id)arg0 completion:(id /* block */)arg1;
- (id)registerFollowStatusChangedWithCallback:(id /* block */)arg0;
- (id)registerLoginStatusChangedWithCallback:(id /* block */)arg0;
- (void)setProtoObj:(id)arg0;
- (id)protoObj;
- (void).cxx_destruct;
- (BOOL)isLogin;

@end
