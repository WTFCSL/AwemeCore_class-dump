//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCChapterZoomTransitionOuterContextProvider;

@interface ACCChapterMagnifyTransition : NSObject <DVEPreviewTransitionContextProvider> {
    id<ACCChapterZoomTransitionOuterContextProvider> _outerProvider;
    id /* block */ _outterSnapBlock;
}

@property (weak, nonatomic) id<ACCChapterZoomTransitionOuterContextProvider> outerProvider;
@property (copy, nonatomic) id /* block */ outterSnapBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startDefaultAnimationWithFromVC:(id)arg0 toVC:(id)arg1 fromContextProvider:(id)arg2 toContextProvider:(id)arg3 containerView:(id)arg4 context:(id)arg5 interactionType:(unsigned long long)arg6 completionHandler:(id /* block */)arg7;
- (BOOL)isForAppear;
- (id)outerProvider;
- (void)setOuterProvider:(id)arg0;
- (void)setOutterSnapBlock:(id /* block */)arg0;
- (id /* block */)outterSnapBlock;
- (void)p_clearSnapCache;
- (unsigned long long)interactionType;
- (void).cxx_destruct;
- (void)dealloc;

@end
