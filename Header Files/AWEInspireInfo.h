//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEInspireInfo : MTLModel <MTLJSONSerializing> {
    NSNumber *_inspireTime;
    NSNumber *_inspireNum;
    NSString *_logID;
    NSNumber *_taskID;
    NSString *_taskKey;
    NSString *_maskGuideText;
    NSString *_pendantMainText;
    NSString *_pendantSubText;
    NSNumber *_timingType;
}

@property (copy, nonatomic) NSNumber *inspireTime;
@property (retain, nonatomic) NSNumber *inspireNum;
@property (copy, nonatomic) NSString *logID;
@property (retain, nonatomic) NSNumber *taskID;
@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *maskGuideText;
@property (copy, nonatomic) NSString *pendantMainText;
@property (copy, nonatomic) NSString *pendantSubText;
@property (retain, nonatomic) NSNumber *timingType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)taskKey;
- (void)setTaskKey:(id)arg0;
- (id)inspireTime;
- (void)setInspireTime:(id)arg0;
- (id)inspireNum;
- (void)setInspireNum:(id)arg0;
- (id)maskGuideText;
- (void)setMaskGuideText:(id)arg0;
- (id)pendantMainText;
- (void)setPendantMainText:(id)arg0;
- (id)pendantSubText;
- (void)setPendantSubText:(id)arg0;
- (id)timingType;
- (void)setTimingType:(id)arg0;
- (void).cxx_destruct;
- (id)taskID;
- (void)setTaskID:(id)arg0;
- (id)logID;
- (void)setLogID:(id)arg0;

@end
