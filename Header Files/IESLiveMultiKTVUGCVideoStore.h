//
//     Generated by private class-dump
//

@class IESLiveKTVMVInfo, HTSEventContext, IESLiveKtvSongStruct, NSString, IESLiveMultiKTVApi, IESLiveComponentContext, NSNumber;
@protocol IESLiveRoomService, IESLiveMultiKTVUGCVideoDelegate;

@interface IESLiveMultiKTVUGCVideoStore : NSObject <IESLiveMultiKTVUGCVideoRouter, IESLiveUGCVideoSelectPanelDelegate> {
    id<IESLiveMultiKTVUGCVideoDelegate> _delegate;
    IESLiveKTVMVInfo *_currentMVInfo;
    IESLiveMultiKTVApi *_api;
    id<IESLiveRoomService> _room;
    HTSEventContext *_trackContext;
    IESLiveComponentContext *_componentContext;
    IESLiveKTVMVInfo *_defaultMVInfo;
    IESLiveKtvSongStruct *_curPlayingSong;
    NSNumber *_singerID;
    NSNumber *_songID;
    long long _personalMVCount;
    long long _officialMVCount;
}

@property (weak, nonatomic) IESLiveMultiKTVApi *api;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) IESLiveKTVMVInfo *currentMVInfo;
@property (retain, nonatomic) IESLiveKTVMVInfo *defaultMVInfo;
@property (weak, nonatomic) IESLiveKtvSongStruct *curPlayingSong;
@property (retain, nonatomic) NSNumber *singerID;
@property (retain, nonatomic) NSNumber *songID;
@property (nonatomic) long long personalMVCount;
@property (nonatomic) long long officialMVCount;
@property (weak, nonatomic) id<IESLiveMultiKTVUGCVideoDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (void)setSongID:(id)arg0;
- (id)singerID;
- (void)setSingerID:(id)arg0;
- (id)getCurrentPlayingMV;
- (id)usedMVCountDictForSinging;
- (id)mvInfoDict;
- (void)playWithMVInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)handleMessageAndWrdsUpdate:(id)arg0;
- (void)updateKTVStageState:(unsigned long long)arg0;
- (id)initWithRoom:(id)arg0 trackContext:(id)arg1 componentContext:(id)arg2 api:(id)arg3;
- (id)defaultVid;
- (void)bindUGCVideoProtocols;
- (void)unbindUGCVideoProtocols;
- (void)updateCurPlayingMusic:(id)arg0;
- (void)playSelectedMVWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)bindUGCVideoObserve;
- (id)currentMVInfo;
- (void)setCurrentMVInfo:(id)arg0;
- (id)curPlayingSong;
- (long long)personalMVCount;
- (void)setPersonalMVCount:(long long)arg0;
- (long long)officialMVCount;
- (void)setOfficialMVCount:(long long)arg0;
- (void)setCurPlayingSong:(id)arg0;
- (void)getMVListWithParams:(id)arg0 loadMore:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)changeMVListWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)chooseMVListWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)getPlayingMVWithCompletion:(id /* block */)arg0;
- (id)defaultMVInfo;
- (void)setDefaultMVInfo:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)songID;
- (id)api;
- (void)setApi:(id)arg0;

@end
