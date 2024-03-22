//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AFDPromotionF2FTaskProfileContext : MTLModel <MTLJSONSerializing> {
    NSString *_uid;
    NSString *_previousPage;
    NSString *_activityID;
    NSString *_topic;
    NSString *_enterFrom;
    NSString *_taskToken;
    NSString *_buriedInfo;
    NSDictionary *_originalParams;
}

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *topic;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *taskToken;
@property (copy, nonatomic) NSString *buriedInfo;
@property (copy, nonatomic) NSDictionary *originalParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)taskToken;
- (void)setTaskToken:(id)arg0;
- (id)originalParams;
- (id)buriedInfo;
- (void)setBuriedInfo:(id)arg0;
- (void)setOriginalParams:(id)arg0;
- (void)setUid:(id)arg0;
- (id)uid;
- (void).cxx_destruct;
- (void)setTopic:(id)arg0;
- (id)topic;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (id)activityID;
- (void)setActivityID:(id)arg0;

@end
