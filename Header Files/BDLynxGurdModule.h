//
//     Generated by private class-dump
//

@class NSString;

@interface BDLynxGurdModule : NSObject <BDLGurdModuleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)sharedInstance;

- (void)syncResourcesIfNeeded;
- (void)bytedSettingDidChange;
- (BOOL)enableGurd;
- (void)_syncHighPriorityResources;
- (void)_syncDefaultPriorityResources;
- (id)accessKeyDirectory;
- (id)lynxFilePathForChannel:(id)arg0;
- (BOOL)isSingleLynxFileForChannel:(id)arg0;
- (void)syncResourcesWithChannel:(id)arg0 isUrgent:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)syncResourcesWithChannel:(id)arg0 completion:(id /* block */)arg1;
- (void)syncResourcesWithChannel:(id)arg0 accessKey:(id)arg1 completion:(id /* block */)arg2;
- (void)_syncResourcesWithChannels:(id)arg0 options:(unsigned long long)arg1 completion:(id /* block */)arg2;

@end