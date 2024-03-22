//
//     Generated by private class-dump
//

@interface ACCRecordFlowStageStrategy : NSObject {
    unsigned long long _flowType;
    long long _touchBeganAction;
    long long _holdBeganAction;
    long long _touchEndedAction;
}

@property (nonatomic) long long touchBeganAction;
@property (nonatomic) long long holdBeganAction;
@property (nonatomic) long long touchEndedAction;
@property (nonatomic) unsigned long long flowType;

- (BOOL)canStart:(id)arg0;
- (BOOL)canStop:(id)arg0;
- (void)logComplete:(id)arg0;
- (void)logStart:(id)arg0;
- (void)logStop:(id)arg0;
- (long long)actionWithStage:(long long)arg0;
- (void)setTouchBeganAction:(long long)arg0;
- (void)setHoldBeganAction:(long long)arg0;
- (void)setTouchEndedAction:(long long)arg0;
- (long long)touchBeganAction;
- (long long)touchEndedAction;
- (unsigned long long)flowType;
- (void)setFlowType:(unsigned long long)arg0;
- (long long)holdBeganAction;

@end
