//
//     Generated by private class-dump
//

@class IESECListKitMediaAutoPlayManager, NSString, IESECListKitListUpdater, IESECListKitItemDataModel, IESECMallNativeCardActionHandler, UICollectionViewCell;

@interface IESECMallLiveCardCellController : NSObject <AWELiveRoomMessage, AWEECMediaWrapperLiveTransitionOutterContextProvider, IESECListKitCellControllerProtocol> {
    BOOL _isFirstShow;
    BOOL _isLiveCardPlaying;
    BOOL _disableDequeuePlayerBySwipe;
    BOOL _optimizeContinuePlay;
    IESECListKitListUpdater *_listUpdater;
    UICollectionViewCell *_cell;
    long long _section;
    id _cellModel;
    long long _index;
    IESECListKitItemDataModel *_bffItemData;
    IESECMallNativeCardActionHandler *_actionHandler;
    IESECListKitMediaAutoPlayManager *_autoPlayManager;
    double _autoPlayDuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECMallNativeCardActionHandler *actionHandler;
@property (weak, nonatomic) IESECListKitMediaAutoPlayManager *autoPlayManager;
@property (nonatomic) double autoPlayDuration;
@property (nonatomic) BOOL optimizeContinuePlay;
@property (nonatomic) BOOL isLiveCardPlaying;
@property (nonatomic) BOOL disableDequeuePlayerBySwipe;
@property (retain, nonatomic) IESECListKitListUpdater *listUpdater;
@property (weak, nonatomic) UICollectionViewCell *cell;
@property (retain, nonatomic) id cellModel;
@property (retain, nonatomic) IESECListKitItemDataModel *bffItemData;
@property (nonatomic) long long section;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isFirstShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellModelClass;
+ (Class)cellClass;

- (id)zoomTransitionStartViewForOffset:(long long)arg0;
- (void)audienceQuitAllRoomWithSlideVC:(id)arg0 player:(id)arg1 context:(id)arg2;
- (void)setCellModel:(id)arg0;
- (void)setIsFirstShow:(BOOL)arg0;
- (BOOL)isFirstShow;
- (void)registerMessage;
- (void)unregisterMessage;
- (void)enqueuePlayer;
- (void)dequeuePlayer;
- (BOOL)isLiveCardPlaying;
- (BOOL)disableDequeuePlayerBySwipe;
- (void)dequeuePlayerWithRoomID:(id)arg0;
- (void)setIsDequeueLivePlayer:(BOOL)arg0;
- (id)livePlayerFocusView;
- (void)transitionTransferToURLString:(id)arg0;
- (void)stopLive;
- (id)autoPlayManager;
- (void)setAutoPlayManager:(id)arg0;
- (void)configCell;
- (id)listUpdater;
- (void)setListUpdater:(id)arg0;
- (id)bffItemData;
- (void)setBffItemData:(id)arg0;
- (double)heightForModel:(id)arg0 itemWidth:(double)arg1 bffItemData:(id)arg2;
- (void)willDisplayWithSource:(unsigned long long)arg0 extraParams:(id)arg1;
- (void)didEndDisplayWithSource:(unsigned long long)arg0 extraParams:(id)arg1;
- (void)mediaPlayerPlayWithAutoPlayDuration:(double)arg0 autoPlayManager:(id)arg1 completeBlock:(id /* block */)arg2;
- (void)mediaPlayerPause;
- (double)calculateContentHeight:(double)arg0 scale:(double)arg1;
- (void)setOptimizeContinuePlay:(BOOL)arg0;
- (void)setDisableDequeuePlayerBySwipe:(BOOL)arg0;
- (void)updateActionHandler;
- (BOOL)getGlobalGreyMode;
- (BOOL)getGlobalRevetColorful;
- (void)reportFeedbackClickBtm:(id)arg0 feedback:(id)arg1;
- (void)reportFeedbackAdTrackWithFeedback:(id)arg0;
- (void)reportFeedbackShowBtm:(id)arg0;
- (void)reportFeedbackCloseBtm:(id)arg0 closeType:(long long)arg1;
- (void)reportPlayerPlayResult:(id)arg0 model:(id)arg1;
- (void)setIsLiveCardPlaying:(BOOL)arg0;
- (BOOL)optimizeContinuePlay;
- (void)trackAdStart;
- (void)trackWithAdInfoKey:(id)arg0;
- (void)performSelectorName:(id)arg0;
- (void)setIndex:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)actionHandler;
- (void)setActionHandler:(id)arg0;
- (void)setSection:(long long)arg0;
- (long long)index;
- (long long)section;
- (id)cell;
- (void)setCell:(id)arg0;
- (id)cellModel;
- (double)autoPlayDuration;
- (void)setAutoPlayDuration:(double)arg0;

@end
