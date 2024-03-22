//
//     Generated by private class-dump
//

@class NSString, AWENonStandardTrackModel;

@interface AWECommerceNonStandardMonitor : HTSService <AWECommerceNonStandardMonitor> {
    BOOL _shouldMonitor;
    NSString *_businessScene;
    AWENonStandardTrackModel *_entranceTrackModel;
    AWENonStandardTrackModel *_recordTrackModel;
    AWENonStandardTrackModel *_editTrackModel;
    AWENonStandardTrackModel *_publishTrackModel;
    AWENonStandardTrackModel *_publishStartTrackModel;
}

@property (copy, nonatomic) NSString *businessScene;
@property (nonatomic) BOOL shouldMonitor;
@property (retain, nonatomic) AWENonStandardTrackModel *entranceTrackModel;
@property (retain, nonatomic) AWENonStandardTrackModel *recordTrackModel;
@property (retain, nonatomic) AWENonStandardTrackModel *editTrackModel;
@property (retain, nonatomic) AWENonStandardTrackModel *publishTrackModel;
@property (retain, nonatomic) AWENonStandardTrackModel *publishStartTrackModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showDebugToastWithTrackModel:(id)arg0;

- (void)onServiceInit;
- (void)setBusinessScene:(id)arg0;
- (void)monitorNonStandardResource:(id)arg0 stage:(id)arg1 businessScene:(id)arg2;
- (void)monitorNonStandardResource:(id)arg0 stage:(id)arg1 businessScene:(id)arg2 shootWay:(id)arg3;
- (void)setShouldMonitor:(BOOL)arg0;
- (id)convertChallengeModelToTrackModel:(id)arg0 stage:(id)arg1;
- (id)convertMissionModelToTrackModel:(id)arg0 stage:(id)arg1 shootWay:(id)arg2;
- (id)convertPublishModelToTrackModel:(id)arg0 stage:(id)arg1;
- (void)handleDifferentStageTrackModel:(id)arg0;
- (BOOL)shouldMonitorNonStandardResource;
- (void)setEntranceTrackModel:(id)arg0;
- (void)setIsCorrectInfoWithTrackModel:(id)arg0 andPreTrackModel:(id)arg1;
- (id)transferTrackModelToDic:(id)arg0;
- (id)entranceTrackModel;
- (void)setRecordTrackModel:(id)arg0;
- (id)recordTrackModel;
- (void)setEditTrackModel:(id)arg0;
- (id)editTrackModel;
- (void)setPublishTrackModel:(id)arg0;
- (id)publishTrackModel;
- (void)setPublishStartTrackModel:(id)arg0;
- (id)publishStartTrackModel;
- (void)trackCommerceNonStandardResource;
- (id)businessScene;
- (void)monitorNonStandardResource:(id)arg0 stage:(id)arg1;
- (void)monitorNonStandardCreateAwemeWithParam:(id)arg0 stage:(id)arg1;
- (void).cxx_destruct;
- (BOOL)shouldMonitor;

@end
