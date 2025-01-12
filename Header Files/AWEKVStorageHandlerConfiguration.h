//
//     Generated by private class-dump
//

@interface AWEKVStorageHandlerConfiguration : NSObject {
    BOOL _shouldRemoveAllWhenMemoryWarning;
    BOOL _shouldRemoveAllWhenEnterBackground;
    long long _cacheType;
    long long _useModule;
    unsigned long long _memoryCountLimit;
}

@property (nonatomic) long long cacheType;
@property (nonatomic) long long useModule;
@property (nonatomic) BOOL shouldRemoveAllWhenMemoryWarning;
@property (nonatomic) BOOL shouldRemoveAllWhenEnterBackground;
@property (nonatomic) unsigned long long memoryCountLimit;

- (void)setMemoryCountLimit:(unsigned long long)arg0;
- (unsigned long long)memoryCountLimit;
- (long long)useModule;
- (void)setUseModule:(long long)arg0;
- (BOOL)shouldRemoveAllWhenMemoryWarning;
- (void)setShouldRemoveAllWhenMemoryWarning:(BOOL)arg0;
- (BOOL)shouldRemoveAllWhenEnterBackground;
- (void)setShouldRemoveAllWhenEnterBackground:(BOOL)arg0;
- (id)init;
- (long long)cacheType;
- (void)setCacheType:(long long)arg0;

@end
