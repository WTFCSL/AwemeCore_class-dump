//
//     Generated by private class-dump
//

@class NSMutableDictionary, HGUniqueID, HGKVStorage;

@interface HGPermissionScopeRecorder : NSObject {
    HGUniqueID *_uniqueID;
    HGKVStorage *_storage;
    NSMutableDictionary *_permissionCache;
}

@property (retain, nonatomic) HGKVStorage *storage;
@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (retain, nonatomic) NSMutableDictionary *permissionCache;

- (id)statusForScope:(id)arg0;
- (BOOL)updateScope:(id)arg0 approved:(BOOL)arg1;
- (id)initWithUniqueID:(id)arg0 storage:(id)arg1;
- (id)usedScopesDict;
- (void)checkUserSwitch;
- (BOOL)updateScopeCache:(id)arg0 approved:(BOOL)arg1;
- (void)setStorage:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (id)storage;
- (void)setUniqueID:(id)arg0;
- (id)permissionCache;
- (void)setPermissionCache:(id)arg0;

@end