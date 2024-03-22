//
//     Generated by private class-dump
//

@class RACDisposable, HTSEventContext, IESLiveDrawerRelationShowApi;
@protocol IESLiveRoomService;

@interface IESLiveFeedDrawerStore : NSObject {
    BOOL _liveWillFinished;
    HTSEventContext *_trackContext;
    id<IESLiveRoomService> _room;
    RACDisposable *_disposable;
    IESLiveDrawerRelationShowApi *_relationShowApi;
}

@property (retain, nonatomic) RACDisposable *disposable;
@property (retain, nonatomic) IESLiveDrawerRelationShowApi *relationShowApi;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL liveWillFinished;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (BOOL)liveWillFinished;
- (BOOL)canShowDrawerSwipeGuideWithoutSaveState;
- (BOOL)checkAndMarkShowConcernListTimeSpan;
- (void)fetchRelationList:(id /* block */)arg0;
- (void)setEntranceSearchGuideShown;
- (void)setLiveWillFinished:(BOOL)arg0;
- (id)relationShowApi;
- (void)setRelationShowApi:(id)arg0;
- (void)trackCloseGuideShow;
- (void)trackAlertShowMoreAnchorClick;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)initWithRoom:(id)arg0;

@end
