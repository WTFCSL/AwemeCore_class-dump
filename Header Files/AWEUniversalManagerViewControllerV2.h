//
//     Generated by private class-dump
//

@class AWEDiskExtremelyCleanView, NSString;

@interface AWEUniversalManagerViewControllerV2 : AWEDiskManageBaseViewController <AWERouterViewControllerProtocol> {
    AWEDiskExtremelyCleanView *_extremelyCleanView;
}

@property (retain, nonatomic) AWEDiskExtremelyCleanView *extremelyCleanView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)setupCleanViewModel;
- (id)extremelyCleanView;
- (void)initExtremelyCleanView;
- (void)setExtremelyCleanView:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)createUI;

@end