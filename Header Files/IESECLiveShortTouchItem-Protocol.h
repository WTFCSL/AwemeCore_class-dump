//
//     Generated by private class-dump
//

@protocol IESECLivePluginLayoutView;

@protocol IESECLiveShortTouchItem <NSObject>

@property (retain, nonatomic) id<IESECLivePluginLayoutView> view;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL enableShorTouchNewAnimation;
@property (nonatomic) BOOL useEntranceAnimation;
@property (copy, nonatomic) id /* block */ triggerTempStateShow;
@property (copy, nonatomic) id /* block */ triggerNormalStateShow;
@property (nonatomic) long long tempStateTriggerDuration;

- (void)setEnableShorTouchNewAnimation:(BOOL)arg0;
- (void)setUseEntranceAnimation:(BOOL)arg0;
- (void)setTempStateTriggerDuration:(long long)arg0;
- (void)setTriggerTempStateShow:(id /* block */)arg0;
- (void)setTriggerNormalStateShow:(id /* block */)arg0;
- (id /* block */)triggerTempStateShow;
- (id /* block */)triggerNormalStateShow;
- (long long)tempStateTriggerDuration;
- (void)setView:(id)arg0;
- (id /* block */)actionBlock;
- (id)view;
- (void)setActionBlock:(id /* block */)arg0;
- (BOOL)useEntranceAnimation;
- (BOOL)enableShorTouchNewAnimation;

@end
