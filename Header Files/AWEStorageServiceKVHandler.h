//
//     Generated by private class-dump
//

@class AWEKVStorageHandlerConfiguration, NSString;
@protocol AWEStorageServiceKVUniversal;

@interface AWEStorageServiceKVHandler : AWEStorageServiceHandler <AWEStorageServiceKVInterface> {
    AWEKVStorageHandlerConfiguration *_config;
    id<AWEStorageServiceKVUniversal> _defaultStorage;
    id<AWEStorageServiceKVUniversal> _backupStorage;
}

@property (retain, nonatomic) AWEKVStorageHandlerConfiguration *config;
@property (retain, nonatomic) id<AWEStorageServiceKVUniversal> defaultStorage;
@property (retain, nonatomic) id<AWEStorageServiceKVUniversal> backupStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)universalStorageHandler;

- (id)initWithDomain:(id)arg0 options:(id)arg1;
- (void)storageHandlerConfiguration:(id)arg0;
- (void)setupStorageHandlerStorage:(id)arg0;
- (id)objectForKey:(id)arg0 withOptions:(id)arg1;
- (void)updateMetaDataIfNeeded:(id)arg0 key:(id)arg1 type:(int)arg2 backup:(BOOL)arg3 size:(long long)arg4;
- (void)setObject:(id)arg0 forKey:(id)arg1 withOptions:(id)arg2;
- (void)removeObjectForKey:(id)arg0 withOptions:(id)arg1;
- (void)removeMetaDataForKey:(id)arg0;
- (id)stringForKey:(id)arg0 withOptions:(id)arg1;
- (id)arrayForKey:(id)arg0 withOptions:(id)arg1;
- (id)dictionaryForKey:(id)arg0 withOptions:(id)arg1;
- (id)dataForKey:(id)arg0 withOptions:(id)arg1;
- (long long)integerForKey:(id)arg0 withOptions:(id)arg1;
- (void)setInteger:(long long)arg0 forKey:(id)arg1 withOptions:(id)arg2;
- (float)floatForKey:(id)arg0 withOptions:(id)arg1;
- (void)setFloat:(float)arg0 forKey:(id)arg1 withOptions:(id)arg2;
- (double)doubleForKey:(id)arg0 withOptions:(id)arg1;
- (void)setDouble:(double)arg0 forKey:(id)arg1 withOptions:(id)arg2;
- (BOOL)boolForKey:(id)arg0 withOptions:(id)arg1;
- (void)setBool:(BOOL)arg0 forKey:(id)arg1 withOptions:(id)arg2;
- (id)URLForKey:(id)arg0 withOptions:(id)arg1;
- (void)setURL:(id)arg0 forKey:(id)arg1 withOptions:(id)arg2;
- (void)bothMemoryAndDiskStorageHandler:(id)arg0;
- (void)diskStorageHandler:(id)arg0;
- (void)memoryStorageHandler:(id)arg0;
- (BOOL)needBackupStorage:(id)arg0;
- (void)setDefaultStorage:(id)arg0;
- (id)backupStorage;
- (void)setBackupStorage:(id)arg0;
- (long long)integerForKey:(id)arg0;
- (double)doubleForKey:(id)arg0;
- (id)metaDataForKey:(id)arg0;
- (id)URLForKey:(id)arg0;
- (id)arrayForKey:(id)arg0;
- (void)setBool:(BOOL)arg0 forKey:(id)arg1;
- (void)setDouble:(double)arg0 forKey:(id)arg1;
- (id)stringForKey:(id)arg0;
- (id)dictionaryForKey:(id)arg0;
- (void)setInteger:(long long)arg0 forKey:(id)arg1;
- (void)setConfig:(id)arg0;
- (id)dataForKey:(id)arg0;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)arg0;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (float)floatForKey:(id)arg0;
- (id)config;
- (void)removeObjectForKey:(id)arg0;
- (void)setFloat:(float)arg0 forKey:(id)arg1;
- (id)objectForKey:(id)arg0;
- (id)initWithDomain:(id)arg0;
- (void)setURL:(id)arg0 forKey:(id)arg1;
- (id)defaultStorage;
- (BOOL)isValidNumber:(id)arg0;

@end
