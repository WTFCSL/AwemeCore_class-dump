//
//     Generated by private class-dump
//

@class AWELazy;

@interface AWEUITransitionHost : NSObject {
    AWELazy *_transitionDelegate;
}

@property (readonly, nonatomic) AWELazy *transitionDelegate;

- (void)presentViewController:(id)arg0 animated:(BOOL)arg1 changeModalPresentationStyle:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void).cxx_destruct;
- (void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)transitionDelegate;

@end
