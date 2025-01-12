//
//     Generated by private class-dump
//

@class NSString, NSArray, ACCCameraSubscription, RACSubject, RACSignal, UIPanGestureRecognizer, IESEffectModel, AWECameraFilterConfiguration;
@protocol ACCBeautyService, ACCCameraService;

@interface ACCFilterServiceImpl : ACCRecorderViewModel <ACCFilterPrivateService> {
    BOOL _hasDeselectionBeenMadeRecently;
    BOOL _panGestureRecognizerEnabled;
    AWECameraFilterConfiguration *_filterConfiguration;
    NSArray *_filterArray;
    UIPanGestureRecognizer *_panGestureRecognizer;
    NSString *_currentFilterSelectSource;
    RACSubject *_showFilterNameSubject;
    RACSubject *_filterViewWillShowSignal;
    RACSubject *_applyFilterSignal;
    id<ACCBeautyService> _beautyService;
    id<ACCCameraService> _cameraService;
    ACCCameraSubscription *_subscription;
}

@property (retain, nonatomic) RACSubject *showFilterNameSubject;
@property (retain, nonatomic) RACSubject *filterViewWillShowSignal;
@property (retain, nonatomic) RACSubject *applyFilterSignal;
@property (retain, nonatomic) id<ACCBeautyService> beautyService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) AWECameraFilterConfiguration *filterConfiguration;
@property (retain, nonatomic) NSArray *filterArray;
@property (readonly, nonatomic) RACSignal *showFilterNameSignal;
@property (nonatomic) BOOL hasDeselectionBeenMadeRecently;
@property (nonatomic, getter=isPanGestureRecognizerEnabled) BOOL panGestureRecognizerEnabled;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) IESEffectModel *currentFilter;
@property (readonly, nonatomic) BOOL isUsingComposerFilter;
@property (copy, nonatomic) NSString *currentFilterSelectSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFilterArray:(id)arg0;
- (id)filterArray;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)applyFilterForCurrentCameraWithShowFilterName:(BOOL)arg0 sendManualMessage:(BOOL)arg1;
- (void)applyFilter:(id)arg0 withShowFilterName:(BOOL)arg1 sendManualMessage:(BOOL)arg2;
- (void)applyFilterWithFilterID:(id)arg0;
- (void)defaultFilterManagerUpdateEffectFilters;
- (id)showFilterNameSignal;
- (id)filterViewWillShowSignal;
- (id)applyFilterSignal;
- (BOOL)hasDeselectionBeenMadeRecently;
- (void)setHasDeselectionBeenMadeRecently:(BOOL)arg0;
- (BOOL)isPanGestureRecognizerEnabled;
- (void)setPanGestureRecognizerEnabled:(BOOL)arg0;
- (BOOL)isUsingComposerFilter;
- (id)currentFilterSelectSource;
- (void)setCurrentFilterSelectSource:(id)arg0;
- (id)beautyService;
- (void)setBeautyService:(id)arg0;
- (void)applyFilter:(id)arg0 indensity:(float)arg1;
- (void)removeAllFiltersWithChangingCache;
- (BOOL)hasIndensityRatioForColorEffect:(id)arg0;
- (float)filterIndensity:(id)arg0;
- (float)indensityRatioCacheForColorEffect:(id)arg0;
- (void)switchFilterWithFilterOne:(id)arg0 FilterTwo:(id)arg1 direction:(long long)arg2 progress:(double)arg3;
- (id)currentFilterHelper;
- (void)recoverFilterIfNeeded;
- (id)prevFilterOfCurrentFilter;
- (id)nextFilterOfCurrentFilter;
- (void)sendFilterViewWillShowSignal;
- (void)sendApplyFilterSignalWith:(BOOL)arg0;
- (void)refreshCurrentFilterModelWithFilter:(id)arg0;
- (void)setApplyFilterSignal:(id)arg0;
- (id)showFilterNameSubject;
- (void)syncFrontAndRearFilter;
- (void)setShowFilterNameSubject:(id)arg0;
- (void)setFilterViewWillShowSignal:(id)arg0;
- (void)setPanGestureRecognizer:(id)arg0;
- (id)panGestureRecognizer;
- (void).cxx_destruct;
- (void)setCurrentFilter:(id)arg0;
- (void)setSubscription:(id)arg0;
- (void)dealloc;
- (void)addSubscriber:(id)arg0;
- (id)currentFilter;
- (id)subscription;
- (void)removeSubscriber:(id)arg0;
- (id)filterConfiguration;
- (void)setFilterConfiguration:(id)arg0;

@end
