//
//     Generated by private class-dump
//

@class IESLiveKTVResourceManager, NSString, RACCompoundDisposable, IESLiveCommonDownloadQueue, IESLiveKRCSentenceTimeSource, NSMutableArray, NSNumber, IESLiveLyricViewConfig;
@protocol IESLiveKTVLyricsHandlerDelegate, IESLiveKTVLyricsReceiverDataSource;

@interface IESLiveKTVLyricsReceiver : NSObject <IESLiveKTVLyricsHandler> {
    BOOL _isAnimating;
    BOOL _fullLyrics;
    BOOL _isDownloadLyrcis;
    double _playingTime;
    NSNumber *_currentPlayingMusicID;
    id<IESLiveKTVLyricsHandlerDelegate> _delegate;
    id<IESLiveKTVLyricsReceiverDataSource> _dataSource;
    IESLiveLyricViewConfig *_lyricViewConfig;
    unsigned long long _currentLyricType;
    NSMutableArray *_krcSentences;
    IESLiveKRCSentenceTimeSource *_krcSentenceTimeSource;
    IESLiveCommonDownloadQueue *_downloadQueue;
    RACCompoundDisposable *_disposable;
    IESLiveKTVResourceManager *_resourceManager;
}

@property (nonatomic) unsigned long long currentLyricType;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) NSMutableArray *krcSentences;
@property (retain, nonatomic) IESLiveKRCSentenceTimeSource *krcSentenceTimeSource;
@property (nonatomic) BOOL fullLyrics;
@property (nonatomic) BOOL isDownloadLyrcis;
@property (retain, nonatomic) IESLiveCommonDownloadQueue *downloadQueue;
@property (retain, nonatomic) RACCompoundDisposable *disposable;
@property (retain, nonatomic) IESLiveKTVResourceManager *resourceManager;
@property (nonatomic) double playingTime;
@property (retain, nonatomic) NSNumber *currentPlayingMusicID;
@property (weak, nonatomic) id<IESLiveKTVLyricsHandlerDelegate> delegate;
@property (weak, nonatomic) id<IESLiveKTVLyricsReceiverDataSource> dataSource;
@property (retain, nonatomic) IESLiveLyricViewConfig *lyricViewConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)playingTime;
- (void)setPlayingTime:(double)arg0;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)handleSEIModel:(id)arg0;
- (id)currentPlayingMusicID;
- (void)setCurrentPlayingMusicID:(id)arg0;
- (void)handleAudienceLyricStart:(id)arg0;
- (void)finishedMusicWithID:(id)arg0 force:(BOOL)arg1;
- (void)handleMoreLyrics:(id)arg0;
- (id)krcSentenceTimeSource;
- (void)setCurrentLyricType:(unsigned long long)arg0;
- (void)setKrcSentences:(id)arg0;
- (BOOL)fullLyrics;
- (void)prepareLocalLyricsWithKtvSeiModel:(id)arg0;
- (void)appendMoreLyricSentences:(id)arg0;
- (void)startLyricTimeSourceIfNeeded;
- (id)krcSentences;
- (void)setIsDownloadLyrcis:(BOOL)arg0;
- (void)setKrcSentenceTimeSource:(id)arg0;
- (void)setFullLyrics:(BOOL)arg0;
- (void)loadLocalLyricsV2:(id)arg0 musicID:(id)arg1 lyricType:(unsigned long long)arg2 lyricsOffset:(double)arg3 duration:(long long)arg4;
- (void)loadLocalLyrics:(id)arg0 musicID:(id)arg1 lyricType:(unsigned long long)arg2 lyricsOffset:(double)arg3 duration:(long long)arg4;
- (void)loadLyricFromLocaPath:(id)arg0 musicID:(id)arg1 lyricType:(unsigned long long)arg2 lyricsOffset:(double)arg3 duration:(long long)arg4;
- (id)lyricViewConfig;
- (BOOL)isDownloadLyrcis;
- (id)getFullLyricsSentences;
- (void)setLyricViewConfig:(id)arg0;
- (unsigned long long)currentLyricType;
- (BOOL)isAnimating;
- (BOOL)hasLyrics;
- (void)setDataSource:(id)arg0;
- (id)init;
- (id)dataSource;
- (void).cxx_destruct;
- (id)resourceManager;
- (void)setDownloadQueue:(id)arg0;
- (id)delegate;
- (id)downloadQueue;
- (void)setDelegate:(id)arg0;
- (void)reset;
- (void)setIsAnimating:(BOOL)arg0;
- (void)setResourceManager:(id)arg0;

@end
