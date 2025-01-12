//
//     Generated by private class-dump
//

@class NSString;

@interface BDWebImageCacheConfig : NSObject <BDModelCustom> {
    BOOL _diskCacheEnabled;
    unsigned long long _maxCacheEntries;
    unsigned long long _maxCacheEntrySize;
    unsigned long long _maxCacheSize;
    unsigned long long _diskCacheMaxCacheSize;
}

@property (nonatomic) unsigned long long maxCacheEntries;
@property (nonatomic) unsigned long long maxCacheEntrySize;
@property (nonatomic) unsigned long long maxCacheSize;
@property (nonatomic) unsigned long long diskCacheMaxCacheSize;
@property (nonatomic) BOOL diskCacheEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (unsigned long long)maxCacheEntries;
- (void)setMaxCacheEntries:(unsigned long long)arg0;
- (unsigned long long)maxCacheEntrySize;
- (void)setMaxCacheEntrySize:(unsigned long long)arg0;
- (unsigned long long)diskCacheMaxCacheSize;
- (void)setDiskCacheMaxCacheSize:(unsigned long long)arg0;
- (BOOL)diskCacheEnabled;
- (void)setDiskCacheEnabled:(BOOL)arg0;
- (unsigned long long)maxCacheSize;
- (void)setMaxCacheSize:(unsigned long long)arg0;

@end
