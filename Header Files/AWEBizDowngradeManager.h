//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBizDowngradeManager : NSObject <AWESettingsPushMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)onReceiveByteSyncData:(id)arg0;
- (id)init;
- (void)dealloc;
- (void)setUp;

@end
