//
//     Generated by private class-dump
//

@class NSString;

@interface TTVideoEngineLocalServerCacheInfo : NSObject {
    long long _mediaSize;
    long long _cacheSizeFromZero;
    NSString *_localFilePath;
}

@property (nonatomic) long long mediaSize;
@property (nonatomic) long long cacheSizeFromZero;
@property (copy, nonatomic) NSString *localFilePath;

- (long long)cacheSizeFromZero;
- (void)setCacheSizeFromZero:(long long)arg0;
- (void).cxx_destruct;
- (long long)mediaSize;
- (void)setMediaSize:(long long)arg0;
- (id)localFilePath;
- (void)setLocalFilePath:(id)arg0;

@end
