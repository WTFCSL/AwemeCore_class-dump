//
//     Generated by private class-dump
//

@class NSString;

@interface BDPMMKVKVImpl : NSObject <BDPKVStorageInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)sharedPlugin;

- (id)getDefaultKVStorage;
- (id)getKVStorageWithStorageId:(id)arg0 path:(id)arg1;

@end
