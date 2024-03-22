//
//     Generated by private class-dump
//

@class NSDictionary, AWEMusicSongListSelectViewController, NSObject, UIViewController, NSMutableArray, UIView, AWEPlaylistInfoModel, NSString, AWEMusicSelectSearchViewController, LunaPlayEventService, AWEMusicPlayEventService, AWEMusicDSPEventModel, AWEMusicSelectTopView;
@protocol MusicService, AWEMusicSelectContainerViewControllerDelegate;

@interface AWEMusicSelectContainerViewController : AWEMiniLunaBaseViewController <AWEMusicPresentPushInnerProvider, AWEMusicDispatchPlaylistProtocol, AWEMusicSongListSelectDelegate> {
    BOOL _isEmpty;
    BOOL _isMiniLuna;
    BOOL _needOffline;
    AWEPlaylistInfoModel *_playlistInfo;
    id<AWEMusicSelectContainerViewControllerDelegate> _delegate;
    AWEMusicDSPEventModel *_eventModel;
    NSDictionary *_trackParams;
    NSString *_playlistID;
    AWEMusicSelectTopView *_topView;
    UIView *_contentView;
    AWEMusicSongListSelectViewController *_recommendListVC;
    AWEMusicSelectSearchViewController *_searchListVC;
    NSObject<MusicService> *_musicService;
    AWEMusicPlayEventService *_playEventService;
    LunaPlayEventService *_lunaPlayEventService;
    long long _addMusicNum;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSString *_previousPage;
    NSString *_pageName;
    UIViewController *_currentVC;
    NSMutableArray *_allTrackIDs;
}

@property (copy, nonatomic) NSString *playlistID;
@property (retain, nonatomic) AWEMusicSelectTopView *topView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEMusicSongListSelectViewController *recommendListVC;
@property (retain, nonatomic) AWEMusicSelectSearchViewController *searchListVC;
@property (retain, nonatomic) NSObject<MusicService> *musicService;
@property (retain, nonatomic) AWEMusicPlayEventService *playEventService;
@property (retain, nonatomic) LunaPlayEventService *lunaPlayEventService;
@property (nonatomic) long long addMusicNum;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *pageName;
@property (retain, nonatomic) UIViewController *currentVC;
@property (retain, nonatomic) NSMutableArray *allTrackIDs;
@property (retain, nonatomic) AWEPlaylistInfoModel *playlistInfo;
@property (nonatomic) BOOL isEmpty;
@property (weak, nonatomic) id<AWEMusicSelectContainerViewControllerDelegate> delegate;
@property (nonatomic) BOOL isMiniLuna;
@property (nonatomic) BOOL needOffline;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (BOOL)isMiniLuna;
- (id)enterMethod;
- (id)enterFrom;
- (id)playlistInfo;
- (void)setPlaylistInfo:(id)arg0;
- (void)setIsMiniLuna:(BOOL)arg0;
- (id)trackParams;
- (void)setPlaylistID:(id)arg0;
- (void)setTrackParams:(id)arg0;
- (id)currentVC;
- (void)setCurrentVC:(id)arg0;
- (id)musicService;
- (void)setMusicService:(id)arg0;
- (id)playEventService;
- (void)setPlayEventService:(id)arg0;
- (void)initSubviews;
- (id)initWithPlaylistInfo:(id)arg0 enterFrom:(id)arg1 enterMethod:(id)arg2 previousPage:(id)arg3 pageName:(id)arg4;
- (void)setNeedOffline:(BOOL)arg0;
- (void)playlistSongsChangedWithType:(unsigned long long)arg0 playlistId:(id)arg1 changeModels:(id)arg2 from:(id)arg3;
- (id)eventModel;
- (void)setEventModel:(id)arg0;
- (void)reportCollectEventModel:(id)arg0 isSuccess:(BOOL)arg1 code:(long long)arg2 isRepeatCollect:(BOOL)arg3;
- (id)recommendListVC;
- (id)searchListVC;
- (long long)addMusicNum;
- (BOOL)needOffline;
- (void)p_offlineAddMusicWithModel:(id)arg0 scene:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)p_addMusicWithModel:(id)arg0 scene:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)p_trackAddSongEventWithItem:(id)arg0 params:(id)arg1;
- (id)allTrackIDs;
- (void)setAllTrackIDs:(id)arg0;
- (void)setAddMusicNum:(long long)arg0;
- (long long)topViewStyle;
- (void)addMusicWithModel:(id)arg0 scene:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)didFetchAllTrackIDs:(id)arg0;
- (void)setRecommendListVC:(id)arg0;
- (void)setSearchListVC:(id)arg0;
- (id)lunaPlayEventService;
- (void)setLunaPlayEventService:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)contentView;
- (id)delegate;
- (void)closeAction;
- (BOOL)isEmpty;
- (void)viewWillAppear:(BOOL)arg0;
- (id)subTitle;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setContentView:(id)arg0;
- (id)topView;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (void)setTopView:(id)arg0;
- (id)playlistID;
- (void)setIsEmpty:(BOOL)arg0;
- (void)searchTextChanged:(id)arg0;
- (void)setPageName:(id)arg0;
- (id)pageName;

@end
