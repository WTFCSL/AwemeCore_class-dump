//
//     Generated by private class-dump
//

@class HTSLiveUser, HTSLiveRoom, IESLiveFeedAudioStageViewExtraModel, NSString, IESLiveLinkmicPreviewLoadTracker, IESLiveLinkmicRoomEnterTracker, IESLiveMultiAudioKTVContainerView;
@protocol IESLivePlayerProtocol;

@interface IESLiveFeedAudioMultiKTVStageView : UIView <IESLiveFeedAudioStageViewProtocol> {
    BOOL smallMode;
    HTSLiveRoom *roomModel;
    HTSLiveUser *roomOwner;
    IESLiveFeedAudioStageViewExtraModel *extraModel;
    id<IESLivePlayerProtocol> _player;
    IESLiveLinkmicRoomEnterTracker *_roomEnterTracker;
    IESLiveLinkmicPreviewLoadTracker *_previewLoadTracker;
    IESLiveMultiAudioKTVContainerView *_stageView;
    id _latestMessage;
}

@property (retain, nonatomic) IESLiveMultiAudioKTVContainerView *stageView;
@property (retain, nonatomic) id latestMessage;
@property (retain, nonatomic) id<IESLivePlayerProtocol> player;
@property (weak, nonatomic) IESLiveLinkmicRoomEnterTracker *roomEnterTracker;
@property (weak, nonatomic) IESLiveLinkmicPreviewLoadTracker *previewLoadTracker;
@property (retain, nonatomic) HTSLiveUser *roomOwner;
@property (retain, nonatomic) HTSLiveRoom *roomModel;
@property (retain, nonatomic) IESLiveFeedAudioStageViewExtraModel *extraModel;
@property (nonatomic) BOOL smallMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extraModel;
- (void)setExtraModel:(id)arg0;
- (id)roomModel;
- (void)setLatestMessage:(id)arg0;
- (void)setRoomModel:(id)arg0;
- (id)latestMessage;
- (void)updateAnchorUser:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })guestListViewFrame;
- (id)allSeatProviderViews;
- (void)configWithListModel:(id)arg0;
- (void)handleSEIData:(id)arg0;
- (void)setSmallMode:(BOOL)arg0;
- (id)roomEnterTracker;
- (void)setRoomEnterTracker:(id)arg0;
- (void)smoothExitRoomToPreview;
- (void)onMessageReceivedFromPrestream:(id)arg0 withDict:(id)arg1;
- (void)smoothEnterRoomFromPreview;
- (id)ktvPreStreamContext;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })stageInsetsForAdapterSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)enableUGCMV;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 roomOwner:(id)arg1 roomModel:(id)arg2 extra:(id)arg3;
- (void)loadStageView;
- (void)handleSEIParseResult:(id)arg0;
- (BOOL)smallMode;
- (id)currentKTVStageView;
- (id)currentKTVContainerView;
- (id)stageView;
- (void)updateStageMessageIfNeed;
- (void)setStageView:(id)arg0;
- (id)previewLoadTracker;
- (void)setPreviewLoadTracker:(id)arg0;
- (void).cxx_destruct;
- (void)setPlayer:(id)arg0;
- (id)player;
- (id)roomOwner;
- (void)setRoomOwner:(id)arg0;

@end