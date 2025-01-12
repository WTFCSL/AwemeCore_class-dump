//
//     Generated by private class-dump
//

@protocol IESLiveGuideToolBarProvider;

@interface IESLiveGuideFaceEffectItem : IESLiveGuideToolBarItem {
    BOOL _isIconChanged;
    id<IESLiveGuideToolBarProvider> _guideToolbarProvider;
}

@property (nonatomic) BOOL isIconChanged;
@property (weak, nonatomic) id<IESLiveGuideToolBarProvider> guideToolbarProvider;

- (id)guideToolbarProvider;
- (void)setGuideToolbarProvider:(id)arg0;
- (void)changeToFaceEffectIconWithoutAnimation:(id)arg0;
- (void)changeToNormalState;
- (void)changeToFaceEffectIcon:(id)arg0 completion:(id /* block */)arg1;
- (void)setIsIconChanged:(BOOL)arg0;
- (BOOL)isIconChanged;
- (id)init;
- (void).cxx_destruct;

@end
