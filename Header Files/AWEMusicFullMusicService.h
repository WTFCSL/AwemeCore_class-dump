//
//     Generated by private class-dump
//

@class AWEMusicPlayEventService, NSString, NSDictionary, AWEMusicPlayerQueue, AWEMusicMainFeedViewController, NSNumber;
@protocol MusicService;

@interface AWEMusicFullMusicService : NSObject <AWEMusicFeedPlayerDelegate, AWEMusicStreamingQueueDelegate> {
    BOOL _showLunaTag;
    BOOL _hasFullMusicData;
    BOOL _hasMore;
    BOOL _haveReportedLoadFinish;
    BOOL _isRequesting;
    BOOL _shouldStartPlay;
    BOOL _mustBeSingleSong;
    AWEMusicPlayerQueue *_queue;
    NSNumber *_scene;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSString *_previousPage;
    NSDictionary *_extraParams;
    AWEMusicMainFeedViewController *_playerVC;
    id<MusicService> _musicService;
    NSString *_relativeMusicId;
    double _enterTime;
    AWEMusicPlayEventService *_eventService;
}

@property (copy, nonatomic) NSString *relativeMusicId;
@property (nonatomic) BOOL hasFullMusicData;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) double enterTime;
@property (nonatomic) BOOL haveReportedLoadFinish;
@property (retain, nonatomic) AWEMusicPlayEventService *eventService;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL shouldStartPlay;
@property (nonatomic) BOOL mustBeSingleSong;
@property (retain, nonatomic) AWEMusicPlayerQueue *queue;
@property (retain, nonatomic) NSNumber *scene;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (weak, nonatomic) AWEMusicMainFeedViewController *playerVC;
@property (weak, nonatomic) id<MusicService> musicService;
@property (nonatomic) BOOL showLunaTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (void)setIsRequesting:(BOOL)arg0;
- (id)extraParams;
- (BOOL)isRequesting;
- (void)setExtraParams:(id)arg0;
- (double)enterTime;
- (void)setEnterTime:(double)arg0;
- (id)musicService;
- (void)setMusicService:(id)arg0;
- (BOOL)shouldStartPlay;
- (id)playerVC;
- (void)setPlayerVC:(id)arg0;
- (id)queueHandler;
- (void)feedDidRetry:(id)arg0;
- (void)feedViewDidLoad:(id)arg0;
- (void)feed:(id)arg0 didDismissAnimation:(BOOL)arg1;
- (void)feedBgGuideDidDisappear:(id)arg0;
- (id)collectToast:(BOOL)arg0;
- (BOOL)hasMoreOfScene:(id)arg0;
- (void)loadMoreScene:(id)arg0 responseBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (BOOL)showLunaTag;
- (void)setHaveReportedLoadFinish:(BOOL)arg0;
- (void)setRelativeMusicId:(id)arg0;
- (void)setMustBeSingleSong:(BOOL)arg0;
- (void)setShouldStartPlay:(BOOL)arg0;
- (id)relativeMusicId;
- (void)etReportLoadFinish:(id)arg0 error:(id)arg1;
- (BOOL)isSingleSongMode;
- (void)setHasFullMusicData:(BOOL)arg0;
- (id)convert:(id)arg0 queueNane:(id)arg1;
- (id)viewModelsFromMediaModels:(id)arg0 queueName:(id)arg1;
- (BOOL)hasFullMusicData;
- (void)loadFullMusicInfoResponseBlock:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)loadRecommandInfoResponseBlock:(id /* block */)arg0 completion:(id /* block */)arg1;
- (BOOL)mustBeSingleSong;
- (BOOL)haveReportedLoadFinish;
- (id)initWithFullMusicId:(id)arg0 mustBeSingleSong:(BOOL)arg1;
- (void)setShowLunaTag:(BOOL)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setEventService:(id)arg0;
- (id)eventService;
- (id)queue;
- (void)dealloc;
- (void)setQueue:(id)arg0;
- (id)scene;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;

@end
