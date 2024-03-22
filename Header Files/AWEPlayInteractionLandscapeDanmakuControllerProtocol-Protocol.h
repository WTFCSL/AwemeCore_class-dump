//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel, UIView;
@protocol AWEPlayInteractionLandScapeDanmakuControllerDelegate;

@protocol AWEPlayInteractionLandscapeDanmakuControllerProtocol <NSObject>

@property (readonly, nonatomic) UIView *danmakuContainView;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEPlayInteractionLandScapeDanmakuControllerDelegate> delegate;
@property (nonatomic) BOOL hasReceiveMaskInfo;

- (void)setEnterFrom:(id)arg0;
- (void)player:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (id)enterFrom;
- (void)changeDanmakuMaskTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (void)danmakuButtonClicked:(id)arg0;
- (void)onMaskInfoUpdate:(id)arg0 pts:(unsigned long long)arg1;
- (BOOL)isDanmakuShowing;
- (void)pauseDanmakuPlayer;
- (void)trackDanmakuPlayResult;
- (void)trackDanmakuImpression;
- (BOOL)hasReceiveMaskInfo;
- (void)handleCurrentVideoSpeedChange;
- (void)clearDanmakuMaskIfNeed;
- (id)danmakuContainView;
- (void)updateDanmakuWithVideoStatus:(BOOL)arg0;
- (void)onPlayerWillLoopPlaying;
- (void)handleProgressSliderTouchEnded;
- (void)refreshDanmakuWithShieldWordChange;
- (void)clearDanmakuMask;
- (void)updateDanmaKuStyle;
- (id)allVisibleViews;
- (void)resumeDanmakuPlayer;
- (void)stopDanmakuPlayer;
- (void)setHasReceiveMaskInfo:(BOOL)arg0;
- (void)showDanmakuIfNeed;
- (void)setModel:(id)arg0;
- (id)model;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)reset;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (void)updateModel:(id)arg0;

@optional

- (void)pauseDanmakuForFPSOptIfNeed;
- (void)resumeDanmakuForFPSOptIfNeed;
- (id)currentDanmakuCount;

@end