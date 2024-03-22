//
//     Generated by private class-dump
//

@class DVEVideoThumbnailLoader, DVEVideoTrackThumbnail;

@interface DVEVideoThumbnailTask : NSOperation {
    BOOL _pIsFinished;
    BOOL _pIsExecuting;
    DVEVideoThumbnailLoader *_loader;
    DVEVideoTrackThumbnail *_thumbnail;
    id /* block */ _completion;
}

@property (nonatomic) BOOL pIsFinished;
@property (nonatomic) BOOL pIsExecuting;
@property (retain, nonatomic) DVEVideoThumbnailLoader *loader;
@property (retain, nonatomic) DVEVideoTrackThumbnail *thumbnail;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithLoader:(id)arg0 thumbnail:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)pIsFinished;
- (BOOL)pIsExecuting;
- (void)setPIsFinished:(BOOL)arg0;
- (void)setPIsExecuting:(BOOL)arg0;
- (void)setThumbnail:(id)arg0;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (id /* block */)completion;
- (void)main;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (void)setCompletion:(id /* block */)arg0;
- (void)finish;
- (id)thumbnail;
- (void)start;
- (id)loader;
- (void)setLoader:(id)arg0;

@end