//
//     Generated by private class-dump
//

@class ResponseProtocol, TTUploadTaskParam, TTUploadUrlManager, RangeManager;

@interface TTUploadFileManager : NSObject {
    ResponseProtocol *_serverResponse;
    TTUploadUrlManager *_urlManager;
    TTUploadTaskParam *_param;
    RangeManager *_rangeManager;
}

@property (retain, nonatomic) ResponseProtocol *serverResponse;
@property (retain, nonatomic) TTUploadUrlManager *urlManager;
@property (retain, nonatomic) TTUploadTaskParam *param;
@property (retain, nonatomic) RangeManager *rangeManager;

+ (id)getTempSlicePath:(id)arg0 lastStep:(long long)arg1 length:(long long *)arg2 error:(id *)arg3;
+ (long long)getStepLength:(id)arg0 lastStep:(long long)arg1;

- (void)setRangeManager:(id)arg0;
- (id)rangeManager;
- (id)initWithConfig:(id)arg0 param:(id)arg1;
- (id)getSliceInfo:(id *)arg0;
- (BOOL)isUploadCompleted;
- (BOOL)isUploadFailed;
- (void)updateSliceStatus:(long long)arg0 sliceInfo:(id)arg1;
- (id)makeSliceInfo:(id)arg0;
- (id)urlManager;
- (void)setUrlManager:(id)arg0;
- (void)setParam:(id)arg0;
- (void).cxx_destruct;
- (id)param;
- (id)serverResponse;
- (void)cancel;
- (void)dealloc;
- (void)setServerResponse:(id)arg0;

@end
