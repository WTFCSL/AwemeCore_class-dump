//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWEAwemeModel, UIView, NSNumber, AWETeenExtraParamModel;
@protocol IESVideoPlayerProtocol, AWETeenDisplayViewControllerDelegate;

@interface AWETeenImageAwemeDisplayViewController : UIViewController <AWETeenDisplayViewControllerProtocol> {
    BOOL _shouldPrepareForDisplay;
    BOOL _pauseBySingleClick;
    BOOL _isShowLoading;
    BOOL _imageLoaded;
    AWETeenExtraParamModel *_extraParam;
    long long playState;
    AWEAwemeModel *_model;
    id<AWETeenDisplayViewControllerDelegate> _interactionDelegate;
    UIImageView *_imageView;
    long long _vcType;
    NSString *_referString;
    UIView *_loadingView;
    NSNumber *_slideType;
    long long _playType;
    id /* block */ _didChangePlayBackAction;
    id /* block */ _initSeekEnd;
    id /* block */ _playComingToEnd;
    id /* block */ _willLoopPlaying;
    double _playStartTimestamp;
    UIImageView *_backgroundImageView;
    NSString *_currentItemID;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL imageLoaded;
@property (nonatomic) double playStartTimestamp;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) NSString *currentItemID;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWETeenDisplayViewControllerDelegate> interactionDelegate;
@property (nonatomic) long long vcType;
@property (copy, nonatomic) NSString *referString;
@property (readonly, nonatomic) UIView *loadingView;
@property (retain, nonatomic) NSNumber *slideType;
@property (nonatomic) long long playType;
@property (readonly, nonatomic) BOOL isShowLoading;
@property (copy, nonatomic) id /* block */ didChangePlayBackAction;
@property (copy, nonatomic) id /* block */ initSeekEnd;
@property (copy, nonatomic) id /* block */ playComingToEnd;
@property (copy, nonatomic) id /* block */ willLoopPlaying;
@property (nonatomic) BOOL shouldPrepareForDisplay;
@property (nonatomic) BOOL pauseBySingleClick;
@property (retain, nonatomic) AWETeenExtraParamModel *extraParam;
@property (nonatomic) long long playState;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (nonatomic) BOOL isReady;
@property (nonatomic) BOOL isSeeking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setReferString:(id)arg0;
- (BOOL)shouldPrepareForDisplay;
- (void)setShouldPrepareForDisplay:(BOOL)arg0;
- (void)setPauseHidden:(BOOL)arg0;
- (void)updatePlayerIfNeeded;
- (double)playStartTimestamp;
- (void)updatePlayerController:(id)arg0 withPlayVideoVC:(id)arg1;
- (BOOL)pauseBySingleClick;
- (void)setPauseBySingleClick:(BOOL)arg0;
- (id)slideType;
- (void)setSlideType:(id)arg0;
- (long long)playType;
- (void)setPlayType:(long long)arg0;
- (id /* block */)willLoopPlaying;
- (void)setWillLoopPlaying:(id /* block */)arg0;
- (BOOL)alertIfNotValid;
- (void)setVcType:(long long)arg0;
- (void)setPlayStartTimestamp:(double)arg0;
- (id)extraParam;
- (void)setExtraParam:(id)arg0;
- (id /* block */)didChangePlayBackAction;
- (void)setDidChangePlayBackAction:(id /* block */)arg0;
- (id)currentItemID;
- (void)setCurrentItemID:(id)arg0;
- (long long)vcType;
- (id /* block */)initSeekEnd;
- (id /* block */)playComingToEnd;
- (BOOL)isShowLoading;
- (void)setInitSeekEnd:(id /* block */)arg0;
- (void)setPlayComingToEnd:(id /* block */)arg0;
- (void)p_updateImageIfNecessary;
- (void)p_trackVideoPlayAction;
- (void)p_trackPlayTime;
- (void)prepareForDisplay;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)backgroundImageView;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)setInteractionDelegate:(id)arg0;
- (id)imageView;
- (BOOL)stop;
- (id)interactionDelegate;
- (BOOL)play:(BOOL)arg0;
- (void)setImageView:(id)arg0;
- (id)contentView;
- (BOOL)isActive;
- (BOOL)isPlaying;
- (BOOL)pause;
- (void)reset;
- (void)viewDidLoad;
- (BOOL)pause:(BOOL)arg0;
- (void)setBackgroundImageView:(id)arg0;
- (BOOL)imageLoaded;
- (id)loadingView;
- (long long)playState;
- (void)setPlayState:(long long)arg0;
- (void)setImageLoaded:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageViewFrame;

@end
