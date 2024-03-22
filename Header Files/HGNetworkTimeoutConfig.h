//
//     Generated by private class-dump
//

@class NSNumber;

@interface HGNetworkTimeoutConfig : NSObject {
    NSNumber *_requestTime;
    NSNumber *_uploadFileTime;
    NSNumber *_downloadFileTime;
    NSNumber *_connectSocketTime;
}

@property (retain, nonatomic) NSNumber *requestTime;
@property (retain, nonatomic) NSNumber *uploadFileTime;
@property (retain, nonatomic) NSNumber *downloadFileTime;
@property (retain, nonatomic) NSNumber *connectSocketTime;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)arg0;
- (id)uploadFileTime;
- (void)setUploadFileTime:(id)arg0;
- (id)downloadFileTime;
- (void)setDownloadFileTime:(id)arg0;
- (id)connectSocketTime;
- (void)setConnectSocketTime:(id)arg0;
- (id)init;
- (void)setRequestTime:(id)arg0;
- (id)requestTime;
- (void).cxx_destruct;

@end