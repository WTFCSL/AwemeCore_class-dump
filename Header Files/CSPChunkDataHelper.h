//
//     Generated by private class-dump
//

@class NSError, TTHttpResponse, NSData, TTHttpTask, CSPChunkDataMonitorRecord, NSObject, NSMutableArray, NSMutableData;
@protocol OS_dispatch_queue, CSPChunkDataReceiver;

@interface CSPChunkDataHelper : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _receiverLock;
    BOOL _highNetworkPriority;
    BOOL _dataProcessAndCallbackSeparate;
    BOOL _isOccupied;
    BOOL _forceStopFlag;
    CSPChunkDataMonitorRecord *_monitorRecord;
    double _numberOfBytesReceived;
    TTHttpResponse *_ttResponse;
    id<CSPChunkDataReceiver> _receiver;
    TTHttpTask *_dataTask;
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    unsigned long long _status;
    NSMutableArray *_chunksReceived;
    NSMutableData *_chunkBuffer;
    NSMutableData *_notEnoughBuffer;
    unsigned long long _nextChunkLength;
    NSData *_endTagData;
    NSData *_splitTagData;
    NSError *_lastError;
}

@property (weak, nonatomic) id<CSPChunkDataReceiver> receiver;
@property (retain, nonatomic) TTHttpTask *dataTask;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSMutableArray *chunksReceived;
@property (nonatomic) double numberOfBytesReceived;
@property (retain, nonatomic) NSMutableData *chunkBuffer;
@property (retain, nonatomic) NSMutableData *notEnoughBuffer;
@property (nonatomic) unsigned long long nextChunkLength;
@property (copy, nonatomic) NSData *endTagData;
@property (copy, nonatomic) NSData *splitTagData;
@property (nonatomic) BOOL isOccupied;
@property (nonatomic) BOOL forceStopFlag;
@property (retain, nonatomic) NSError *lastError;
@property (retain, nonatomic) TTHttpResponse *ttResponse;
@property (retain, nonatomic) CSPChunkDataMonitorRecord *monitorRecord;
@property (readonly, nonatomic) BOOL forceStopped;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackOnQueue;
@property (nonatomic) BOOL highNetworkPriority;
@property (nonatomic) BOOL dataProcessAndCallbackSeparate;

- (id)initWithReceiver:(id)arg0 monitorRecordClass:(Class)arg1;
- (BOOL)forceStopFlag;
- (void)startStreamWithUrlString:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 enableHttpCache:(BOOL)arg5 uploadBlock:(id /* block */)arg6;
- (BOOL)isOccupied;
- (void)p_prepareForLink;
- (void)setIsOccupied:(BOOL)arg0;
- (void)p_startFlowRead;
- (void)setForceStopFlag:(BOOL)arg0;
- (void)p_breakStream:(long long)arg0;
- (void)p_handleFlowRead;
- (void)setTtResponse:(id)arg0;
- (BOOL)p_handleData:(id)arg0;
- (void)p_sendError:(long long)arg0 error:(id)arg1 extraLog:(id)arg2;
- (id)chunksReceived;
- (id)chunkBuffer;
- (id)notEnoughBuffer;
- (id)endTagData;
- (id)splitTagData;
- (void)setNextChunkLength:(unsigned long long)arg0;
- (unsigned long long)nextChunkLength;
- (void)setNumberOfBytesReceived:(double)arg0;
- (void)p_clearCurrentBuffer;
- (BOOL)forceStopped;
- (void)startStreamWithUrlString:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 enableHttpCache:(BOOL)arg5;
- (void)forceBreakStream;
- (void)setMonitorRecord:(id)arg0;
- (void)setChunksReceived:(id)arg0;
- (void)setChunkBuffer:(id)arg0;
- (void)setNotEnoughBuffer:(id)arg0;
- (void)setEndTagData:(id)arg0;
- (void)setSplitTagData:(id)arg0;
- (void)setHighNetworkPriority:(BOOL)arg0;
- (BOOL)highNetworkPriority;
- (BOOL)dataProcessAndCallbackSeparate;
- (void)setDataProcessAndCallbackSeparate:(BOOL)arg0;
- (id)callbackOnQueue;
- (double)numberOfBytesReceived;
- (id)monitorRecord;
- (id)ttResponse;
- (void)setReceiver:(id)arg0;
- (void)setLastError:(id)arg0;
- (id)callbackQueue;
- (id)receiver;
- (id)lastError;
- (void)setDataTask:(id)arg0;
- (void)setCallbackQueue:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg0;
- (void)dealloc;
- (id)dataTask;
- (id)dataQueue;
- (void)setDataQueue:(id)arg0;
- (id)initWithReceiver:(id)arg0;

@end