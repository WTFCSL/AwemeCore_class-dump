//
//     Generated by private class-dump
//

@class AWEPOIAnchorVisitHistory, AWEPOIAnchorTagRateAggInfo, NSString, AWEPOIAnchorBubbleModel;

@interface AWEPOIAnchorLifeExtraModel : MTLModel <MTLJSONSerializing> {
    AWEPOIAnchorTagRateAggInfo *_tagRateAggInfo;
    AWEPOIAnchorBubbleModel *_bubble;
    AWEPOIAnchorVisitHistory *_visitHistory;
}

@property (retain, nonatomic) AWEPOIAnchorTagRateAggInfo *tagRateAggInfo;
@property (retain, nonatomic) AWEPOIAnchorBubbleModel *bubble;
@property (retain, nonatomic) AWEPOIAnchorVisitHistory *visitHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)tagRateAggInfo;
- (void)setTagRateAggInfo:(id)arg0;
- (id)visitHistory;
- (void)setVisitHistory:(id)arg0;
- (void).cxx_destruct;
- (id)bubble;
- (void)setBubble:(id)arg0;

@end