//
//     Generated by private class-dump
//

@class AWEStorageFilePermanent, MMKV;

@interface AWEStorageServiceBackup : NSObject {
    MMKV *_backupMMKV;
    AWEStorageFilePermanent *_backupStorageFile;
}

+ (id)sharedInstance;

- (id)syncReadObjectForKeyFromStorageFile:(id)arg0;
- (id)objectForKey:(id)arg0 withMetaData:(id)arg1;
- (long long)integerForKey:(id)arg0;
- (double)doubleForKey:(id)arg0;
- (void)setBool:(BOOL)arg0 forKey:(id)arg1;
- (void)setDouble:(double)arg0 forKey:(id)arg1;
- (id)init;
- (void)setInteger:(long long)arg0 forKey:(id)arg1;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)arg0;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (float)floatForKey:(id)arg0;
- (void)setFloat:(float)arg0 forKey:(id)arg1;
- (void)removeValueForKey:(id)arg0;

@end