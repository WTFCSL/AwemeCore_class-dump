//
//     Generated by private class-dump
//

@class NSString, MMKV;

@interface BDPMMKVStorage : NSObject <BDPKVInterface> {
    NSString *_name;
    MMKV *_mmkv;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) MMKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (id)getObjectOfClass:(Class)arg0 forKey:(id)arg1;
- (void)setMmkv:(id)arg0;
- (id)mmkv;
- (long long)getInt64ForKey:(id)arg0;
- (double)getDoubleForKey:(id)arg0;
- (int)getInt32ForKey:(id)arg0;
- (void)enumerateKeys:(id /* block */)arg0;
- (int)storageSizeInBytes;
- (int)limitSize;
- (id)initWithStorageID:(id)arg0 rootPath:(id)arg1;
- (id)_getObjectOfClass:(Class)arg0 forKey:(id)arg1;
- (BOOL)updateStorageSize:(int)arg0;
- (BOOL)dropStorage;
- (int)_getValueSizeForKey:(id)arg0;
- (BOOL)_setObject:(id)arg0 forKey:(id)arg1;
- (BOOL)setBool:(BOOL)arg0 forKey:(id)arg1;
- (BOOL)containsKey:(id)arg0;
- (BOOL)setDouble:(double)arg0 forKey:(id)arg1;
- (void).cxx_destruct;
- (BOOL)setObject:(id)arg0 forKey:(id)arg1;
- (BOOL)_removeObjectForKey:(id)arg0;
- (void)close;
- (unsigned long long)type;
- (id)allKeys;
- (BOOL)removeObjectForKey:(id)arg0;
- (void)setName:(id)arg0;
- (BOOL)setInt32:(int)arg0 forKey:(id)arg1;
- (id)name;
- (BOOL)removeAllObjects;
- (BOOL)setInt64:(long long)arg0 forKey:(id)arg1;
- (unsigned long long)getCount;
- (BOOL)getBoolForKey:(id)arg0;

@end
