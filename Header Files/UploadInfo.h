//
//     Generated by private class-dump
//

@class NSString, NSError;

@interface UploadInfo : NSObject {
    float _progress;
    NSString *_key;
    long long _status;
    long long _hadUploadedSize;
    long long _totalFileSize;
    long long _uploadSpeed;
    NSError *_error;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long status;
@property (nonatomic) float progress;
@property (nonatomic) long long hadUploadedSize;
@property (nonatomic) long long totalFileSize;
@property (nonatomic) long long uploadSpeed;
@property (retain, nonatomic) NSError *error;

- (long long)hadUploadedSize;
- (id)initWithInfo:(id)arg0 status:(long long)arg1 progress:(float)arg2 hadUploadedSize:(long long)arg3 totalFileSize:(long long)arg4 uploadSpeed:(long long)arg5 error:(id)arg6;
- (void)setHadUploadedSize:(long long)arg0;
- (void)setTotalFileSize:(long long)arg0;
- (id)key;
- (void).cxx_destruct;
- (long long)status;
- (void)setKey:(id)arg0;
- (void)setStatus:(long long)arg0;
- (float)progress;
- (void)setError:(id)arg0;
- (void)setProgress:(float)arg0;
- (id)error;
- (long long)uploadSpeed;
- (void)setUploadSpeed:(long long)arg0;
- (long long)totalFileSize;

@end