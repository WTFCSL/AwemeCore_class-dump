//
//     Generated by private class-dump
//

@class NSString;

@interface CAAnimationBlockWrapper : NSObject <CAAnimationDelegate> {
    id /* block */ _startedBlock;
    id /* block */ _completedBlock;
}

@property (copy, nonatomic) id /* block */ startedBlock;
@property (copy, nonatomic) id /* block */ completedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCompletedBlock:(id /* block */)arg0;
- (id /* block */)completedBlock;
- (id)initWithStartedBlock:(id /* block */)arg0 completedBlock:(id /* block */)arg1;
- (id /* block */)startedBlock;
- (void)setStartedBlock:(id /* block */)arg0;
- (void)animationDidStart:(id)arg0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;

@end
