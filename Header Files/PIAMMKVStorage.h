//
//     Generated by private class-dump
//

@class NSString, MMKV;

@interface PIAMMKVStorage : NSObject <PIAKVStorageProtocol> {
    MMKV *_mmkv;
}

@property (retain, nonatomic) MMKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)piaRootPath;
+ (id)sharedInstance;

- (void)setMmkv:(id)arg0;
- (id)mmkv;
- (BOOL)containKey:(id)arg0;
- (id)initWithStorageID:(id)arg0;
- (id)objectForKey:(id)arg0 class:(Class)arg1;
- (void).cxx_destruct;
- (BOOL)setObject:(id)arg0 forKey:(id)arg1;
- (void)clearAll;
- (void)removeObjectForKey:(id)arg0;

@end
