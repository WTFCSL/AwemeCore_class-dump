//
//     Generated by private class-dump
//

@class IESLiveGuideModel, HTSEventContext, HTSLiveAnchorActionCreator;
@protocol IESLiveRoomService, IESLiveScreenshotHub;

@interface IESLiveScreenshotStartStore : NSObject {
    long long _startState;
    IESLiveGuideModel *_guideModel;
    HTSEventContext *_trackContext;
    id<IESLiveRoomService> _room;
    id<IESLiveScreenshotHub> _hub;
    HTSLiveAnchorActionCreator *_anchorActionCreator;
}

@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveScreenshotHub> hub;
@property (retain, nonatomic) HTSLiveAnchorActionCreator *anchorActionCreator;
@property (nonatomic) long long startState;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)guideModel;
- (void)setGuideModel:(id)arg0;
- (void)bindActions;
- (id)initWithGuideModel:(id)arg0 trackContext:(id)arg1;
- (id)anchorActionCreator;
- (void)setAnchorActionCreator:(id)arg0;
- (void)bindXLiveObserveActions;
- (BOOL)cancelLive;
- (void)reportSystemGuideViewShow;
- (void)reportExtensionLaunchedBeforeLive;
- (void)handleEnterRoomSuccess;
- (BOOL)startLiveWithRoom:(id)arg0;
- (id)appSchemeUrl;
- (id)hub;
- (void)setHub:(id)arg0;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)arg0;
- (long long)startState;
- (id)extensionBundleID;
- (void)dealloc;
- (void)addObserver;
- (void)setStartState:(long long)arg0;
- (id)room;
- (void)setRoom:(id)arg0;

@end
