//
//     Generated by private class-dump
//

@class NSString;

@interface AWEStudioCustomCloudCommandVESDKLog : NSObject <AWECustomCommandHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cloudCommandIdentifier;
+ (id)createInstance;

- (void)excuteCommandWithParams:(id)arg0 completion:(id /* block */)arg1;

@end
