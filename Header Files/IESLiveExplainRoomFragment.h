//
//     Generated by private class-dump
//

@class IESLiveRightBottomMutuallyExclusiveItem, IESLiveExplainBarInfoView, NSMutableDictionary, NSString, UIView, HTSLiveCommentaryRoomInfo, IESLiveExplainWindowInfoView;

@interface IESLiveExplainRoomFragment : IESLiveRoomComponent <HTSLiveStreamPlayerAction, IESLiveSEIListener, HTSLiveMessageSubscriber, IESLiveAutoRotateAction, IESLiveExplainRouter, IESLiveAirPlayAction, IESLivePublicScreenLayoutSubscriber> {
    BOOL _isNeedShowVice;
    BOOL _hadInitialWindow;
    BOOL _isCameraFirst;
    BOOL _hadTrackShow;
    BOOL _needDeferRealoadVice;
    BOOL _needDeferChangeOrientation;
    IESLiveRightBottomMutuallyExclusiveItem *_rightBottomItem;
    IESLiveExplainWindowInfoView *_windowView;
    UIView *_placeHolder;
    IESLiveExplainBarInfoView *_barInfoView;
    NSMutableDictionary *_explainRoomInfos;
    HTSLiveCommentaryRoomInfo *_currentCommentaryRoomInfo;
    NSString *_currentSEIRoomID;
}

@property (nonatomic) BOOL isNeedShowVice;
@property (nonatomic) BOOL hadInitialWindow;
@property (nonatomic) BOOL isCameraFirst;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *rightBottomItem;
@property (retain, nonatomic) IESLiveExplainWindowInfoView *windowView;
@property (retain, nonatomic) UIView *placeHolder;
@property (retain, nonatomic) IESLiveExplainBarInfoView *barInfoView;
@property (retain, nonatomic) NSMutableDictionary *explainRoomInfos;
@property (retain, nonatomic) HTSLiveCommentaryRoomInfo *currentCommentaryRoomInfo;
@property (retain, nonatomic) NSString *currentSEIRoomID;
@property (nonatomic) BOOL hadTrackShow;
@property (nonatomic) BOOL needDeferRealoadVice;
@property (nonatomic) BOOL needDeferChangeOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentOrientationChanged:(long long)arg0;
- (void)setCurrentSEIRoomID:(id)arg0;
- (void)onViceViewInitSetup:(id)arg0;
- (void)onViceViewHiddenChange:(BOOL)arg0;
- (id)currentSEIRoomID;
- (void)changeDisplayFor:(BOOL)arg0;
- (id)windowView;
- (void)setWindowView:(id)arg0;
- (void)publicScreenLayoutChanged:(id)arg0 forType:(unsigned long long)arg1;
- (void)componentOrientationTransitionBegin:(long long)arg0;
- (void)animationForAutoRotateToOrientation:(long long)arg0 duration:(double)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (void)airplayStateDidChange:(BOOL)arg0;
- (void)onAirplayClose;
- (id)rightBottomItem;
- (void)setRightBottomItem:(id)arg0;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)arg0;
- (BOOL)isCameraFirst;
- (BOOL)isExplainBarShow;
- (double)explainBarFrameY;
- (void)setExplainRoomInfos:(id)arg0;
- (id)explainRoomInfos;
- (BOOL)hadInitialWindow;
- (void)showRightBottom:(BOOL)arg0;
- (void)showBottomBarIfNeed:(BOOL)arg0;
- (void)hideRightBottom;
- (void)hideBottomBar;
- (BOOL)needDeferRealoadVice;
- (void)setNeedDeferRealoadVice:(BOOL)arg0;
- (BOOL)needDeferChangeOrientation;
- (id)currentCommentaryRoomInfo;
- (void)updateMatchInfoIfNeed;
- (void)setIsCameraFirst:(BOOL)arg0;
- (void)setNeedDeferChangeOrientation:(BOOL)arg0;
- (void)setHadInitialWindow:(BOOL)arg0;
- (void)initShowViceView:(id)arg0;
- (void)initShowBottomBarView;
- (void)setIsNeedShowVice:(BOOL)arg0;
- (id)barInfoView;
- (void)setCurrentCommentaryRoomInfo:(id)arg0;
- (void)updateMainEvent:(id)arg0;
- (void)trackInfoShowEvent;
- (BOOL)isNeedShowVice;
- (void)showUserProfile;
- (void)trackInfoClickEvent;
- (void)onWindowViewClick;
- (void)onBarInfoClick;
- (BOOL)hadTrackShow;
- (void)setHadTrackShow:(BOOL)arg0;
- (void)setBarInfoView:(id)arg0;
- (void).cxx_destruct;
- (void)messageReceived:(id)arg0;
- (id)placeHolder;
- (void)setPlaceHolder:(id)arg0;

@end
