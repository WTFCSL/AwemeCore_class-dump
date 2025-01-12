//
//     Generated by private class-dump
//

@class NSString;

@interface AMapDownloadRequestReformer : AMapRequestReformer {
    NSString *_userAgent;
    NSString *_urlString;
    long long _existedDataLength;
}

@property (copy, nonatomic) NSString *urlString;
@property (nonatomic) long long existedDataLength;
@property (copy, nonatomic) NSString *userAgent;

- (id)initReformerWithURLString:(id)arg0 existedDataLength:(long long)arg1;
- (long long)existedDataLength;
- (void)setExistedDataLength:(long long)arg0;
- (id)urlString;
- (id)userAgent;
- (void)setUserAgent:(id)arg0;
- (void).cxx_destruct;
- (id)HTTPHeaders;
- (void)setUrlString:(id)arg0;
- (id)url;

@end
