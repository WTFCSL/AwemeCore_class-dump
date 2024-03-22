//
//     Generated by private class-dump
//

@class NSArray, BDSCProgressInfo, AWEAwemeModel, NSString;
@protocol AWEScreenCastProcessor, AWEScreenCastControlViewInteractiveDelegate, AWEScreenCastVideoDelegate;

@interface AWEScreenCastAwemeImpl : NSObject <AWEScreenCastObserver, AWEScreenCastProcessorDelegate, BDByteScreenCastTrackerService> {
    BOOL _currentVideoNeedShowToast;
    BOOL _isConnectError;
    BOOL _isFetchPlayListing;
    BOOL _isAutoCast;
    id<AWEScreenCastControlViewInteractiveDelegate> _interactiveDelegate;
    id<AWEScreenCastVideoDelegate> _videoDelegate;
    NSString *_sceneID;
    AWEAwemeModel *_awemeModel;
    AWEAwemeModel *_lastAwemeModel;
    BDSCProgressInfo *_progressInfo;
    id<AWEScreenCastProcessor> _processor;
    id /* block */ _castOperationCompleted;
    NSArray *_videoList;
    unsigned long long _currentCastIndex;
    NSString *_lastVideoID;
    NSString *_currentFetchID;
    long long _autoPlayNoActionCount;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEAwemeModel *lastAwemeModel;
@property (retain, nonatomic) BDSCProgressInfo *progressInfo;
@property (retain, nonatomic) id<AWEScreenCastProcessor> processor;
@property (copy, nonatomic) id /* block */ castOperationCompleted;
@property (copy, nonatomic) NSArray *videoList;
@property (nonatomic) BOOL currentVideoNeedShowToast;
@property (nonatomic) unsigned long long currentCastIndex;
@property (copy, nonatomic) NSString *lastVideoID;
@property (copy, nonatomic) NSString *currentFetchID;
@property (nonatomic) BOOL isConnectError;
@property (nonatomic) BOOL isFetchPlayListing;
@property (nonatomic) long long autoPlayNoActionCount;
@property (nonatomic) BOOL isAutoCast;
@property (weak, nonatomic) id<AWEScreenCastControlViewInteractiveDelegate> interactiveDelegate;
@property (weak, nonatomic) id<AWEScreenCastVideoDelegate> videoDelegate;
@property (copy, nonatomic) NSString *sceneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (void)setVideoList:(id)arg0;
- (id)videoList;
- (id)curSceneString;
- (BOOL)needEnterCastPageForModel:(id)arg0;
- (void)updateCastPlayVideoList:(id)arg0;
- (void)appendCastPlayVideoList:(id)arg0;
- (BOOL)canContinuePlay;
- (void)trackControlPageReturnClickedWithExtraParams:(id)arg0;
- (void)setAutoPlayNoActionCount:(long long)arg0;
- (long long)autoPlayNoActionCount;
- (id)lastAwemeModel;
- (void)setLastAwemeModel:(id)arg0;
- (void)setInteractiveDelegate:(id)arg0;
- (void)castShouldCloseBySecondConfirm;
- (void)castSearchViewDidDisAppear;
- (void)castPlayProgressInfoChanged:(id)arg0;
- (void)castPlayStatusChanged:(unsigned long long)arg0;
- (void)startConnectToCastService;
- (void)connectToDevice:(id)arg0 onError:(id)arg1;
- (void)didConnectToDevice:(id)arg0;
- (void)castPlayDidClosed;
- (void)castControlViewAttemptToChangeToLandscape:(BOOL)arg0;
- (void)castExtraParams:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)castPlayVideoDidChange:(id)arg0 isAuto:(BOOL)arg1;
- (void)castContinuePlayButtonClicked;
- (id)currentFetchID;
- (void)updateProcessorIfNeeded;
- (void)setCastOperationCompleted:(id /* block */)arg0;
- (void)setLastVideoID:(id)arg0;
- (BOOL)needEnterSearchProcess;
- (BOOL)isConnectError;
- (void)fetchPlayItem:(BOOL)arg0;
- (void)fetchPlayItem:(BOOL)arg0 source:(unsigned long long)arg1;
- (void)setCurrentFetchID:(id)arg0;
- (void)setCurrentVideoNeedShowToast:(BOOL)arg0;
- (id /* block */)castOperationCompleted;
- (void)updateCurrentCastIndex;
- (void)sendPlayListToTVIfNeededWith:(unsigned long long)arg0;
- (id)lastVideoID;
- (unsigned long long)currentCastIndex;
- (id)getNextVideoModel;
- (void)tryCastWithVideo:(id)arg0 source:(unsigned long long)arg1;
- (id)interactiveDelegate;
- (void)trackTryFetchNextVideo:(id)arg0 remainCount:(long long)arg1;
- (BOOL)currentVideoNeedShowToast;
- (void)setCurrentCastIndex:(unsigned long long)arg0;
- (void)trackAutoSlideEvent;
- (void)setIsAutoCast:(BOOL)arg0;
- (void)setIsConnectError:(BOOL)arg0;
- (void)tryCastNext;
- (void)showTVToastIfNeed;
- (BOOL)isAutoCast;
- (BOOL)isFetchPlayListing;
- (void)setIsFetchPlayListing:(BOOL)arg0;
- (id)startProgressInfo;
- (id)startResolution;
- (void)sendVideoPlayEventWithParams:(id)arg0;
- (void)sendVideoOverEventWithCompleted:(BOOL)arg0 params:(id)arg1;
- (void)sendVideoPlayBrokenEventWithParams:(id)arg0;
- (void)startScreenCastWithVideoModel:(id)arg0 progressInfo:(id)arg1 completed:(id /* block */)arg2;
- (void)removeCastObserver;
- (void)setSceneID:(id)arg0;
- (void).cxx_destruct;
- (id)initWithSceneID:(id)arg0;
- (id)sceneID;
- (id)processor;
- (id)progressInfo;
- (void)setProgressInfo:(id)arg0;
- (void)setProcessor:(id)arg0;
- (void)setVideoDelegate:(id)arg0;
- (id)videoDelegate;

@end
