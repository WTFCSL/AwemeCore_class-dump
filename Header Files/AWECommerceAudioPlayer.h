//
//     Generated by private class-dump
//

@class NSString, AVPlayer, AVPlayerItem;

@interface AWECommerceAudioPlayer : NSObject <AWECommerceAudioPlayer> {
    NSString *_currentURLString;
    id /* block */ _readyToPlayBlock;
    id /* block */ _finishBlock;
    id /* block */ _failedBlock;
    AVPlayer *_player;
    AVPlayerItem *_currentPlayerItem;
}

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerItem *currentPlayerItem;
@property (copy, nonatomic) NSString *currentURLString;
@property (copy, nonatomic) id /* block */ readyToPlayBlock;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (copy, nonatomic) id /* block */ failedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlayer;

- (void)playWith:(id)arg0;
- (void)clearPlayer;
- (id)currentURLString;
- (id /* block */)readyToPlayBlock;
- (void)setReadyToPlayBlock:(id /* block */)arg0;
- (void)setCurrentURLString:(id)arg0;
- (void)removePlayerItemObserver;
- (void)addPlayerItemObserver;
- (void)avPlayerDidFinish:(id)arg0;
- (void).cxx_destruct;
- (void)setPlayer:(id)arg0;
- (void)play;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (void)seekToTime:(double)arg0;
- (id)player;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg0;
- (id)currentPlayerItem;
- (void)setCurrentPlayerItem:(id)arg0;
- (id /* block */)finishBlock;
- (void)setFinishBlock:(id /* block */)arg0;

@end
