//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWEAwemeModel, NSDictionary, UIViewController;
@protocol AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoProtocol, AWEPlayVideoViewControllerProtocol, HunterVideoViewDelegate, AWEAwemePlayVideoTrackProtocol;

@interface HunterVideoView : UIView <IESVideoPlayerDelegate, AWEPlayVideoDelegate, AWEPlayVideoViewControllerStatusDelegate> {
    BOOL _isPlayCalled;
    id<HunterVideoViewDelegate> _delegate;
    UIViewController<AWEPlayVideoViewControllerProtocol, AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> *_playVideoViewController;
    NSDictionary *_logExtra;
    NSString *_referString;
    AWEAwemeModel *_awemeModel;
    UIImageView *_coverImageView;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (nonatomic) BOOL isPlayCalled;
@property (weak, nonatomic) id<HunterVideoViewDelegate> delegate;
@property (retain, nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol, AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> *playVideoViewController;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)referString;
- (void)player:(id)arg0 playbackFailedWithError:(id)arg1;
- (void)playerDidReadyForDisplay:(id)arg0;
- (void)player:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)playerWillLoopPlaying:(id)arg0;
- (void)player:(id)arg0 playbackFailedForURL:(id)arg1 error:(id)arg2;
- (void)player:(id)arg0 didChangeStallState:(long long)arg1 actionType:(long long)arg2 reason:(unsigned long long)arg3;
- (void)player:(id)arg0 didChangePlaybackRate:(double)arg1;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)player:(id)arg0 updatePlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (id)playVideoViewController;
- (void)setPlayVideoViewController:(id)arg0;
- (void)videoController:(id)arg0 playerPlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)videoUpdatePlayerControllerWithPlayVideoVC:(id)arg0;
- (void)setCoverImage:(id)arg0;
- (void)updateLogExtra:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)videoUpdatePlayerControllerWithPlayState:(long long)arg0;
- (void)willEnterLandscapeFeed;
- (void)videoUpdatePlayerControllerWithNewPlayState:(long long)arg0;
- (void)didExitLandscapeFeed;
- (BOOL)isPlayCalled;
- (void)setIsPlayCalled:(BOOL)arg0;
- (id)transitionContext;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (BOOL)play;
- (void)pause;
- (void)setupUI;
- (void)updateWithModel:(id)arg0;

@end
