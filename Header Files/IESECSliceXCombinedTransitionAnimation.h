//
//     Generated by private class-dump
//

@class IESECSliceXTransitionAnimation;

@interface IESECSliceXCombinedTransitionAnimation : NSObject {
    IESECSliceXTransitionAnimation *_opacityTranstion;
    IESECSliceXTransitionAnimation *_colorTransition;
    IESECSliceXTransitionAnimation *_translateTransition;
}

@property (readonly, nonatomic) IESECSliceXTransitionAnimation *opacityTranstion;
@property (readonly, nonatomic) IESECSliceXTransitionAnimation *colorTransition;
@property (readonly, nonatomic) IESECSliceXTransitionAnimation *translateTransition;

- (id)animationWithProperty:(unsigned long long)arg0;
- (void)bindAnimationTaskWithProperty:(unsigned long long)arg0 task:(id /* block */)arg1;
- (id)validTransitionProperties;
- (id)initWithProperties:(id)arg0 durations:(id)arg1 timingFunctions:(id)arg2 delays:(id)arg3;
- (id)opacityTranstion;
- (id)translateTransition;
- (id)colorTransition;
- (void).cxx_destruct;

@end