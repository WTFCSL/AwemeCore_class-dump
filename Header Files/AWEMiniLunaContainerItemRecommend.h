//
//     Generated by private class-dump
//

@class LunaPlayerViewController, NSString, LunaRecommendDataSource, AWEMiniLunaContext, NSArray;
@protocol MusicService;

@interface AWEMiniLunaContainerItemRecommend : NSObject <AWEMusicFeedPlayerDelegate, AWEUserMessage, AWEMusicContainerItemProtocol> {
    BOOL _canAutoStartPlay;
    BOOL _isCurrentUser;
    NSArray *_entranceModels;
    LunaPlayerViewController *_innerVC;
    id<MusicService> _musicService;
    LunaRecommendDataSource *_dataSource;
    NSString *_secUserID;
    double _enterTime;
    AWEMiniLunaContext *_context;
}

@property (retain, nonatomic) LunaPlayerViewController *innerVC;
@property (retain, nonatomic) id<MusicService> musicService;
@property (retain, nonatomic) LunaRecommendDataSource *dataSource;
@property (copy, nonatomic) NSString *secUserID;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) double enterTime;
@property (retain, nonatomic) AWEMiniLunaContext *context;
@property (nonatomic) BOOL canAutoStartPlay;
@property (retain, nonatomic) NSArray *entranceModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (void)didFinishLogin;
- (void)didFinishLogout;
- (unsigned long long)tabType;
- (double)enterTime;
- (void)setEnterTime:(double)arg0;
- (void)receiveNotification:(id)arg0;
- (id)musicService;
- (void)setMusicService:(id)arg0;
- (void)setInnerVC:(id)arg0;
- (id)innerVC;
- (id)topNavBarTitle;
- (BOOL)needSeperateLine;
- (id)miniPage;
- (void)p_request;
- (void)loadEntranceModel;
- (id)entranceModels;
- (void)resetMainPlayerQueue:(id)arg0;
- (void)et_reportPerfFeedEntity:(BOOL)arg0 netDuration:(double)arg1 parsarModelTime:(double)arg2 modelCount:(int)arg3;
- (BOOL)canAutoStartPlay;
- (void)checkShowChangeSongGuide;
- (void)resetAndForceInsert;
- (void)feedDidRetry:(id)arg0;
- (void)feedViewDidLoad:(id)arg0;
- (void)feed:(id)arg0 didDismissAnimation:(BOOL)arg1;
- (void)setCanAutoStartPlay:(BOOL)arg0;
- (void)setEntranceModels:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (id)viewController;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (BOOL)isDarkTheme;
- (void)dealloc;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:(BOOL)arg0;
- (void)setAppearing:(BOOL)arg0;
- (id)tabName;

@end
