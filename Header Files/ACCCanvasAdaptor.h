//
//     Generated by private class-dump
//

@class NSString;
@protocol UIViewControllerTransitioningDelegate;

@interface ACCCanvasAdaptor : NSObject <UINavigationControllerDelegate> {
    id /* block */ _cancelBlock;
    id /* block */ _enableAnimated;
    id /* block */ _customerTransitioningSetting;
    id<UIViewControllerTransitioningDelegate> _nextTranslationTransitionDelegate;
}

@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> nextTranslationTransitionDelegate;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ enableAnimated;
@property (copy, nonatomic) id /* block */ customerTransitioningSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nextTranslationTransitionDelegate;
- (void)setNextTranslationTransitionDelegate:(id)arg0;
- (void)setCustomerTransitioningSetting:(id /* block */)arg0;
- (id /* block */)customerTransitioningSetting;
- (id /* block */)enableAnimated;
- (void)setEnableAnimated:(id /* block */)arg0;
- (void)openEditorWithPublishViewModel:(id)arg0 withLoadingView:(id)arg1 completion:(id /* block */)arg2;
- (void)openPublishPageWithWithPublishViewModel:(id)arg0 withLoadingView:(id)arg1 completion:(id /* block */)arg2;
- (void)openEditorWithPublishViewModel:(id)arg0 withLoadingView:(id)arg1 inputDataBuilder:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)p_createPublishPageWithPublishViewModel:(id)arg0;
- (id)editorServiceContainerWithPublishModel:(id)arg0;
- (id /* block */)cancelBlock;
- (void).cxx_destruct;
- (void)setCancelBlock:(id /* block */)arg0;

@end