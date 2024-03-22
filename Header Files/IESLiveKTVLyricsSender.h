//
//     Generated by private class-dump
//

@class RACCompoundDisposable, NSString, IESLiveKRCSentenceTimeSource, IESLiveLyricViewConfig;
@protocol IESLiveKTVLyricsHandlerDelegate;

@interface IESLiveKTVLyricsSender : NSObject <IESLiveKTVLyricsHandler> {
    BOOL _isAnimating;
    id<IESLiveKTVLyricsHandlerDelegate> _delegate;
    IESLiveLyricViewConfig *_lyricViewConfig;
    double _currentPlayingTime;
    IESLiveKRCSentenceTimeSource *_krcSentenceTimeSource;
    RACCompoundDisposable *_disposable;
}

@property (retain, nonatomic) IESLiveKRCSentenceTimeSource *krcSentenceTimeSource;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) RACCompoundDisposable *disposable;
@property (weak, nonatomic) id<IESLiveKTVLyricsHandlerDelegate> delegate;
@property (retain, nonatomic) IESLiveLyricViewConfig *lyricViewConfig;
@property (nonatomic) double currentPlayingTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)currentPlayingTime;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)setCurrentPlayingTime:(double)arg0;
- (void)updatePlayingTime:(double)arg0;
- (id)krcSentenceTimeSource;
- (void)setKrcSentenceTimeSource:(id)arg0;
- (id)lyricViewConfig;
- (void)setLyricViewConfig:(id)arg0;
- (void)startWithSentences:(id)arg0;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)reset;
- (void)setIsAnimating:(BOOL)arg0;

@end