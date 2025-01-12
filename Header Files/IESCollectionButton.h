//
//     Generated by private class-dump
//

@class NSString;

@interface IESCollectionButton : IESLiveButton <CAAnimationDelegate> {
    BOOL _storedSelectedState;
}

@property (nonatomic) BOOL storedSelectedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginFirstTouchAnimation;
- (void)beginSecondTouchAnimation;
- (void)setStoredSelectedState:(BOOL)arg0;
- (BOOL)storedSelectedState;
- (void)beginTouchAnimationWithSelected:(BOOL)arg0;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg0;

@end
