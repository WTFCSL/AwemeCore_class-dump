//
//     Generated by private class-dump
//

@class UIViewController, NSString, ACCTrimCropInputData, IESContainer, UIView, ACCTrimCropComponentManager, ACCTrimCropEditorToolView;

@interface ACCTrimCropEditorSubViewController : UIViewController <ACCTrimCropEditorController> {
    UIView *_operationContainerView;
    UIView *_playControlContainerView;
    UIView *_previewContainerView;
    ACCTrimCropEditorToolView *_toolView;
    UIView *_previewBGContainerView;
    ACCTrimCropInputData *_inputData;
    IESContainer *_context;
    ACCTrimCropComponentManager *_componentManager;
    UIView *_mediaContainerView;
}

@property (retain, nonatomic) UIView *previewBGContainerView;
@property (retain, nonatomic) ACCTrimCropInputData *inputData;
@property (retain, nonatomic) IESContainer *context;
@property (retain, nonatomic) ACCTrimCropComponentManager *componentManager;
@property (retain, nonatomic) ACCTrimCropEditorToolView *toolView;
@property (retain, nonatomic) UIView *mediaContainerView;
@property (readonly, nonatomic) UIViewController *rootViewController;
@property (readonly, nonatomic) UIView *previewContainerView;
@property (readonly, nonatomic) UIView *playControlContainerView;
@property (readonly, nonatomic) UIView *operationContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setComponentManager:(id)arg0;
- (id)previewContainerView;
- (id)mediaContainerView;
- (void)setMediaContainerView:(id)arg0;
- (void)setupContainerView;
- (id)previewBGContainerView;
- (id)operationContainerView;
- (id)playControlContainerView;
- (void)hiddenToolBar;
- (void)showToolBar;
- (void)addToolBarWithItem:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })updatePreviewContainerViewFrameWithAspectRatio:(double)arg0;
- (double)mediaContainerViewHeight;
- (double)previewBGContainerViewY;
- (double)previewBGContainerViewHeight;
- (void)configPageServiceContainer:(id)arg0;
- (void)setPreviewBGContainerView:(id)arg0;
- (id)rootViewController;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)initWithBuilder:(id /* block */)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)context;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)inputData;
- (void)setInputData:(id)arg0;
- (void)willTransitionIn;
- (id)toolView;
- (void)setToolView:(id)arg0;
- (id)componentManager;

@end
