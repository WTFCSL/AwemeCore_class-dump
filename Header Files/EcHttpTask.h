//
//     Generated by private class-dump
//

@class NSProgress;

@interface EcHttpTask : NSObject {
    long long _retryTimes;
    NSProgress *_progress;
    id /* block */ _cancel;
    id /* block */ _readStreamData;
    id /* block */ _progressChanged;
}

@property (nonatomic) long long retryTimes;
@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) id /* block */ cancel;
@property (copy, nonatomic) id /* block */ readStreamData;
@property (copy, nonatomic) id /* block */ progressChanged;

- (long long)retryTimes;
- (void)setRetryTimes:(long long)arg0;
- (id /* block */)progressChanged;
- (id /* block */)readStreamData;
- (void)setReadStreamData:(id /* block */)arg0;
- (void)setProgressChanged:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)setCancel:(id /* block */)arg0;
- (id /* block */)cancel;
- (id)progress;
- (void)dealloc;
- (void)setProgress:(id)arg0;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;

@end
