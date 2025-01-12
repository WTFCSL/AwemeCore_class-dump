//
//     Generated by private class-dump
//

@class NSString;

@protocol BDPKVInterface <NSObject>

+ (id)shareInstance;

@property (readonly, nonatomic) NSString *name;

- (id)getObjectOfClass:(Class)arg0 forKey:(id)arg1;
- (long long)getInt64ForKey:(id)arg0;
- (double)getDoubleForKey:(id)arg0;
- (int)getInt32ForKey:(id)arg0;
- (void)enumerateKeys:(id /* block */)arg0;
- (int)storageSizeInBytes;
- (int)limitSize;
- (id)initWithStorageID:(id)arg0 rootPath:(id)arg1;
- (BOOL)dropStorage;
- (BOOL)setBool:(BOOL)arg0 forKey:(id)arg1;
- (BOOL)containsKey:(id)arg0;
- (BOOL)setDouble:(double)arg0 forKey:(id)arg1;
- (BOOL)setObject:(id)arg0 forKey:(id)arg1;
- (void)close;
- (unsigned long long)type;
- (id)allKeys;
- (BOOL)removeObjectForKey:(id)arg0;
- (BOOL)setInt32:(int)arg0 forKey:(id)arg1;
- (id)name;
- (BOOL)removeAllObjects;
- (BOOL)setInt64:(long long)arg0 forKey:(id)arg1;
- (unsigned long long)getCount;
- (BOOL)getBoolForKey:(id)arg0;

@end
