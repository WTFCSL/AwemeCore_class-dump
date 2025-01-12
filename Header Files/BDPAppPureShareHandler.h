//
//     Generated by private class-dump
//

@class NSString;

@interface BDPAppPureShareHandler : NSObject <BDPShareEventHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedHandler;

- (void)defaultShareWithPrepareModel:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (void)tokenShareWithPrepareModel:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (void)shareAppInCustomizedChannel:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (void)handleShareForChannel:(id)arg0 withParams:(id)arg1 uniqueID:(id)arg2 callback:(id /* block */)arg3;
- (void)shareAppInLive:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (void)trackWithShareError:(id)arg0 uniqueID:(id)arg1 channel:(id)arg2;
- (id)parseErrorWithError:(id)arg0 model:(id)arg1;
- (void)trackCompletedWithModel:(id)arg0 uniqueID:(id)arg1 result:(long long)arg2 channel:(id)arg3 error:(id)arg4 info:(id)arg5;

@end
