//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface BDXBridgeOpenIncentiveShareDialogMethodParamModel : BDXBridgeModel {
    BOOL _isPrivate;
    NSNumber *_height;
    NSString *_taskId;
    NSString *_taskToken;
    NSString *_taskGroupId;
    NSString *_inviteEnterFrom;
    NSNumber *_directOpenRadarGroup;
    NSString *_pitayaCellTailString;
}

@property (nonatomic) BOOL isPrivate;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *taskToken;
@property (copy, nonatomic) NSString *taskGroupId;
@property (copy, nonatomic) NSString *inviteEnterFrom;
@property (retain, nonatomic) NSNumber *directOpenRadarGroup;
@property (copy, nonatomic) NSString *pitayaCellTailString;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)taskToken;
- (void)setTaskToken:(id)arg0;
- (id)taskGroupId;
- (void)setTaskGroupId:(id)arg0;
- (id)inviteEnterFrom;
- (void)setInviteEnterFrom:(id)arg0;
- (id)directOpenRadarGroup;
- (void)setDirectOpenRadarGroup:(id)arg0;
- (id)pitayaCellTailString;
- (void)setPitayaCellTailString:(id)arg0;
- (BOOL)isPrivate;
- (void).cxx_destruct;
- (id)height;
- (void)setHeight:(id)arg0;
- (id)taskId;
- (void)setIsPrivate:(BOOL)arg0;
- (void)setTaskId:(id)arg0;

@end