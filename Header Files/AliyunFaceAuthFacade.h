//
//     Generated by private class-dump
//

@interface AliyunFaceAuthFacade : NSObject

+ (void)initSDK;
+ (void)verifyWith:(id)arg0 extParams:(id)arg1 onCompletion:(id /* block */)arg2;
+ (void)initIPv6;
+ (id)getMetaInfo;
+ (void)setDataProtocolVersion;
+ (void)preload:(id)arg0 completion:(id /* block */)arg1;
+ (void)setupNetwork:(id)arg0 timeoutForVerify:(id)arg1;
+ (id)getNFCVersion;
+ (id)getNFCMetaInfo;
+ (void)nfcVerifyWith:(id)arg0 extParams:(id)arg1 onCompletion:(id /* block */)arg2;
+ (void)init;
+ (id)getVersion;

@end
