//
//     Generated by private class-dump
//

@class NSString, IESECSliceXTimer, NSHashTable;

@interface IESECSliceXTimeCenter : NSObject <IESECSliceXTimerListener> {
    unsigned long long _currentTimestamp;
    unsigned long long _initialTimestamp;
    unsigned long long _initialCurrentAbsoluteTimestamp;
    IESECSliceXTimer *_timer;
    NSHashTable *_timerListeners;
}

@property (nonatomic) unsigned long long initialTimestamp;
@property (nonatomic) unsigned long long initialCurrentAbsoluteTimestamp;
@property (retain, nonatomic) IESECSliceXTimer *timer;
@property (nonatomic) unsigned long long currentTimestamp;
@property (retain, nonatomic) NSHashTable *timerListeners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;

- (unsigned long long)initialTimestamp;
- (void)setInitialTimestamp:(unsigned long long)arg0;
- (id)init_private;
- (void)addTimerListener:(id)arg0;
- (void)removeTimerListener:(id)arg0;
- (void)timeIsUp:(unsigned long long)arg0;
- (id)timerListeners;
- (unsigned long long)initialCurrentAbsoluteTimestamp;
- (void)notifyTimerListeners;
- (void)setInitialCurrentAbsoluteTimestamp:(unsigned long long)arg0;
- (void)setTimerListeners:(id)arg0;
- (id)timer;
- (void).cxx_destruct;
- (void)setTimer:(id)arg0;
- (unsigned long long)currentTimestamp;
- (void)setCurrentTimestamp:(unsigned long long)arg0;

@end
