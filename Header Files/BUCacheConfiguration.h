//
//     Generated by private class-dump
//

@class NSString, NSArray, NSURL, BUContentInfo, NSLock;

@interface BUCacheConfiguration : NSObject <NSCoding> {
    float _version;
    NSArray *_cacheFragments;
    NSURL *_url;
    NSString *_filePath;
    BUContentInfo *_contentInfo;
    NSLock *_cacheFragmentsLock;
}

@property (retain, nonatomic) NSLock *cacheFragmentsLock;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) float version;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSArray *cacheFragments;
@property (retain, nonatomic) BUContentInfo *contentInfo;
@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) long long downloadedBytes;

+ (id)configurationFilePathForFilePath:(id)arg0;
+ (id)configurationWithMP4FilePath:(id)arg0 downloadURL:(id)arg1;

- (void)setCacheFragmentsLock:(id)arg0;
- (id)cacheFragmentsLock;
- (void)setCacheFragments:(id)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })unionStickyFragment:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0 range2:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (void)addDownloadedBytes:(long long)arg0 spent:(double)arg1;
- (id)contentInfo;
- (void)addCacheFragment:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (id)cacheFragments;
- (void)setContentInfo:(id)arg0;
- (id)init;
- (void)setVersion:(float)arg0;
- (id)filePath;
- (void).cxx_destruct;
- (void)setFilePath:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setUrl:(id)arg0;
- (float)version;
- (id)initWithCoder:(id)arg0;
- (float)progress;
- (void)save;
- (void)encodeWithCoder:(id)arg0;
- (id)url;
- (long long)downloadedBytes;

@end
