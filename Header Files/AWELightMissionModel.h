//
//     Generated by private class-dump
//

@class NSString;

@interface AWELightMissionModel : NSObject {
    unsigned long long _msgType;
    NSString *_progressUpdateType;
    unsigned long long _requirementType;
    NSString *_missionId;
    NSString *_requirementId;
    NSString *_authorId;
    NSString *_itemId;
    unsigned long long _itemSource;
    NSString *_topicId;
    double _duration;
}

@property (nonatomic) unsigned long long msgType;
@property (copy, nonatomic) NSString *progressUpdateType;
@property (nonatomic) unsigned long long requirementType;
@property (copy, nonatomic) NSString *missionId;
@property (copy, nonatomic) NSString *requirementId;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *itemId;
@property (nonatomic) unsigned long long itemSource;
@property (copy, nonatomic) NSString *topicId;
@property (nonatomic) double duration;

- (id)generateRequestParamsDict;
- (id)missionId;
- (void)setMissionId:(id)arg0;
- (id)requirementId;
- (void)setRequirementId:(id)arg0;
- (void)setProgressUpdateType:(id)arg0;
- (id)progressUpdateType;
- (void).cxx_destruct;
- (double)duration;
- (id)topicId;
- (void)setTopicId:(id)arg0;
- (void)setDuration:(double)arg0;
- (id)itemId;
- (unsigned long long)itemSource;
- (void)setItemSource:(unsigned long long)arg0;
- (void)setItemId:(id)arg0;
- (unsigned long long)msgType;
- (void)setMsgType:(unsigned long long)arg0;
- (id)authorId;
- (void)setAuthorId:(id)arg0;
- (void)setRequirementType:(unsigned long long)arg0;
- (unsigned long long)requirementType;

@end