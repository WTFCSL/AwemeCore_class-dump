//
//     Generated by private class-dump
//

@class NSString, AWECampaignTaskFinishModel, AWECampaignTaskPauseModel;

@interface AWECampaignTaskStateActionModel : MTLModel <MTLJSONSerializing> {
    AWECampaignTaskFinishModel *_taskFinishModel;
    AWECampaignTaskPauseModel *_taskPauseModel;
}

@property (retain, nonatomic) AWECampaignTaskFinishModel *taskFinishModel;
@property (retain, nonatomic) AWECampaignTaskPauseModel *taskPauseModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (id)taskFinishModel;
- (void)setTaskFinishModel:(id)arg0;
- (id)taskPauseModel;
- (void)setTaskPauseModel:(id)arg0;
- (void).cxx_destruct;

@end