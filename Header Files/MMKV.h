//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface MMKV : NSObject {
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_dic;
    NSString *m_path;
    NSString *m_crcPath;
    NSString *m_mmapID;
    int m_fd;
    char *m_ptr;
    unsigned long long m_size;
    unsigned long long m_actualSize;
    struct MiniCodedOutputData { char *x0; unsigned long long x1; int x2; } *m_output;
    struct AESCrypt { unsigned char x0[16]; unsigned char x1[16]; struct aes_key_st { unsigned int x0[60]; int x1; } x2; int x3; } *m_cryptor;
    BOOL m_needLoadFromFile;
    BOOL m_hasFullWriteBack;
    unsigned int m_crcDigest;
    struct MMKVMetaInfo { unsigned int m_crcDigest; unsigned int m_version; unsigned int m_sequence; unsigned char m_vector[16]; } m_metaInfo;
    int m_metaFd;
    char *m_metaFilePtr;
}

@property (class, nonatomic) BOOL bdjt_cacheOptEnabled;
@property (class, nonatomic) BOOL bdjt_preloadCollectEnabled;

+ (id)mmkvWithID:(id)arg0;
+ (id)defaultMMKV;
+ (id)initializeMMKV:(id)arg0;
+ (id)mmkvWithID:(id)arg0 relativePath:(id)arg1;
+ (id)mmkvBasePath;
+ (id)bdjtmmkv_defaultMMKV;
+ (id)bdjtmmkv_mmkvWithID:(id)arg0 cryptKey:(id)arg1 relativePath:(id)arg2;
+ (BOOL)bdjt_cacheOptEnabled;
+ (void)setBdjt_cacheOptEnabled:(BOOL)arg0;
+ (BOOL)bdjt_preloadCollectEnabled;
+ (void)setBdjt_preloadCollectEnabled:(BOOL)arg0;
+ (id)mmkvWithID:(id)arg0 cryptKey:(id)arg1 relativePath:(id)arg2;
+ (id)mmkvWithID:(id)arg0 cryptKey:(id)arg1;
+ (id)mmapKeyWithMMapID:(id)arg0 relativePath:(id)arg1;
+ (id)mappedKVPathWithID:(id)arg0 relativePath:(id)arg1;
+ (id)crcPathWithMappedKVPath:(id)arg0;
+ (BOOL)isFileValid:(id)arg0 relativePath:(id)arg1;
+ (BOOL)tranlateData:(id)arg0 key:(id)arg1 kv:(id)arg2;
+ (void)setMMKVBasePath:(id)arg0;
+ (BOOL)isFileValid:(id)arg0;
+ (void)unregiserHandler;
+ (id)awe_storage_service_mmkvWithID:(id)arg0 cryptKey:(id)arg1 relativePath:(id)arg2;
+ (void)initialize;
+ (void)didBecomeActive;
+ (void)setLogLevel:(unsigned long long)arg0;
+ (void)didEnterBackground;
+ (void)registerHandler:(id)arg0;
+ (void)hook;

- (BOOL)getBoolForKey:(id)arg0 defaultValue:(BOOL)arg1;
- (void)onMemoryWarning;
- (id)getObjectOfClass:(Class)arg0 forKey:(id)arg1;
- (long long)getInt64ForKey:(id)arg0 defaultValue:(long long)arg1;
- (long long)getInt64ForKey:(id)arg0;
- (float)getFloatForKey:(id)arg0;
- (id)getStringForKey:(id)arg0 defaultValue:(id)arg1;
- (double)getDoubleForKey:(id)arg0;
- (double)getDoubleForKey:(id)arg0 defaultValue:(double)arg1;
- (unsigned long long)actualSize;
- (int)getInt32ForKey:(id)arg0;
- (id)getDateForKey:(id)arg0;
- (unsigned long long)getValueSizeForKey:(id)arg0;
- (void)enumerateKeys:(id /* block */)arg0;
- (void)bdjtmmkv_onMemoryWarning;
- (id)initWithMMapID:(id)arg0 cryptKey:(id)arg1 path:(id)arg2;
- (void)loadFromFile;
- (void)prepareMetaFile;
- (BOOL)checkFileCRCValid;
- (BOOL)writeActualSize:(unsigned long long)arg0;
- (BOOL)fullWriteBack;
- (void)recaculateCRCDigest;
- (BOOL)isFileValid;
- (void)updateIVAndIncreaseSequence:(BOOL)arg0;
- (void)checkLoadData;
- (BOOL)protectFromBackgroundWriting:(unsigned long long)arg0 writeBlock:(id /* block */)arg1;
- (BOOL)appendData:(id)arg0 forKey:(id)arg1;
- (BOOL)ensureMemorySize:(unsigned long long)arg0;
- (void)updateCRCDigest:(const char *)arg0 withSize:(unsigned long long)arg1 increaseSequence:(BOOL)arg2;
- (id)cryptKey;
- (BOOL)setRawData:(id)arg0 forKey:(id)arg1;
- (id)getRawDataForKey:(id)arg0;
- (int)getInt32ForKey:(id)arg0 defaultValue:(int)arg1;
- (unsigned int)getUInt32ForKey:(id)arg0 defaultValue:(unsigned int)arg1;
- (unsigned long long)getUInt64ForKey:(id)arg0 defaultValue:(unsigned long long)arg1;
- (float)getFloatForKey:(id)arg0 defaultValue:(float)arg1;
- (id)getDateForKey:(id)arg0 defaultValue:(id)arg1;
- (id)getDataForKey:(id)arg0 defaultValue:(id)arg1;
- (void)doSync:(BOOL)arg0;
- (BOOL)reKey:(id)arg0;
- (unsigned int)getUInt32ForKey:(id)arg0;
- (unsigned long long)getUInt64ForKey:(id)arg0;
- (void)removeValuesForKeys:(id)arg0;
- (unsigned int)migrateFromUserDefaults:(id)arg0;
- (void)sync;
- (BOOL)setBool:(BOOL)arg0 forKey:(id)arg1;
- (BOOL)containsKey:(id)arg0;
- (BOOL)setDouble:(double)arg0 forKey:(id)arg1;
- (BOOL)setData:(id)arg0 forKey:(id)arg1;
- (void).cxx_destruct;
- (BOOL)setObject:(id)arg0 forKey:(id)arg1;
- (void)clearAll;
- (void)close;
- (id)allKeys;
- (BOOL)setString:(id)arg0 forKey:(id)arg1;
- (BOOL)setFloat:(float)arg0 forKey:(id)arg1;
- (unsigned long long)count;
- (BOOL)setDate:(id)arg0 forKey:(id)arg1;
- (BOOL)setUInt64:(unsigned long long)arg0 forKey:(id)arg1;
- (void)async;
- (void)dealloc;
- (BOOL)setInt32:(int)arg0 forKey:(id)arg1;
- (id).cxx_construct;
- (void)removeValueForKey:(id)arg0;
- (unsigned long long)totalSize;
- (BOOL)setUInt32:(unsigned int)arg0 forKey:(id)arg1;
- (BOOL)setInt64:(long long)arg0 forKey:(id)arg1;
- (void)clearMemoryCache;
- (id)getDataForKey:(id)arg0;
- (void)trim;
- (id)getStringForKey:(id)arg0;
- (BOOL)getBoolForKey:(id)arg0;

@end
