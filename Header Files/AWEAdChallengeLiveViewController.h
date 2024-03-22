//
//     Generated by private class-dump
//

@class AWEAdChallengeCoverLinkModel, NSString, UIImageView, UIPanGestureRecognizer, UIViewController;
@protocol IESLivePlayerProtocol, AWEAdChallengeLiveDetailDelegate, AWELiveAuienceViewControllerProtocol, AWELiveRoomModelProtocol;

@interface AWEAdChallengeLiveViewController : UIViewController <AWEAdChallengeLiveViewController, UIGestureRecognizerDelegate, IESLivePlayerControllerDelegate, AWELiveAudienceDetailDelegate> {
    BOOL _previewStreamPlayerStartLoad;
    BOOL _isLiveTransition;
    BOOL _enableReplay;
    BOOL _isEnterFullScreenLiveRoom;
    BOOL _hasLoadFirstFrame;
    BOOL _coverImageLoadSuccess;
    id<IESLivePlayerProtocol> _previewStreamPlayer;
    id<AWELiveAuienceViewControllerProtocol> _liveController;
    id<AWELiveRoomModelProtocol> _roomModel;
    AWEAdChallengeCoverLinkModel *_coverLinkModel;
    UIPanGestureRecognizer *_pangesture;
    id<AWEAdChallengeLiveDetailDelegate> _delegate;
    UIViewController *_audienceVC;
    UIImageView *_coverImage;
}

@property (retain, nonatomic) UIViewController *audienceVC;
@property (retain, nonatomic) UIImageView *coverImage;
@property (nonatomic) BOOL hasLoadFirstFrame;
@property (nonatomic) BOOL coverImageLoadSuccess;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)arg0 loadStateDidChange:(unsigned long long)arg1;
- (long long)streamOrientation;
- (id)roomModel;
- (void)setCoverImage:(id)arg0;
- (BOOL)enableReplay;
- (void)leaveRoom;
- (void)setCoverLinkModel:(id)arg0;
- (id)coverLinkModel;
- (void)setRoomModel:(id)arg0;
- (void)setHasLoadFirstFrame:(BOOL)arg0;
- (id)previewStreamPlayer;
- (id)audienceVC;
- (void)setAudienceVC:(id)arg0;
- (BOOL)previewStreamPlayerStartLoad;
- (void)setPreviewStreamPlayerStartLoad:(BOOL)arg0;
- (void)setPreviewStreamPlayer:(id)arg0;
- (void)startShowPreStream;
- (double)viewVisibleHeight;
- (void)setCoverImageLoadSuccess:(BOOL)arg0;
- (BOOL)hasLoadFirstFrame;
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
- (void)willQuitAllRoom;
- (BOOL)coverImageLoadSuccess;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)coverImage;
- (id)streamData;

@end