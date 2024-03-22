//
//     Generated by private class-dump
//

@class NSNumber;

@interface RTVVoipConfig : JSONModel {
    NSNumber *_is_open;
    NSNumber *_debugInfo;
    NSNumber *_callerTimeOut;
    NSNumber *_calleeTimeOut;
    NSNumber *_voipCallPollingPullSwitch;
    NSNumber *_groupVoipPrejoinRoom;
    NSNumber *_isGroupVoipEnable;
    NSNumber *_isFirstFrameTimeOptimizeEnable;
}

@property (retain, nonatomic) NSNumber *is_open;
@property (retain, nonatomic) NSNumber *debugInfo;
@property (retain, nonatomic) NSNumber *callerTimeOut;
@property (retain, nonatomic) NSNumber *calleeTimeOut;
@property (retain, nonatomic) NSNumber *voipCallPollingPullSwitch;
@property (retain, nonatomic) NSNumber *groupVoipPrejoinRoom;
@property (retain, nonatomic) NSNumber *isGroupVoipEnable;
@property (retain, nonatomic) NSNumber *isFirstFrameTimeOptimizeEnable;

+ (id)keyMapper;

- (id)isGroupVoipEnable;
- (id)isFirstFrameTimeOptimizeEnable;
- (id)callerTimeOut;
- (id)is_open;
- (void)setIs_open:(id)arg0;
- (void)setCallerTimeOut:(id)arg0;
- (id)calleeTimeOut;
- (void)setCalleeTimeOut:(id)arg0;
- (id)voipCallPollingPullSwitch;
- (void)setVoipCallPollingPullSwitch:(id)arg0;
- (id)groupVoipPrejoinRoom;
- (void)setGroupVoipPrejoinRoom:(id)arg0;
- (void)setIsGroupVoipEnable:(id)arg0;
- (void)setIsFirstFrameTimeOptimizeEnable:(id)arg0;
- (void).cxx_destruct;
- (id)debugInfo;
- (void)setDebugInfo:(id)arg0;

@end