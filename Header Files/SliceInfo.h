//
//     Generated by private class-dump
//

@class NSString, TTUploadTaskParam;

@interface SliceInfo : NSObject {
    NSString *_sliceId;
    NSString *_realUrl;
    unsigned long long _status;
    TTUploadTaskParam *_userParam;
    long long _startRange;
    long long _endRange;
    id _errorServerResponse;
}

@property (copy) NSString *sliceId;
@property (copy) NSString *realUrl;
@property unsigned long long status;
@property (retain) TTUploadTaskParam *userParam;
@property long long startRange;
@property long long endRange;
@property (weak) id errorServerResponse;

- (id)sliceId;
- (void)setSliceId:(id)arg0;
- (id)realUrl;
- (void)setRealUrl:(id)arg0;
- (id)errorServerResponse;
- (void)setErrorServerResponse:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)userParam;
- (void)setStatus:(unsigned long long)arg0;
- (void)setUserParam:(id)arg0;
- (long long)startRange;
- (void)setStartRange:(long long)arg0;
- (long long)endRange;
- (void)setEndRange:(long long)arg0;

@end
