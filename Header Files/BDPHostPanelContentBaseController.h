//
//     Generated by private class-dump
//

@class UIViewController;
@protocol BDPHostPanelControllerProtocol;

@interface BDPHostPanelContentBaseController : UIViewController <BDPHostPanelContentControllerProtocol> {
    BOOL _isHasDone_firstShowCompletion;
    UIViewController<BDPHostPanelControllerProtocol> *_hostPanelController;
    id /* block */ _firstShowCompletion;
}

@property (nonatomic) BOOL isHasDone_firstShowCompletion;
@property (weak, nonatomic) UIViewController<BDPHostPanelControllerProtocol> *hostPanelController;
@property (copy, nonatomic) id /* block */ firstShowCompletion;

- (void)setHostPanelController:(id)arg0;
- (void)setFirstShowCompletion:(id /* block */)arg0;
- (id)hostPanelController;
- (BOOL)isHasDone_firstShowCompletion;
- (void)setIsHasDone_firstShowCompletion:(BOOL)arg0;
- (id /* block */)firstShowCompletion;
- (void)dismiss;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg0;

@end