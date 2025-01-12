//
//     Generated by private class-dump
//

@class IESLiveInnerFeedContext, IESLiveInnerFeedTransferRecommendGuideConfigModel;

@interface IESLiveInnerFeedTransferRecommendGuideConfigManager : NSObject {
    IESLiveInnerFeedTransferRecommendGuideConfigModel *_recommendGuideModel;
    IESLiveInnerFeedContext *_context;
}

@property (weak, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) IESLiveInnerFeedTransferRecommendGuideConfigModel *recommendGuideModel;

- (id)initWithInnerFeedContext:(id)arg0;
- (id)rewritedRecommendEnterParams;
- (long long)recommendDragStyle;
- (id)recommendGuideModel;
- (id)transferEntranceSource;
- (id)transferRecommendGuideItemModel;
- (id)titleLabelDescWithEntranceName:(id)arg0 labelTypeKey:(id)arg1;
- (void)setRecommendGuideModel:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end
