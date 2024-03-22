//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLivePKService;

@interface IESLiveStreamPlayerLayoutDoubleInteraction : IESLiveStreamPlayerLayoutBase <IESLiveAutoRotateAction, IESLiveSEIListener> {
    BOOL _isInPK;
    BOOL _enableSwitchJudgeOpt;
    BOOL _hasGuest;
    double _currentPKStreamRatio;
    double _doubleInterationDistance;
    id<IESLivePKService> _pkService;
    NSString *_pkBackgroundColor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _pkRatioFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _pkCropSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropRatioFrame;
}

@property (retain, nonatomic) id<IESLivePKService> pkService;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRatioFrame;
@property (nonatomic) BOOL enableSwitchJudgeOpt;
@property (nonatomic) BOOL hasGuest;
@property (nonatomic) double currentPKStreamRatio;
@property (copy, nonatomic) NSString *pkBackgroundColor;
@property (nonatomic) double doubleInterationDistance;
@property (nonatomic) BOOL isInPK;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pkRatioFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pkCropSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (double)doubleInterationDistance;
- (void)setDoubleInterationDistance:(double)arg0;
- (id)pkService;
- (void)setPkService:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pkCropSize;
- (BOOL)layoutWithMetaInfo:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })losePrecisionRectWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)checkPKPlayerPropState;
- (void)setPkBackgroundColor:(id)arg0;
- (double)caculateStreamRatioHeightWithRatio:(double)arg0;
- (void)setCurrentPKStreamRatio:(double)arg0;
- (void)setPkCropSize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ratioFrameForIpadWithHeight:(double)arg0 width:(double)arg1 shortTouchHeight:(double)arg2 isLandscape:(BOOL)arg3;
- (double)currentPKStreamRatio;
- (void)setPkRatioFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pkRatioFrame;
- (id)pkBackgroundColor;
- (void)animationForAutoRotateToOrientation:(long long)arg0 duration:(double)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)arg0;
- (unsigned long long)seiDispatchPriority;
- (unsigned long long)typeToCheckIfLaterThanWhenReuseSEI;
- (BOOL)shouldReceiveImmidiatelySEI;
- (BOOL)hasGuest;
- (void)setHasGuest:(BOOL)arg0;
- (BOOL)shouldUseCurrentLayoutType;
- (void)layoutWithPreviousType:(unsigned long long)arg0;
- (BOOL)isInPK;
- (void)setEnableSwitchJudgeOpt:(BOOL)arg0;
- (BOOL)isPreStreamPlayer;
- (BOOL)unifyPlayerLayout;
- (BOOL)enableSwitchJudgeOpt;
- (BOOL)isValidPKReact:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)updatePKRatioFrameForIPad:(BOOL)arg0 toSize:(struct CGSize { double x0; double x1; })arg1;
- (void)setIsInPK:(BOOL)arg0;
- (void)resetPKPlayerParam;
- (long long)checkedRoomScene:(long long)arg0 withSource:(id)arg1;
- (void)setCropRatioFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)updatePlayerBackgroundColor:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRatioFrame;
- (void)handleDoubleInterationLayoutWithLinkSEI:(id)arg0 source:(id)arg1 pkRatioFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 distance:(id)arg3 background:(id)arg4;
- (BOOL)useLayoutMachine;
- (struct CGPoint { double x0; double x1; })palyerOffsetWithPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 videoSize:(struct CGSize { double x0; double x1; })arg1;
- (BOOL)shouldChangePKLayoutWithDistance:(double)arg0 pkRatioFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (unsigned long long)currentLayout;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrame;
- (void)prepareForReuse;

@end
