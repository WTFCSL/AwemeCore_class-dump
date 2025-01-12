//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface ACCRecordViewController : ACCViewController <ACCCameraLifeCircleEvent> {
    NSNumber *_enableOptimizeValue;
}

@property (retain, nonatomic) NSNumber *enableOptimizeValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableFirstRenderOptimize;
- (void)onCameraDidStartRender:(id)arg0;
- (id)initWithBusinessConfiguration:(id)arg0;
- (void)prepareForLoadComponent;
- (id)enableOptimizeValue;
- (void)setEnableOptimizeValue:(id)arg0;
- (id)creatComponentManager;
- (void)beforeLoadLazyComponent;
- (void)prepareForStatusBarOrientationDidChange;
- (void)registerByteBenchFeature;
- (BOOL)enableOptimizeArchPerformance;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;

@end
