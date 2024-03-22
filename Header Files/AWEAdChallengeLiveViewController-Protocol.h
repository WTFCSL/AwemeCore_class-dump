//
//     Generated by private class-dump
//

@class UIPanGestureRecognizer, AWEAdChallengeCoverLinkModel;
@protocol IESLivePlayerProtocol, AWEAdChallengeLiveDetailDelegate, AWELiveAuienceViewControllerProtocol, AWELiveRoomModelProtocol;

@protocol AWEAdChallengeLiveViewController <AWECrotocol, UIGestureRecognizerDelegate>

@property (retain, nonatomic) id<IESLivePlayerProtocol> previewStreamPlayer;
@property (retain, nonatomic) id<AWELiveAuienceViewControllerProtocol> liveController;
@property (retain, nonatomic) id<AWELiveRoomModelProtocol> roomModel;
@property (retain, nonatomic) AWEAdChallengeCoverLinkModel *coverLinkModel;
@property (retain, nonatomic) UIPanGestureRecognizer *pangesture;
@property (nonatomic) BOOL previewStreamPlayerStartLoad;
@property (weak, nonatomic) id<AWEAdChallengeLiveDetailDelegate> delegate;
@property (nonatomic) BOOL isLiveTransition;
@property (nonatomic) BOOL enableReplay;
@property (nonatomic) BOOL isEnterFullScreenLiveRoom;

- (id)roomModel;
- (BOOL)enableReplay;
- (void)leaveRoom;
- (void)setCoverLinkModel:(id)arg0;
- (id)coverLinkModel;
- (void)setRoomModel:(id)arg0;
- (id)previewStreamPlayer;
- (BOOL)previewStreamPlayerStartLoad;
- (void)setPreviewStreamPlayerStartLoad:(BOOL)arg0;
- (void)setPreviewStreamPlayer:(id)arg0;
- (id)initWithCoverLinkData:(id)arg0;
- (void)startShowPreViewStreamPlayer;
- (void)enterLiveRoom;
- (void)resetPreviewStreamPlayer;
- (id)liveController;
- (void)setLiveController:(id)arg0;
- (id)pangesture;
- (void)setPangesture:(id)arg0;
- (BOOL)isLiveTransition;
- (void)setIsLiveTransition:(BOOL)arg0;
- (void)setEnableReplay:(BOOL)arg0;
- (BOOL)isEnterFullScreenLiveRoom;
- (void)setIsEnterFullScreenLiveRoom:(BOOL)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end