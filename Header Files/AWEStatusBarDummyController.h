//
//     Generated by private class-dump
//

@class AWEStatusBarDummyControllerStatusBarInfo;

@interface AWEStatusBarDummyController : UIViewController {
    AWEStatusBarDummyControllerStatusBarInfo *_statusBarInfo;
}

@property (retain, nonatomic) AWEStatusBarDummyControllerStatusBarInfo *statusBarInfo;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)setStatusBarHidden:(BOOL)arg0 style:(long long)arg1;
- (id)statusBarInfo;
- (void)setStatusBarInfo:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (id)initWith:(id)arg0;

@end
