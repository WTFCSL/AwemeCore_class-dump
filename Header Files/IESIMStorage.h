//
//     Generated by private class-dump
//

@class NSString, MMKV;

@interface IESIMStorage : NSObject <IESIMStorageProtocol> {
    MMKV *_mmkv;
}

@property (retain, nonatomic) MMKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedStorage;

- (id)getObjectOfClass:(Class)arg0 forKey:(id)arg1;
- (void)setMmkv:(id)arg0;
- (id)mmkv;
- (long long)getInt64ForKey:(id)arg0;
- (float)getFloatForKey:(id)arg0;
- (double)getDoubleForKey:(id)arg0;
- (unsigned long long)actualSize;
- (int)getInt32ForKey:(id)arg0;
- (id)getDateForKey:(id)arg0;
- (void)enumerateKeys:(id /* block */)arg0;
- (unsigned int)getUInt32ForKey:(id)arg0;
- (unsigned long long)getUInt64ForKey:(id)arg0;
- (void)removeValuesForKeys:(id)arg0;
- (BOOL)setBool:(BOOL)arg0 forKey:(id)arg1;
- (BOOL)containsKey:(id)arg0;
- (BOOL)setDouble:(double)arg0 forKey:(id)arg1;
- (BOOL)setData:(id)arg0 forKey:(id)arg1;
- (void).cxx_destruct;
- (BOOL)setObject:(id)arg0 forKey:(id)arg1;
- (id)initWithName:(id)arg0;
- (id)allKeys;
- (BOOL)setString:(id)arg0 forKey:(id)arg1;
- (BOOL)setFloat:(float)arg0 forKey:(id)arg1;
- (unsigned long long)count;
- (BOOL)setDate:(id)arg0 forKey:(id)arg1;
- (BOOL)setUInt64:(unsigned long long)arg0 forKey:(id)arg1;
- (BOOL)setInt32:(int)arg0 forKey:(id)arg1;
- (void)removeValueForKey:(id)arg0;
- (unsigned long long)totalSize;
- (BOOL)setUInt32:(unsigned int)arg0 forKey:(id)arg1;
- (BOOL)setInt64:(long long)arg0 forKey:(id)arg1;
- (id)getDataForKey:(id)arg0;
- (void)clearStore;
- (id)getStringForKey:(id)arg0;
- (BOOL)getBoolForKey:(id)arg0;

@end
