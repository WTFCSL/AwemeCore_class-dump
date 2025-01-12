//
//     Generated by private class-dump
//

@class NSString;

@interface BTDPokettoService : NSObject <BDASDKProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protocolImp;
+ (id)sharedInstance;
+ (id)sdkVersion;
+ (id)appid;

- (void)eventV3:(id)arg0 params:(id)arg1 isDoubleSending:(BOOL)arg2;
- (void)eventData:(id)arg0;
- (void)performanceEventV3:(id)arg0 params:(id)arg1;
- (void)monitorService:(id)arg0 value:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (id)ntType;
- (id)init;

@end
