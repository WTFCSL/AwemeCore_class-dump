//
//     Generated by private class-dump
//

@class NSProgress, NSMutableArray;

@interface IESGurdDownloadProgressObject : NSObject {
    NSProgress *_progress;
    NSMutableArray *_progressBlocks;
}

@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSMutableArray *progressBlocks;

+ (id)object;

- (void)setProgressBlocks:(id)arg0;
- (void)startObservingWithProgress:(id)arg0;
- (void)addProgressBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)progress;
- (void)dealloc;
- (void)setProgress:(id)arg0;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (id)progressBlocks;

@end