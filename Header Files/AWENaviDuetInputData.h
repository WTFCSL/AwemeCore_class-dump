//
//     Generated by private class-dump
//

@class AWENaviTraceNode, NSArray, AWENaviEffectContextModel, NSDictionary, AWENaviDuetMissionConfig, AWENaviActivityNode, AWENaviDuetAnchorConfig, TTKNaviModel, AWENaviDuetGeneralConfig;

@interface AWENaviDuetInputData : NSObject {
    NSArray *_others;
    NSDictionary *_effectNameToEffectMapping;
    TTKNaviModel *_avatar;
    AWENaviEffectContextModel *_contextModel;
    AWENaviTraceNode *_trace;
    AWENaviDuetAnchorConfig *_anchor;
    AWENaviDuetGeneralConfig *_general;
    AWENaviDuetMissionConfig *_mission;
    AWENaviActivityNode *_activity;
}

@property (retain, nonatomic) AWENaviDuetGeneralConfig *general;
@property (retain, nonatomic) AWENaviDuetMissionConfig *mission;
@property (retain, nonatomic) AWENaviDuetAnchorConfig *anchor;
@property (retain, nonatomic) AWENaviTraceNode *trace;
@property (retain, nonatomic) AWENaviActivityNode *activity;
@property (copy, nonatomic) NSArray *others;
@property (copy, nonatomic) NSDictionary *effectNameToEffectMapping;
@property (retain, nonatomic) TTKNaviModel *avatar;
@property (retain, nonatomic) AWENaviEffectContextModel *contextModel;

- (id)mission;
- (void)setMission:(id)arg0;
- (void)setTrace:(id)arg0;
- (void)setContextModel:(id)arg0;
- (void)setEffectNameToEffectMapping:(id)arg0;
- (id)effectNameToEffectMapping;
- (id)contextModel;
- (void)setGeneral:(id)arg0;
- (void)setAnchor:(id)arg0;
- (id)anchor;
- (id)trace;
- (void).cxx_destruct;
- (id)activity;
- (id)others;
- (id)general;
- (void)setActivity:(id)arg0;
- (id)initWithParams:(id)arg0;
- (id)avatar;
- (void)setAvatar:(id)arg0;
- (void)setOthers:(id)arg0;

@end
