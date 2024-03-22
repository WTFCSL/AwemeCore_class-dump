//
//     Generated by private class-dump
//

@interface IESLiveIMMessageDecoder : IESLiveIMCustomMessageDecoder {
    long long _firstBatchCount;
    long long _errorMsgTraceMaxCount;
    long long _batchCount;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _firstBatchRWlock;
}

@property (nonatomic) long long errorMsgTraceMaxCount;
@property (nonatomic) long long batchCount;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } firstBatchRWlock;
@property (nonatomic) long long firstBatchCount;

+ (id)IESLiveMessageDecoderTypeStringValue:(unsigned long long)arg0;

- (void)decode:(id)arg0 completion:(id /* block */)arg1;
- (void)setFirstBatchCount:(long long)arg0;
- (long long)firstBatchCount;
- (long long)errorMsgTraceMaxCount;
- (void)setErrorMsgTraceMaxCount:(long long)arg0;
- (struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })firstBatchRWlock;
- (void)setFirstBatchRWlock:(struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })arg0;
- (id)init;
- (void)dealloc;
- (long long)batchCount;
- (void)setBatchCount:(long long)arg0;

@end
