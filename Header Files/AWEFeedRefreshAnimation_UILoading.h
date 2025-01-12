//
//     Generated by private class-dump
//

@class NSString, UIViewController, AWEUILoadingView;

@interface AWEFeedRefreshAnimation_UILoading : UIView <AWEFeedRefreshAnimationProtocol> {
    BOOL _isRefreshing;
    UIViewController *_controller;
    AWEUILoadingView *_loadingView;
}

@property (weak, nonatomic) UIViewController *controller;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL isRefreshing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationWithController:(id)arg0;

- (void)dragWithProgress:(double)arg0;
- (void)dragCancellation;
- (void)beginRefreshingAfterDragEnd;
- (void)dragToEndWithProgress:(double)arg0 refreshBlock:(id /* block */)arg1;
- (void)adjustFrame;
- (void)setController:(id)arg0;
- (void)stopRefreshing;
- (void).cxx_destruct;
- (id)controller;
- (void)beginRefreshing;
- (id)initWithController:(id)arg0;
- (BOOL)isRefreshing;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setIsRefreshing:(BOOL)arg0;

@end
