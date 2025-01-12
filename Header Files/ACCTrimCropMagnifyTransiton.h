//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCTrimCropZoomTransitionContextProvider;

@interface ACCTrimCropMagnifyTransiton : NSObject <DVEPreviewTransitionContextProvider> {
    BOOL _needTrimZoomTranstionIn;
    id<ACCTrimCropZoomTransitionContextProvider> _provider;
}

@property (nonatomic) BOOL needTrimZoomTranstionIn;
@property (weak, nonatomic) id<ACCTrimCropZoomTransitionContextProvider> provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startDefaultAnimationWithFromVC:(id)arg0 toVC:(id)arg1 fromContextProvider:(id)arg2 toContextProvider:(id)arg3 containerView:(id)arg4 context:(id)arg5 interactionType:(unsigned long long)arg6 completionHandler:(id /* block */)arg7;
- (BOOL)isForAppear;
- (BOOL)needTrimZoomTranstionIn;
- (void)setNeedTrimZoomTranstionIn:(BOOL)arg0;
- (void)trim_startDefaultAnimationWithFromVC:(id)arg0 toVC:(id)arg1 fromContextProvider:(id)arg2 toContextProvider:(id)arg3 containerView:(id)arg4 context:(id)arg5 interactionType:(unsigned long long)arg6 completionHandler:(id /* block */)arg7;
- (void)crop_startDefaultAnimationWithFromVC:(id)arg0 toVC:(id)arg1 fromContextProvider:(id)arg2 toContextProvider:(id)arg3 containerView:(id)arg4 context:(id)arg5 interactionType:(unsigned long long)arg6 completionHandler:(id /* block */)arg7;
- (void)setProvider:(id)arg0;
- (unsigned long long)interactionType;
- (id)provider;
- (void).cxx_destruct;
- (void)dealloc;

@end
