//
//     Generated by private class-dump
//

@interface IESGCPDetailNavigationController : UINavigationController {
    BOOL _isInLive;
    BOOL _isOpenAsFullScreen;
}

@property (nonatomic) BOOL isInLive;
@property (nonatomic) BOOL isOpenAsFullScreen;

- (BOOL)awe_shouldBypassPresentationHook;
- (BOOL)isInLive;
- (void)setIsInLive:(BOOL)arg0;
- (BOOL)isOpenAsFullScreen;
- (void)setIsOpenAsFullScreen:(BOOL)arg0;
- (id)initWithRootViewController:(id)arg0 isInLive:(BOOL)arg1 isOpenAsFullScreen:(BOOL)arg2;
- (void)viewWillDisappear:(BOOL)arg0;

@end