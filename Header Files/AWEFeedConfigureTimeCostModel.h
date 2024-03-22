//
//     Generated by private class-dump
//

@class NSDictionary;

@interface AWEFeedConfigureTimeCostModel : NSObject {
    BOOL _preload;
    double _totalDuration;
    double _updatePlayerDuration;
    double _updateAllSubViewsDuration;
    double _updateContainerDataDuration;
    NSDictionary *_configElementDurations;
    double _configBottomDuration;
    double _dispatchUpdateAllSubViewsDuration;
    double _updateViewConstraintsDuration;
    double _splitDataDuration;
    double _layoutElementViewsDuration;
    double _activateInfoDataDuration;
    double _afterSetDataDuration;
}

@property (nonatomic) double totalDuration;
@property (nonatomic) double updatePlayerDuration;
@property (nonatomic) double updateAllSubViewsDuration;
@property (nonatomic) double updateContainerDataDuration;
@property (copy, nonatomic) NSDictionary *configElementDurations;
@property (nonatomic) double configBottomDuration;
@property (nonatomic) double dispatchUpdateAllSubViewsDuration;
@property (nonatomic) double updateViewConstraintsDuration;
@property (nonatomic) double splitDataDuration;
@property (nonatomic) double layoutElementViewsDuration;
@property (nonatomic) double activateInfoDataDuration;
@property (nonatomic) double afterSetDataDuration;
@property (nonatomic) BOOL preload;

- (double)updatePlayerDuration;
- (void)setUpdatePlayerDuration:(double)arg0;
- (double)updateAllSubViewsDuration;
- (void)setUpdateAllSubViewsDuration:(double)arg0;
- (double)updateContainerDataDuration;
- (void)setUpdateContainerDataDuration:(double)arg0;
- (id)configElementDurations;
- (void)setConfigElementDurations:(id)arg0;
- (double)configBottomDuration;
- (void)setConfigBottomDuration:(double)arg0;
- (double)dispatchUpdateAllSubViewsDuration;
- (void)setDispatchUpdateAllSubViewsDuration:(double)arg0;
- (double)updateViewConstraintsDuration;
- (void)setUpdateViewConstraintsDuration:(double)arg0;
- (double)splitDataDuration;
- (void)setSplitDataDuration:(double)arg0;
- (double)layoutElementViewsDuration;
- (void)setLayoutElementViewsDuration:(double)arg0;
- (double)activateInfoDataDuration;
- (void)setActivateInfoDataDuration:(double)arg0;
- (double)afterSetDataDuration;
- (void)setAfterSetDataDuration:(double)arg0;
- (double)totalDuration;
- (id)init;
- (void).cxx_destruct;
- (BOOL)preload;
- (void)setTotalDuration:(double)arg0;
- (void)setPreload:(BOOL)arg0;

@end
