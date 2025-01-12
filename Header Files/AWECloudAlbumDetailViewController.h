//
//     Generated by private class-dump
//

@class NSString, AWECloudAlbumDetailTimeTracker, IESContainer;
@protocol AWECloudAlbumDetailComponentManager, AWECloudAlbumDetailInputDataProtocol, ACCZoomContextOutterProviderProtocol;

@interface AWECloudAlbumDetailViewController : UIViewController <AWEZoomTransitionOuterContextProvider, AWECloudAlbumDetailControllerProtocol, AWECloudAlbumDetailViewControllerTransitionDelegate> {
    BOOL _visible;
    id<ACCZoomContextOutterProviderProtocol> _cloudAlbumTransitionDelegate;
    id<AWECloudAlbumDetailInputDataProtocol> _inputData;
    IESContainer *_context;
    id<AWECloudAlbumDetailComponentManager> _componentManager;
    AWECloudAlbumDetailTimeTracker *_timeTracker;
}

@property (retain, nonatomic) IESContainer *context;
@property (retain, nonatomic) id<AWECloudAlbumDetailComponentManager> componentManager;
@property (nonatomic) BOOL visible;
@property (retain, nonatomic) AWECloudAlbumDetailTimeTracker *timeTracker;
@property (readonly, nonatomic) id<AWECloudAlbumDetailInputDataProtocol> inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCZoomContextOutterProviderProtocol> cloudAlbumTransitionDelegate;

- (id)zoomTransitionStartViewForOffset:(long long)arg0;
- (void)setComponentManager:(id)arg0;
- (id)initWithInputData:(id)arg0;
- (id)cloudAlbumTransitionDelegate;
- (void)setCloudAlbumTransitionDelegate:(id)arg0;
- (BOOL)visible;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)setContext:(id)arg0;
- (void)close;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)controller;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)context;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setVisible:(BOOL)arg0;
- (id)inputData;
- (id)timeTracker;
- (void)setTimeTracker:(id)arg0;
- (id)componentManager;

@end
