//
//     Generated by private class-dump
//

@class NSString, UIViewController;
@protocol AWELiveCamera, IESLiveOpenLiveProtocol;

@interface AWELiveEntranceViewControllerContainer : UIViewController <AWELiveEntranceViewControllerProtocol> {
    BOOL enableBack;
    id /* block */ backHandler;
    id<AWELiveCamera> camera;
    id /* block */ dismissHandler;
    id /* block */ buildCameraAfterPassAuthBlock;
    UIViewController<IESLiveOpenLiveProtocol> *_childVC;
}

@property (retain, nonatomic) UIViewController<IESLiveOpenLiveProtocol> *childVC;
@property (nonatomic) BOOL enableBack;
@property (copy, nonatomic) id /* block */ backHandler;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) id /* block */ buildCameraAfterPassAuthBlock;
@property (retain, nonatomic) id<AWELiveCamera> camera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setShootWay:(id)arg0;
- (id)childVC;
- (void)setChildVC:(id)arg0;
- (void)setEnableBack:(BOOL)arg0;
- (void)setBackHandler:(id /* block */)arg0;
- (void)setBuildCameraAfterPassAuthBlock:(id /* block */)arg0;
- (void)willSwitchToOtherTab;
- (void)willSwitchToLiveTab;
- (void)didEnterLiveTabWithStartTime:(double)arg0;
- (void)setEntryFaceSticker:(id)arg0;
- (void)applyFilter:(id)arg0;
- (void)applyWhiteValue:(float)arg0;
- (void)applySmoothValue:(float)arg0;
- (void)applyEyeValue:(float)arg0;
- (void)applyCheekValue:(float)arg0;
- (void)setTopicID:(id)arg0 topicName:(id)arg1 isCommerce:(BOOL)arg2;
- (BOOL)enableBack;
- (id /* block */)backHandler;
- (id /* block */)buildCameraAfterPassAuthBlock;
- (id)camera;
- (void)setCamera:(id)arg0;
- (void).cxx_destruct;
- (void)setDismissHandler:(id /* block */)arg0;
- (id)initWithViewController:(id)arg0;
- (void)setActive:(BOOL)arg0;
- (void)viewDidLoad;
- (id /* block */)dismissHandler;

@end
