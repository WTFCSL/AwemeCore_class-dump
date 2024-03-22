//
//     Generated by private class-dump
//

@class UILabel, NSMutableDictionary;
@protocol IESLiveInteractionStreamPlayerService;

@interface IESLiveStreamPlayerLayoutBigParty : IESLiveStreamPlayerLayoutBase {
    BOOL _isInBigPartyWhileOuterServiceNotReady;
    unsigned long long _streamStyleFromSEI;
    long long _version;
    NSMutableDictionary *_version2FrameMap;
    UILabel *_tipLabel;
    id<IESLiveInteractionStreamPlayerService> _playerService;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _customFrame;
}

@property (nonatomic) unsigned long long streamStyleFromSEI;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSMutableDictionary *version2FrameMap;
@property (weak, nonatomic) UILabel *tipLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } customFrame;
@property (weak, nonatomic) id<IESLiveInteractionStreamPlayerService> playerService;
@property (nonatomic) BOOL isInBigPartyWhileOuterServiceNotReady;

- (void)didSetAttachingDIContext;
- (id)playerService;
- (void)setPlayerService:(id)arg0;
- (BOOL)layoutWithMetaInfo:(id)arg0;
- (void)setCustomFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)showDebugInfoIfNeed;
- (double)audiencePlayerOriginYOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })customFrame;
- (double)calculateTopSpacing;
- (double)bottomYPosition;
- (double)mixWidthHeightRatio;
- (BOOL)shouldUseCurrentLayoutType;
- (void)layoutWithPreviousType:(unsigned long long)arg0;
- (void)setIsInBigPartyWhileOuterServiceNotReady:(BOOL)arg0;
- (unsigned long long)streamStyleFromSEI;
- (id)rawPlayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preComponentPlayerFrameWithOriginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isInBigPartyWhileOuterServiceNotReady;
- (void)removeDebugInfoIfNeeded;
- (BOOL)isCurrentDevicePortrait;
- (void)setStreamStyleFromSEI:(unsigned long long)arg0;
- (id)version2FrameMap;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateNonOverlappingFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateEqualFrameWithOriginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)anchorHeightRatio;
- (double)streamAspectRatio;
- (double)audienceLocalMediaHeight;
- (double)bigPartyEqualTopRatio;
- (void)setVersion2FrameMap:(id)arg0;
- (void)setVersion:(long long)arg0;
- (void).cxx_destruct;
- (void)commonInit;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrame;
- (long long)version;
- (BOOL)isLandscape;
- (void)dealloc;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;

@end
