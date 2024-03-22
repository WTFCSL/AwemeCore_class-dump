//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSURL;

@interface BDPNetworkRequestExtraConfiguration : NSObject {
    BOOL _enableHttpCache;
    long long _flags;
    long long _type;
    long long _method;
    NSString *_methodStr;
    Class _bdpRequestSerializerClass;
    NSDictionary *_bdpRequestHeaderField;
    id /* block */ _constructingBodyBlock;
    id *_progress;
    double _timeout;
    id /* block */ _downloadHeaderCallback;
    id /* block */ _downloadDataCallback;
    long long _offset;
    long long _requestedLength;
    NSURL *_downloadDestinationURL;
    unsigned long long _tagType;
}

@property (nonatomic) long long flags;
@property (nonatomic) long long type;
@property (nonatomic) long long method;
@property (copy, nonatomic) NSString *methodStr;
@property (retain, nonatomic) Class bdpRequestSerializerClass;
@property (copy, nonatomic) NSDictionary *bdpRequestHeaderField;
@property (copy, nonatomic) id /* block */ constructingBodyBlock;
@property (nonatomic) id *progress;
@property (nonatomic) double timeout;
@property (copy, nonatomic) id /* block */ downloadHeaderCallback;
@property (copy, nonatomic) id /* block */ downloadDataCallback;
@property (nonatomic) long long offset;
@property (nonatomic) long long requestedLength;
@property (retain, nonatomic) NSURL *downloadDestinationURL;
@property (nonatomic) BOOL enableHttpCache;
@property (nonatomic) unsigned long long tagType;

+ (id)defaultConfigWithHttpMethod:(long long)arg0;
+ (id)defaultBDPSerializerConfig;
+ (id)defaultBDPSerializerConfigWithHttpMethod:(long long)arg0;
+ (id)defaultConfig;

- (id /* block */)constructingBodyBlock;
- (void)setConstructingBodyBlock:(id /* block */)arg0;
- (void)setDownloadHeaderCallback:(id /* block */)arg0;
- (void)setDownloadDataCallback:(id /* block */)arg0;
- (void)setBdpRequestSerializerClass:(Class)arg0;
- (id)methodStr;
- (void)setMethodStr:(id)arg0;
- (Class)bdpRequestSerializerClass;
- (id)bdpRequestHeaderField;
- (void)setBdpRequestHeaderField:(id)arg0;
- (id /* block */)downloadHeaderCallback;
- (id /* block */)downloadDataCallback;
- (void)setRequestedLength:(long long)arg0;
- (BOOL)enableHttpCache;
- (void)setEnableHttpCache:(BOOL)arg0;
- (unsigned long long)tagType;
- (void).cxx_destruct;
- (long long)method;
- (void)setOffset:(long long)arg0;
- (void)setMethod:(long long)arg0;
- (long long)type;
- (long long)offset;
- (void)setType:(long long)arg0;
- (double)timeout;
- (id *)progress;
- (void)setFlags:(long long)arg0;
- (long long)flags;
- (void)setProgress:(id *)arg0;
- (long long)requestedLength;
- (void)setTimeout:(double)arg0;
- (id)downloadDestinationURL;
- (void)setTagType:(unsigned long long)arg0;
- (void)setDownloadDestinationURL:(id)arg0;

@end
