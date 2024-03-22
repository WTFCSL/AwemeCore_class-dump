//
//     Generated by private class-dump
//

@class NSArray, AWECampaignVideoStateModel, NSString;

@interface AWECampaignTaskRuleMatcherModel : MTLModel <MTLJSONSerializing> {
    NSArray *_showView;
    NSArray *_page;
    AWECampaignVideoStateModel *_videoStateModel;
}

@property (copy, nonatomic) NSArray *showView;
@property (copy, nonatomic) NSArray *page;
@property (retain, nonatomic) AWECampaignVideoStateModel *videoStateModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (id)showView;
- (void)setShowView:(id)arg0;
- (id)videoStateModel;
- (void)setVideoStateModel:(id)arg0;
- (id)page;
- (void).cxx_destruct;
- (void)setPage:(id)arg0;

@end
