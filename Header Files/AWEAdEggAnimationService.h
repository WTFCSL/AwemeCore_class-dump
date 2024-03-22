//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAdEggAnimationService : HTSService <AWEAdEggAnimationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)downloadResourceWithEggModelProtocol:(id)arg0 completionBlock:(id /* block */)arg1;

- (id)showEggOnView:(id)arg0 eggModelProtocol:(id)arg1 eggFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 maxWaitToShowTime:(double)arg3 completionBlock:(id /* block */)arg4 clickImageBlock:(id /* block */)arg5 dismissBlock:(id /* block */)arg6 canViewBeClicked:(BOOL)arg7;
- (id)showEggOnView:(id)arg0 eggModelProtocol:(id)arg1 eggFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 closeButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg3 maxWaitToShowTime:(double)arg4 completionBlock:(id /* block */)arg5 clickImageBlock:(id /* block */)arg6 dismissBlock:(id /* block */)arg7 canViewBeClicked:(BOOL)arg8;

@end