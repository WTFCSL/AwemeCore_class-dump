//
//     Generated by private class-dump
//

@class AWECampaignActionToastModel, NSString;

@interface AWECampaignTaskPauseModel : MTLModel <MTLJSONSerializing> {
    AWECampaignActionToastModel *_actionToastModel;
}

@property (retain, nonatomic) AWECampaignActionToastModel *actionToastModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (id)actionToastModel;
- (void)setActionToastModel:(id)arg0;
- (void).cxx_destruct;

@end