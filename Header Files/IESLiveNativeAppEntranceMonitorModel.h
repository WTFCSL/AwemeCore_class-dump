//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveNativeAppEntranceMonitorModel : NSObject {
    NSString *_appID;
    NSString *_entranceType;
    NSString *_entranceSource;
    NSString *_stage;
    NSString *_stageDesc;
    NSString *_stageExtra;
    double _duration;
}

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *entranceType;
@property (copy, nonatomic) NSString *entranceSource;
@property (copy, nonatomic) NSString *stage;
@property (copy, nonatomic) NSString *stageDesc;
@property (retain, nonatomic) NSString *stageExtra;
@property (nonatomic) double duration;

- (id)entranceType;
- (void)setEntranceType:(id)arg0;
- (id)entranceSource;
- (void)setEntranceSource:(id)arg0;
- (id)stageDesc;
- (void)setStageDesc:(id)arg0;
- (id)stageExtra;
- (void)setStageExtra:(id)arg0;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (id)stage;
- (double)duration;
- (id)appID;
- (void)setStage:(id)arg0;
- (void)setDuration:(double)arg0;

@end
