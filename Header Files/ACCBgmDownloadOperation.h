//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCBgmDownloadOperationDelegate, ACCMusicModelProtocol;

@interface ACCBgmDownloadOperation : NSOperation {
    BOOL _isExecuting;
    BOOL _isFinished;
    NSString *_musicId;
    id<ACCMusicModelProtocol> _music;
    id<ACCBgmDownloadOperationDelegate> _delegate;
    id /* block */ _processBlock;
    id /* block */ _resultBlock;
}

@property (retain, nonatomic) NSString *musicId;
@property (retain, nonatomic) id<ACCMusicModelProtocol> music;
@property (weak, nonatomic) id<ACCBgmDownloadOperationDelegate> delegate;
@property (copy, nonatomic) id /* block */ processBlock;
@property (copy, nonatomic) id /* block */ resultBlock;

- (void)setMusicId:(id)arg0;
- (id)musicId;
- (id)initWithMusic:(id)arg0;
- (id)initWithMusicId:(id)arg0;
- (void)didFailWithError:(id)arg0 code:(long long)arg1;
- (void)downloadMusicData;
- (id)music;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (void)setResultBlock:(id /* block */)arg0;
- (void)finish;
- (void)setMusic:(id)arg0;
- (void)setProcessBlock:(id /* block */)arg0;
- (void)didCancel;
- (id /* block */)processBlock;
- (id)delegate;
- (void)cancel;
- (id)description;
- (void)setDelegate:(id)arg0;
- (id /* block */)resultBlock;

@end