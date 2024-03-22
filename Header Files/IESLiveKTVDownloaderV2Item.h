//
//     Generated by private class-dump
//

@class TTHttpTask, NSProgress, NSString;

@interface IESLiveKTVDownloaderV2Item : NSObject {
    TTHttpTask *_task;
    NSProgress *_progress;
    NSString *_key;
    double _timeoutTS;
    id /* block */ _progressBlock;
    id /* block */ _completion;
}

@property (retain, nonatomic) TTHttpTask *task;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) double timeoutTS;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithKey:(id)arg0 timeoutSecond:(int)arg1 progressBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (double)timeoutTS;
- (void)setTimeoutTS:(double)arg0;
- (id)key;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)setProgressBlock:(id /* block */)arg0;
- (void)setKey:(id)arg0;
- (void)setTask:(id)arg0;
- (id)progress;
- (id /* block */)progressBlock;
- (void)dealloc;
- (id)task;
- (void)setProgress:(id)arg0;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;

@end