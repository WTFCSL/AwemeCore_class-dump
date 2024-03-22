//
//     Generated by private class-dump
//

@class NSString, NSDictionary, IEFFeatureCenterConfig;

@interface IESFeatureCenterTrackConfig : NSObject {
    BOOL _zip_zero;
    long long _realWaitMs;
    long long _realReportSceneID;
    long long _trackSceneID;
    long long _runCount;
    long long _trackType;
    long long _libraTreatmentID;
    NSString *_scene;
    NSDictionary *_reportConfigDic;
    IEFFeatureCenterConfig *_predictConfig;
    IEFFeatureCenterConfig *_realConfig;
}

@property (nonatomic) long long realWaitMs;
@property (nonatomic) long long realReportSceneID;
@property (nonatomic) long long trackSceneID;
@property (nonatomic) BOOL zip_zero;
@property (nonatomic) long long runCount;
@property (nonatomic) long long trackType;
@property (nonatomic) long long libraTreatmentID;
@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSDictionary *reportConfigDic;
@property (retain, nonatomic) IEFFeatureCenterConfig *predictConfig;
@property (retain, nonatomic) IEFFeatureCenterConfig *realConfig;

- (void)setRunCount:(long long)arg0;
- (id)predictConfig;
- (void)setPredictConfig:(id)arg0;
- (long long)realWaitMs;
- (void)setRealWaitMs:(long long)arg0;
- (long long)realReportSceneID;
- (void)setRealReportSceneID:(long long)arg0;
- (long long)trackSceneID;
- (void)setTrackSceneID:(long long)arg0;
- (BOOL)zip_zero;
- (void)setZip_zero:(BOOL)arg0;
- (long long)libraTreatmentID;
- (void)setLibraTreatmentID:(long long)arg0;
- (id)reportConfigDic;
- (void)setReportConfigDic:(id)arg0;
- (id)realConfig;
- (void)setRealConfig:(id)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (void)setTrackType:(long long)arg0;
- (long long)trackType;
- (id)scene;
- (long long)runCount;

@end
