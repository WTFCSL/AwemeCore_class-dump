//
//     Generated by private class-dump
//

@class AWEAwemeModel, UIView, NSArray, AWEImageAlbumImageModel, ACCStickerContainerView, UITapGestureRecognizer, NSString, ACCFeedStickerConfig, NSMutableArray, AWEFeedStickerBubbleHelper, NSDictionary, AWEFeedStickerContainerView;
@protocol AWEVideoInteractiveDelegate, AWEVideoInteractiveDataSource, AWEVideoInteractiveMaskDelegate;

@interface AWEFeedStickerDisplayManager : NSObject <AWEFeedStickerDisplayDelegate, AWEFeedStickerBubbleHelperDelegate, AWEVideoInteractiveProtocol> {
    BOOL interactionDisabled;
    BOOL disableUpdateContainer;
    BOOL showWithVideoPausing;
    BOOL isPureMode;
    BOOL isGlobalStickerContainer;
    BOOL _isMaskControllerContainer;
    BOOL _isMaskControllerInRichContentContainer;
    BOOL _lastStickerCount;
    BOOL _tapPointInside;
    NSString *referString;
    NSDictionary *logExtraDict;
    NSDictionary *trackContext;
    NSDictionary *videoInfoDict;
    UIView *bubbleContainer;
    id<AWEVideoInteractiveMaskDelegate> _maskControllerDelegate;
    id<AWEVideoInteractiveDelegate> _delegate;
    id<AWEVideoInteractiveDataSource> _dataSource;
    AWEAwemeModel *_model;
    AWEImageAlbumImageModel *_itemModel;
    UIView *_outerContainer;
    AWEFeedStickerContainerView *_containerView;
    ACCStickerContainerView *_stickerContainer;
    AWEFeedStickerBubbleHelper *_bubbleHelper;
    NSArray *_handlers;
    UIView *_interactionContainer;
    NSMutableArray *_stickerFrameArray;
    UITapGestureRecognizer *_singleGesture;
    NSString *_dismissAwemeId;
    ACCFeedStickerConfig *_feedStickerConfig;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetContainerRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetPlayerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _searchStickerFrame;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEImageAlbumImageModel *itemModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetContainerRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetPlayerFrame;
@property (nonatomic) BOOL lastStickerCount;
@property (weak, nonatomic) UIView *outerContainer;
@property (retain, nonatomic) AWEFeedStickerContainerView *containerView;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainer;
@property (retain, nonatomic) AWEFeedStickerBubbleHelper *bubbleHelper;
@property (copy, nonatomic) NSArray *handlers;
@property (nonatomic) BOOL tapPointInside;
@property (retain, nonatomic) UIView *interactionContainer;
@property (retain, nonatomic) NSMutableArray *stickerFrameArray;
@property (retain, nonatomic) UITapGestureRecognizer *singleGesture;
@property (retain, nonatomic) NSString *dismissAwemeId;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } searchStickerFrame;
@property (retain, nonatomic) ACCFeedStickerConfig *feedStickerConfig;
@property (nonatomic) BOOL isMaskControllerContainer;
@property (nonatomic) BOOL isMaskControllerInRichContentContainer;
@property (weak, nonatomic) id<AWEVideoInteractiveMaskDelegate> maskControllerDelegate;
@property (weak, nonatomic) id<AWEVideoInteractiveDelegate> delegate;
@property (weak, nonatomic) id<AWEVideoInteractiveDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *container;
@property (nonatomic) BOOL isGlobalStickerContainer;
@property (nonatomic) BOOL isPureMode;
@property (copy, nonatomic) NSDictionary *videoInfoDict;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSDictionary *trackContext;
@property (weak, nonatomic) UIView *bubbleContainer;
@property (nonatomic) BOOL showWithVideoPausing;
@property (nonatomic) BOOL disableUpdateContainer;
@property (nonatomic) BOOL interactionDisabled;

+ (BOOL)hasQuickFlashSticker:(id)arg0;
+ (void)joinQuickFlashWithAwemeModel:(id)arg0 enterFrom:(id)arg1 logExtraDict:(id)arg2;
+ (BOOL)hasContainQuickFlashRedPacketSticker:(id)arg0;
+ (id)getQuickFlashRedPacketCreatorAwemeID:(id)arg0;
+ (id)getQuickFlashRedPacketSyncSticker:(id)arg0;
+ (void)processAlbumImagesData:(id)arg0;
+ (BOOL)hasGlobalStickers:(id)arg0;
+ (BOOL)imageAlbumStickerOptimizeWithAd:(id)arg0;
+ (id)firstMatchQuickFlashSticker:(id)arg0;
+ (id)firstMatchQuickFlashRedPacketSticker:(id)arg0 ignoreType:(BOOL)arg1;
+ (struct CGSize { double x0; double x1; })globalStickerSize:(id)arg0 itemModel:(id)arg1;
+ (BOOL)isImageFormat:(id)arg0;

- (void)dealloc;
- (id)referString;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (void)setPureMode:(BOOL)arg0;
- (id)logExtraDict;
- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (BOOL)stickersDidTap:(struct CGPoint { double x0; double x1; })arg0;
- (id)itemModel;
- (void)setItemModel:(id)arg0;
- (BOOL)isGlobalStickerContainer;
- (void)setIsGlobalStickerContainer:(BOOL)arg0;
- (BOOL)isMaskControllerContainer;
- (void)setIsMaskControllerContainer:(BOOL)arg0;
- (BOOL)isMaskControllerInRichContentContainer;
- (void)setIsMaskControllerInRichContentContainer:(BOOL)arg0;
- (BOOL)isPureMode;
- (void)setIsPureMode:(BOOL)arg0;
- (id)maskControllerDelegate;
- (void)setMaskControllerDelegate:(id)arg0;
- (id)videoInfoDict;
- (void)setVideoInfoDict:(id)arg0;
- (BOOL)showWithVideoPausing;
- (void)setShowWithVideoPausing:(BOOL)arg0;
- (BOOL)disableUpdateContainer;
- (void)setDisableUpdateContainer:(BOOL)arg0;
- (void)configWithStickerConfig:(id)arg0;
- (void)configWithAwemeModel:(id)arg0;
- (void)configWithAwemeModel:(id)arg0 withIndex:(long long)arg1;
- (void)trackShowIfNeeded;
- (BOOL)stickersDidLongPress:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)tryToHandleTapVideoShareStickerInPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)updateModernInteractiveContainer:(id)arg0;
- (void)videoDelegateDidChanged;
- (void)handleEventWithParams:(id)arg0;
- (long long)numOfStickers;
- (BOOL)isShowingStickers;
- (BOOL)isShowingStickersViewController;
- (void)updateStickerState;
- (BOOL)isStickersAreaTapped;
- (void)playerIsPaused;
- (void)playerIsResumed;
- (void)dismissStickers;
- (double)currentPlayerTime;
- (BOOL)isOverlap;
- (id)dismissAwemeId;
- (void)setDismissAwemeId:(id)arg0;
- (void)videoPlay;
- (void)videoPause;
- (id)interactionContainer;
- (void)setInteractionContainer:(id)arg0;
- (id)stickerContainer;
- (void)setStickerContainer:(id)arg0;
- (void)removeAllStickers;
- (void)setTargetPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)targetHandlerForTapAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetPlayerFrame;
- (void)createSearchHandlers;
- (void)setStickerFrameArray:(id)arg0;
- (void)setSearchStickerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustStickerFrame:(id)arg0;
- (id)stickerFrameArray;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchStickerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tryAdjustStickerPauseFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)feedStickerConfig;
- (id)bubbleHelper;
- (void)setBubbleHelper:(id)arg0;
- (void)setFeedStickerConfig:(id)arg0;
- (void)pageJumped;
- (void)bubbleStatusChanged:(BOOL)arg0;
- (void)trackBusinessShow;
- (void)setupDisplayManager:(id)arg0;
- (void)setSingleGesture:(id)arg0;
- (void)doubleClicked:(id)arg0;
- (void)setTargetContainerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setOuterContainer:(id)arg0;
- (void)setTapPointInside:(BOOL)arg0;
- (BOOL)isTapInCenter:(id)arg0;
- (id)interactionLeftContainerView;
- (id)interactionRightContainerView;
- (id)interactionBottomContainerView;
- (BOOL)isFastCommentElementAppear;
- (BOOL)p_configStickerEnabled:(id)arg0;
- (void)configHandlers;
- (void)displayStickers;
- (BOOL)tapPointInside;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetContainerRect;
- (BOOL)p_enableGlobalStickers:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_videoFrameIn:(id)arg0 videoSize:(struct CGSize { double x0; double x1; })arg1 scaleType:(long long)arg2;
- (void)showPlayerFrame;
- (id)singleGesture;
- (id)interactionContainerView;
- (BOOL)lastStickerCount;
- (void)setLastStickerCount:(BOOL)arg0;
- (id)outerContainer;
- (void)prepareForDisplay;
- (id)container;
- (void)setHandlers:(id)arg0;
- (void)setModel:(id)arg0;
- (id)handlers;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)dismiss;
- (void).cxx_destruct;
- (id)model;
- (void)longPress:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)delegate;
- (id)containerView;
- (void)setInteractionDisabled:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (id)initWithContainer:(id)arg0;
- (void)reset;
- (void)viewWillAppear;
- (BOOL)blockAction;
- (BOOL)isVideoPlaying;
- (BOOL)interactionDisabled;
- (id)bubbleContainer;
- (void)setBubbleContainer:(id)arg0;
- (void)tapAction:(id)arg0;
- (void)viewWillDisappear;

@end
