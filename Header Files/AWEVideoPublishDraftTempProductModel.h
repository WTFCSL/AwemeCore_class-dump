//
//     Generated by private class-dump
//

@class NSString, NSURL, NSDictionary;

@interface AWEVideoPublishDraftTempProductModel : MTLModel {
    NSString *_publishTaskId;
    NSURL *_uploadMediaURL;
    NSURL *_watermarkVideoURL;
    NSDictionary *_uploadMediaURLDic;
    NSDictionary *_watermarkVideoURLDic;
}

@property (copy, nonatomic) NSString *publishTaskId;
@property (copy, nonatomic) NSURL *uploadMediaURL;
@property (copy, nonatomic) NSURL *watermarkVideoURL;
@property (copy, nonatomic) NSDictionary *uploadMediaURLDic;
@property (copy, nonatomic) NSDictionary *watermarkVideoURLDic;

+ (void)destroyWithTaskId:(id)arg0;
+ (id)restoreWithTaskId:(id)arg0;
+ (id)fixSandboxPrefixWithURL:(id)arg0;
+ (id)cacheKey:(id)arg0;

- (id)watermarkVideoURL;
- (id)uploadMediaURL;
- (void)setUploadMediaURL:(id)arg0;
- (id)publishTaskId;
- (void)setWatermarkVideoURL:(id)arg0;
- (void)setPublishTaskId:(id)arg0;
- (id)uploadMediaURLDic;
- (void)setUploadMediaURLDic:(id)arg0;
- (id)watermarkVideoURLDic;
- (void)setWatermarkVideoURLDic:(id)arg0;
- (void)synchronize;
- (void).cxx_destruct;
- (void)destroy;
- (id)dictionaryValue;

@end
