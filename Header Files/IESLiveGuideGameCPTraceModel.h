//
//     Generated by private class-dump
//

@class NSDictionary, NSArray;

@interface IESLiveGuideGameCPTraceModel : NSObject {
    BOOL _traceEnable;
    NSDictionary *_traceSettingDict;
    NSArray *_businessArray;
    NSArray *_eventArray;
    NSArray *_stepArray;
}

@property (retain, nonatomic) NSDictionary *traceSettingDict;
@property (retain, nonatomic) NSArray *businessArray;
@property (retain, nonatomic) NSArray *eventArray;
@property (retain, nonatomic) NSArray *stepArray;
@property (nonatomic) BOOL traceEnable;

- (id)initWithRoom:(id)arg0 trackContext:(id)arg1;
- (BOOL)traceStepEnable:(id)arg0;
- (BOOL)stepInBlockList:(id)arg0;
- (BOOL)typeArray:(id)arg0 hasTypeName:(id)arg1;
- (void)traceMonitorPromoteStepType:(unsigned long long)arg0 params:(id)arg1 metric:(id)arg2 category:(id)arg3;
- (id)stepNameWithType:(unsigned long long)arg0;
- (void)traceMonitorPromoteStep:(id)arg0 params:(id)arg1 metric:(id)arg2 category:(id)arg3;
- (id)traceSettingDict;
- (void)setTraceSettingDict:(id)arg0;
- (id)businessArray;
- (void)setBusinessArray:(id)arg0;
- (id)stepArray;
- (void)setStepArray:(id)arg0;
- (BOOL)traceEnable;
- (void)setTraceEnable:(BOOL)arg0;
- (void).cxx_destruct;
- (id)eventArray;
- (void)setEventArray:(id)arg0;

@end