//
//     Generated by private class-dump
//

@class NSString;

@interface HMDCloudCommandFileDelete : NSObject <AWECloudCommandProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cloudCommandIdentifier;
+ (id)createInstance;
+ (void)load;

- (void)excuteCommand:(id)arg0 completion:(id /* block */)arg1;
- (void)removeFilesWithRelativePaths:(id)arg0 completion:(id /* block */)arg1;

@end
