//
//     Generated by private class-dump
//

@class AVAudioPlayer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BDCTAudioPlayer : NSObject <AVAudioPlayerDelegate> {
    AVAudioPlayer *_audioPlayer;
    NSString *_playingURLString;
    unsigned long long _audioPlayerState;
    id /* block */ _executationBlock;
    NSObject<OS_dispatch_queue> *_audioPlayerQueue;
}

@property (retain, nonatomic) AVAudioPlayer *audioPlayer;
@property (copy, nonatomic) NSString *playingURLString;
@property (nonatomic) unsigned long long audioPlayerState;
@property (copy, nonatomic) id /* block */ executationBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioPlayerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)playingURLString;
- (void)setPlayingURLString:(id)arg0;
- (void)setAudioPlayerState:(unsigned long long)arg0;
- (void)playAudioWithFileURL:(id)arg0;
- (void)setExecutationBlock:(id /* block */)arg0;
- (id /* block */)executationBlock;
- (void)stopAudioPlayer;
- (void)playAudioWithFilePath:(id)arg0;
- (unsigned long long)audioPlayerState;
- (id)audioPlayerQueue;
- (void)setAudioPlayerQueue:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)audioPlayer;
- (void)setAudioPlayer:(id)arg0;
- (void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1;

@end