//
//     Generated by private class-dump
//

@class AWEPlayInteractionBulletElementViewModel, AWEPlayInteractionViewController, NSMutableIndexSet, NSString, UIView, NSMutableArray, UITapGestureRecognizer;
@protocol AWEBarrageContainerViewProtocol;

@interface AWEPlayInteractionBulletElement : AWEPlayInteractionLeftElement <UIGestureRecognizerDelegate> {
    BOOL _hasHotSpotTagShowTrackPost;
    NSString *_referString;
    NSString *_enterFrom;
    UIView<AWEBarrageContainerViewProtocol> *_barrageContainerView;
    NSMutableArray *_barrageFrames;
    UITapGestureRecognizer *_tapGesture;
    AWEPlayInteractionBulletElementViewModel *_viewModel;
    AWEPlayInteractionViewController *_interactionViewController;
    NSMutableArray *_insertedBarrage;
    NSMutableIndexSet *_deletedIndexes;
}

@property (retain, nonatomic) UIView<AWEBarrageContainerViewProtocol> *barrageContainerView;
@property (retain, nonatomic) NSMutableArray *barrageFrames;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) AWEPlayInteractionBulletElementViewModel *viewModel;
@property (retain, nonatomic) AWEPlayInteractionViewController *interactionViewController;
@property (retain, nonatomic) NSMutableArray *insertedBarrage;
@property (retain, nonatomic) NSMutableIndexSet *deletedIndexes;
@property (nonatomic) BOOL hasHotSpotTagShowTrackPost;
@property (retain, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setInteractionViewController:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)enterFrom;
- (void)setHide:(BOOL)arg0;
- (void)initializeElement;
- (BOOL)shouldResponseTapEventOnLocation:(struct CGPoint { double x0; double x1; })arg0;
- (id)aAWEPadModuleAdapter;
- (void)videoDidActivity;
- (void)addGesture;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)viewController_viewDidAppear;
- (void)layoutElementView;
- (void)viewController_viewWillDisappear;
- (void)removeBarrageAtIndexSet:(id)arg0;
- (void)barragePlay;
- (void)barragePause;
- (BOOL)hasHotSpotTagShowTrackPost;
- (void)setHasHotSpotTagShowTrackPost:(BOOL)arg0;
- (void)p_trackForHotSpotTagIfNeeded:(id)arg0;
- (id)barrageContainerView;
- (BOOL)shouldShowLandscapeEntry;
- (id)insertedBarrage;
- (void)insertBarrageModel:(id)arg0;
- (void)p_trackPOIEventsIfNeeded;
- (void)p_trackGeneralEventsIfNeeded;
- (void)updateBarrageFrames;
- (id)barrageFrames;
- (void)handleBarragePause:(id)arg0;
- (void)handleBarragePlay:(id)arg0;
- (void)addCommentWithNotification:(id)arg0;
- (void)deleteCommentWithNotification:(id)arg0;
- (void)diggWithNotification:(id)arg0;
- (void)reloadDataWithNotification:(id)arg0;
- (void)updateAndReloadViewerBarrage;
- (void)onBarrageClicked:(id)arg0;
- (void)updateBarrageFramesWithUserAgreeViewerRecordInGuideView:(BOOL)arg0;
- (BOOL)p_shouldShowViewerBarrageWithUserAgreeViewerRecord:(BOOL)arg0;
- (void)p_clearExistedBarrageFrames;
- (id)frameWithModel:(id)arg0;
- (id)awemeCreateTimeWithBarrageType:(long long)arg0;
- (void)setBarrageContainerView:(id)arg0;
- (void)setBarrageFrames:(id)arg0;
- (void)setInsertedBarrage:(id)arg0;
- (void).cxx_destruct;
- (void)reloadData;
- (void)setViewModel:(id)arg0;
- (id)tapGesture;
- (id)viewModel;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;
- (id)deletedIndexes;
- (void)setDeletedIndexes:(id)arg0;
- (void)setTapGesture:(id)arg0;
- (void)addObservers;
- (id)interactionViewController;

@end
