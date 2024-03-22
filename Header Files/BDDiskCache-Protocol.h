//
//     Generated by private class-dump
//

@class NSString;

@protocol BDDiskCache <NSObject>

@property (readonly, nonatomic) BOOL trimDiskInBG;
@property (readonly, copy, nonatomic) NSString *path;
@property (copy, nonatomic) id /* block */ trimBlock;

- (void)removeAllData;
- (void)setTrimBlock:(id /* block */)arg0;
- (BOOL)trimDiskInBG;
- (void)setData:(id)arg0 forKey:(id)arg1 withBlock:(id /* block */)arg2;
- (id)cachePathForKey:(id)arg0;
- (void)removeDataForKey:(id)arg0 withBlock:(id /* block */)arg1;
- (BOOL)containsDataForKey:(id)arg0;
- (void)removeAllDataWithBlock:(id /* block */)arg0;
- (id /* block */)trimBlock;
- (void)containsDataForKey:(id)arg0 withBlock:(id /* block */)arg1;
- (void)dataForKey:(id)arg0 withBlock:(id /* block */)arg1;
- (void)removeDataForKey:(id)arg0;
- (void)setConfig:(id)arg0;
- (void)setData:(id)arg0 forKey:(id)arg1;
- (id)dataForKey:(id)arg0;
- (id)initWithCachePath:(id)arg0;
- (id)path;
- (unsigned long long)totalCount;
- (unsigned long long)totalSize;
- (void)removeExpiredData;

@end