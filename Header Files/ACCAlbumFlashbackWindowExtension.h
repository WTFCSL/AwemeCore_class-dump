//
//     Generated by private class-dump
//

@class AWEAlbumFlashbackWindowConfigModel, CAKAlbumViewController, ACCAlbumFlashbackWindowView, ACCAlbumInputData;
@protocol AWEStudioMemoriesService, AWEInTodayAlbumModelProtocol;

@interface ACCAlbumFlashbackWindowExtension : ACCAlbumExtension {
    BOOL _firstLoad;
    BOOL _isRejected;
    BOOL _scanComplete;
    BOOL _hasShownFloatView;
    BOOL _isCheckingAlbumValid;
    BOOL _hasFinishFirstRender;
    BOOL _hasTrcaker;
    CAKAlbumViewController *_albumController;
    ACCAlbumInputData *_inputData;
    ACCAlbumFlashbackWindowView *_floatWindowView;
    AWEAlbumFlashbackWindowConfigModel *_configModel;
    id<AWEStudioMemoriesService> _memories;
    id<AWEInTodayAlbumModelProtocol> _localAlbum;
    double _startScanTime;
    long long _notShowReason;
}

@property (weak, nonatomic) CAKAlbumViewController *albumController;
@property (weak, nonatomic) ACCAlbumInputData *inputData;
@property (retain, nonatomic) ACCAlbumFlashbackWindowView *floatWindowView;
@property (retain, nonatomic) AWEAlbumFlashbackWindowConfigModel *configModel;
@property (retain, nonatomic) id<AWEStudioMemoriesService> memories;
@property (retain, nonatomic) id<AWEInTodayAlbumModelProtocol> localAlbum;
@property (nonatomic) BOOL firstLoad;
@property (nonatomic) BOOL isRejected;
@property (nonatomic) BOOL scanComplete;
@property (nonatomic) BOOL hasShownFloatView;
@property (nonatomic) double startScanTime;
@property (nonatomic) BOOL isCheckingAlbumValid;
@property (nonatomic) BOOL hasFinishFirstRender;
@property (nonatomic) BOOL hasTrcaker;
@property (nonatomic) long long notShowReason;

+ (id)getCurrentUserKeyWithKey:(id)arg0;

- (void)setConfigModel:(id)arg0;
- (id)configModel;
- (long long)notShowReason;
- (void)setNotShowReason:(long long)arg0;
- (void)albumDidShowViewController:(id)arg0;
- (void)albumScrollViewDidEndDecelerating:(id)arg0 albumListVC:(id)arg1 scrollView:(id)arg2;
- (BOOL)albumExtensionShouldBeLoaded:(id)arg0;
- (void)albumDidDeselectAsset:(id)arg0;
- (void)albumDidSelectAssetes:(id)arg0 targetAsset:(id)arg1;
- (void)albumDidLoadExtension:(id)arg0 albumViewController:(id)arg1;
- (void)albumDidFinishFirstRender:(id)arg0;
- (void)albumDidHiddenViewController:(id)arg0;
- (void)albumScrollViewDidScroll:(id)arg0 albumListVC:(id)arg1 scrollView:(id)arg2;
- (void)albumDidSelectTabListViewController:(id)arg0 index:(long long)arg1;
- (void)getFrequencyControlModel;
- (BOOL)isEnabledWithShootWay:(unsigned long long)arg0;
- (void)setAlbumController:(id)arg0;
- (void)setScanComplete:(BOOL)arg0;
- (void)setHasShownFloatView:(BOOL)arg0;
- (void)cancelAuthorizationAction:(id)arg0;
- (BOOL)shouldShowAuthorizationWindowByFrequencyControl;
- (void)setHasFinishFirstRender:(BOOL)arg0;
- (void)setLocalAlbum:(id)arg0;
- (id)localAlbum;
- (void)trackAlbumMemoryWithParams:(id)arg0;
- (void)aggregatePhotoLibrary;
- (BOOL)shouldShowInTodayFloatWindow;
- (void)addFloatWindowToAlbum;
- (void)showFloatWindowIfNeeded;
- (void)showFloatWindow:(BOOL)arg0;
- (id)albumController;
- (BOOL)hasFinishFirstRender;
- (BOOL)shouldShowWithAlbumCondition;
- (id)floatWindowView;
- (BOOL)hasShownFloatView;
- (BOOL)isCheckingAlbumValid;
- (void)showFloatWindowWithCheckBottom:(BOOL)arg0;
- (void)showFloatWindowWithAsset:(id)arg0;
- (void)setIsCheckingAlbumValid:(BOOL)arg0;
- (BOOL)shouldShowFloatWindowByFrequencyControl;
- (void)setFloatWindowView:(id)arg0;
- (void)getFlashBackInfo;
- (id)enableShootWayMap;
- (BOOL)hasTrcaker;
- (void)setHasTrcaker:(BOOL)arg0;
- (BOOL)scanComplete;
- (double)startScanTime;
- (void)setStartScanTime:(double)arg0;
- (void).cxx_destruct;
- (void)setMemories:(id)arg0;
- (void)dealloc;
- (id)memories;
- (BOOL)isRejected;
- (id)inputData;
- (void)setFirstLoad:(BOOL)arg0;
- (BOOL)firstLoad;
- (void)setInputData:(id)arg0;
- (void)setIsRejected:(BOOL)arg0;

@end
