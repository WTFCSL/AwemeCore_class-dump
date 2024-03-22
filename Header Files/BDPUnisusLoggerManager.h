//
//     Generated by private class-dump
//

@class NSString;

@interface BDPUnisusLoggerManager : NSObject <UnisusLoggerServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)logFatal:(id)arg0;
- (void)logInfo:(id)arg0;
- (void)logError:(id)arg0;
- (void)logDebug:(id)arg0;
- (void)logWarn:(id)arg0;

@end
