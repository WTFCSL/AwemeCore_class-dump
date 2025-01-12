//
//     Generated by private class-dump
//

@class ACCSecondaryPageRestoreService, ACCSecondaryPageLayoutManager, ACCSecondaryPageInputData, ACCSecondaryPageComponentManager, IESContainer, ACCSecondaryPageService, NSString;

@interface ACCSecondaryPageViewController : UIViewController <ACCSecondaryPageViewController, AWEMediaSmallAnimationProtocol> {
    IESContainer *_context;
    ACCSecondaryPageInputData *_inputData;
    ACCSecondaryPageComponentManager *_componentManager;
    ACCSecondaryPageLayoutManager *_layoutManager;
    ACCSecondaryPageService *_secondaryPageService;
    ACCSecondaryPageRestoreService *_restoreService;
}

@property (retain, nonatomic) IESContainer *context;
@property (retain, nonatomic) ACCSecondaryPageInputData *inputData;
@property (retain, nonatomic) ACCSecondaryPageComponentManager *componentManager;
@property (retain, nonatomic) ACCSecondaryPageLayoutManager *layoutManager;
@property (retain, nonatomic) ACCSecondaryPageService *secondaryPageService;
@property (retain, nonatomic) ACCSecondaryPageRestoreService *restoreService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithInputData:(id)arg0;

- (void)setComponentManager:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaBigMediaFrame;
- (id)mediaSmallMediaContainer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaSmallMediaContainerFrame;
- (id)mediaSmallBottomView;
- (void)configPageServiceContainer:(id)arg0;
- (id)secondaryPageService;
- (void)setSecondaryPageService:(id)arg0;
- (id)restoreService;
- (void)setRestoreService:(id)arg0;
- (id)initWithSecondaryPageInputData:(id)arg0;
- (id)layoutManager;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (long long)preferredStatusBarStyle;
- (id)context;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setLayoutManager:(id)arg0;
- (id)inputData;
- (void)setInputData:(id)arg0;
- (id)componentManager;

@end
