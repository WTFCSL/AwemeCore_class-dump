//
//     Generated by private class-dump
//

@class NSString;

@interface ECOMTIMOModelLogoutCleanCacheFunction : NSObject <ECOMTIMStartUpTaskProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (id)sharedInstance;
+ (void)startUp;

- (void)clearAllCache;
- (void)userDidLogout:(id)arg0;
- (id)init;
- (void)dealloc;

@end