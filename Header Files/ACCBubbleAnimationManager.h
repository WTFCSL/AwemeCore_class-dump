//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface ACCBubbleAnimationManager : NSObject {
    NSMutableArray *_animations;
}

@property (retain, nonatomic) NSMutableArray *animations;

+ (id)sharedManager;

- (id)runAnimationWithBubble:(id)arg0 animations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)runAnimation:(id)arg0 completion:(id /* block */)arg1;
- (void)removeAnimationsForBubble:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)animations;
- (void)setAnimations:(id)arg0;

@end
