//
//     Generated by private class-dump
//

@class NSNumber;

@interface AUCDTOBasicCameraRecordDuration : MTLModel {
    BOOL _limitNormalThreeOptions;
    NSNumber *_maxRecordDuration;
    NSNumber *_minRecordDuration;
}

@property (copy, nonatomic) NSNumber *maxRecordDuration;
@property (copy, nonatomic) NSNumber *minRecordDuration;
@property (nonatomic) BOOL limitNormalThreeOptions;

- (id)maxRecordDuration;
- (void)setMaxRecordDuration:(id)arg0;
- (id)minRecordDuration;
- (void)setMinRecordDuration:(id)arg0;
- (BOOL)limitNormalThreeOptions;
- (void)setLimitNormalThreeOptions:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;

@end
