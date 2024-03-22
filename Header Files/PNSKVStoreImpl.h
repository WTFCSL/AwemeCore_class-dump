//
//     Generated by private class-dump
//

@class NSString;

@interface PNSKVStoreImpl : NSObject <PNSKVStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mmkvWithID:(id)arg0;
+ (id)stringForKey:(id)arg0 uniqueID:(id)arg1;
+ (BOOL)setString:(id)arg0 forKey:(id)arg1 uniqueID:(id)arg2;
+ (id)allKeysWithUniqueID:(id)arg0;
+ (void)closeWithUniqueID:(id)arg0;
+ (void)removeValueForKey:(id)arg0 uniqueID:(id)arg1;
+ (BOOL)containsKey:(id)arg0 uniqueID:(id)arg1;
+ (void)clearAllWithUniqueID:(id)arg0;
+ (id)objectOfClass:(Class)arg0 forKey:(id)arg1 uniqueID:(id)arg2;
+ (BOOL)setObject:(id)arg0 forKey:(id)arg1 uniqueID:(id)arg2;
+ (void)initializeKVStore;

@end
