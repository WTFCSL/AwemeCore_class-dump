//
//     Generated by private class-dump
//

@class NSString;

@interface BDPHostCustomNetwork : NSObject <BDPNetworkInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams;
- (BOOL)canUse;
- (id)uploadTaskWithRequest:(id)arg0 withMultiRequestBody:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)preConnectUrl:(id)arg0;
- (id)dataTaskWithRequest:(id)arg0 completionHandler:(id /* block */)arg1;
- (unsigned long long)engineType;

@end
