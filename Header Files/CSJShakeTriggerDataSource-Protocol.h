//
//     Generated by private class-dump
//

@protocol CSJShakeTriggerDelegate;

@protocol CSJShakeTriggerDataSource <NSObject>

@property (weak, nonatomic) id<CSJShakeTriggerDelegate> shakeTriggerDelegate;
@property (nonatomic) BOOL validShakeTrigger;

- (BOOL)validShakeTrigger;
- (void)setValidShakeTrigger:(BOOL)arg0;
- (void)setShakeTriggerDelegate:(id)arg0;
- (id)shakeTriggerScene;
- (double)shakeAmplitude;
- (id)shakeTriggerDelegate;
- (long long)calculationMethod;

@end