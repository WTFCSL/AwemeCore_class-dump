//
//     Generated by private class-dump
//

@class NSString, UIView, NSMutableArray, NSObject;
@protocol AWEAwemeDetailBottomBarController, AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWEAwemeDetailBottomBarCoordinator : NSObject <AWEAwemeDetailBottomBarCoordinatorProtocol> {
    NSObject<AWEAwemeDetailBottomBarController> *_activeBottomBarController;
    NSMutableArray *_bottomBarControllerArray;
    id<AWEAwemeDetailBottomBarCommonContextProtocol> _context;
    UIView *_containerView;
    UIView *_aboveSubview;
}

@property (retain, nonatomic) NSMutableArray *bottomBarControllerArray;
@property (retain, nonatomic) id<AWEAwemeDetailBottomBarCommonContextProtocol> context;
@property (retain, nonatomic) NSObject<AWEAwemeDetailBottomBarController> *activeBottomBarController;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *aboveSubview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCurrentAwemeModel:(id)arg0;
- (void)updateBottomBarWithAweme:(id)arg0 updateTiming:(long long)arg1;
- (void)setBottomBarHidden:(BOOL)arg0;
- (void)updateBottomBarAlpha:(double)arg0;
- (void)updateCurrentIndexPath:(long long)arg0;
- (void)cellWillDisplay:(id)arg0 forRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)cellDidEndDisplay:(id)arg0;
- (void)updatePlayTime:(double)arg0 canPlayTime:(double)arg1 totalTime:(double)arg2;
- (id)activeBottomBarController;
- (void)registerBottomBarContext:(Class)arg0 withCreateBlock:(id /* block */)arg1;
- (id)initWithContext:(id)arg0 containerView:(id)arg1 aboveSubview:(id)arg2;
- (id)referStringWithContext:(id)arg0;
- (id)bottomBarControllerArray;
- (void)setActiveBottomBarController:(id)arg0;
- (id)aboveSubview;
- (void)hideBottomBarForAweme:(id)arg0;
- (id)getCurrentPlayingStoryModelForOuterModel:(id)arg0;
- (void)setBottomBarControllerArray:(id)arg0;
- (void)setAboveSubview:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (id)context;

@end
