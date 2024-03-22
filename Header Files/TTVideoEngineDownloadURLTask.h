//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface TTVideoEngineDownloadURLTask : TTVideoEngineDownloadTask {
    NSArray *_urls;
    NSString *_key;
}

@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *videoId;

+ (id)taskItem;
+ (id)urlTaskWithKey:(id)arg0 urls:(id)arg1 vid:(id)arg2;

- (void)setupBaseFiled;
- (BOOL)_shouldRetry:(id)arg0;
- (void)assignWithDict:(id)arg0;
- (void)updateUrls:(id)arg0;
- (id)urls;
- (id)key;
- (void)resume;
- (void).cxx_destruct;
- (id)jsonDict;
- (void)suspend;
- (void)setKey:(id)arg0;
- (void)setUrls:(id)arg0;
- (BOOL)isEqual:(id)arg0;

@end