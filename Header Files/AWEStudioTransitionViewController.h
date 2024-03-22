//
//     Generated by private class-dump
//

@class AWETranslationTransitionController, NSString;

@interface AWEStudioTransitionViewController : NSObject <ACCTransitionViewControllerProtocol> {
    AWETranslationTransitionController *_transitionDelegate;
}

@property (retain, nonatomic) AWETranslationTransitionController *transitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)wireToViewController:(id)arg0;
- (void)setToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)targetTransitionDelegate;
- (void).cxx_destruct;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;

@end
