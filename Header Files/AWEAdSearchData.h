//
//     Generated by private class-dump
//

@class AWESearchAdAlbumAdaptive, NSString, NSArray, AWEAdSearchQualityOptimization, NSDictionary, AWETagLabelModel, AWEURLModel, AWEAdSearchComponentDisplayControl, AWEAdLabelPositionModel;

@interface AWEAdSearchData : MTLModel <MTLJSONSerializing> {
    BOOL _showLynxBottomViewMask;
    BOOL _enableRevealButton;
    BOOL _isWeakStyle;
    AWEURLModel *_similarRecommendationTopIconLight;
    AWEURLModel *_similarRecommendationTopIconDark;
    AWETagLabelModel *_similarRecommendationTopTagModel;
    AWETagLabelModel *_similarRecommendationVideoTagModel;
    NSString *_doubleColumnButtonText;
    long long _descriptionMaxNumberOfRows;
    NSArray *_kvAbstract;
    AWEAdSearchQualityOptimization *_qualityOptimization;
    long long _disableSearchInnerRerank;
    NSDictionary *_adSuggestWordModelData;
    NSArray *_insertKeys;
    AWESearchAdAlbumAdaptive *_albumAdaptive;
    long long _commentRow;
    AWEAdLabelPositionModel *_adLabelPositionModel;
    AWEAdSearchComponentDisplayControl *_componentDisplayControl;
}

@property (nonatomic) BOOL showLynxBottomViewMask;
@property (retain, nonatomic) AWEURLModel *similarRecommendationTopIconLight;
@property (retain, nonatomic) AWEURLModel *similarRecommendationTopIconDark;
@property (retain, nonatomic) AWETagLabelModel *similarRecommendationTopTagModel;
@property (retain, nonatomic) AWETagLabelModel *similarRecommendationVideoTagModel;
@property (copy, nonatomic) NSString *doubleColumnButtonText;
@property (nonatomic) BOOL enableRevealButton;
@property (nonatomic) long long descriptionMaxNumberOfRows;
@property (retain, nonatomic) NSArray *kvAbstract;
@property (retain, nonatomic) AWEAdSearchQualityOptimization *qualityOptimization;
@property (nonatomic) long long disableSearchInnerRerank;
@property (retain, nonatomic) NSDictionary *adSuggestWordModelData;
@property (copy, nonatomic) NSArray *insertKeys;
@property (retain, nonatomic) AWESearchAdAlbumAdaptive *albumAdaptive;
@property (nonatomic) long long commentRow;
@property (retain, nonatomic) AWEAdLabelPositionModel *adLabelPositionModel;
@property (nonatomic) BOOL isWeakStyle;
@property (retain, nonatomic) AWEAdSearchComponentDisplayControl *componentDisplayControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isWeakStyle;
- (long long)commentRow;
- (id)adSuggestWordModelData;
- (BOOL)enableRevealButton;
- (id)kvAbstract;
- (id)similarRecommendationTopIconLight;
- (id)similarRecommendationTopIconDark;
- (id)similarRecommendationTopTagModel;
- (id)insertKeys;
- (BOOL)showLynxBottomViewMask;
- (void)setShowLynxBottomViewMask:(BOOL)arg0;
- (void)setSimilarRecommendationTopIconLight:(id)arg0;
- (void)setSimilarRecommendationTopIconDark:(id)arg0;
- (void)setSimilarRecommendationTopTagModel:(id)arg0;
- (id)similarRecommendationVideoTagModel;
- (void)setSimilarRecommendationVideoTagModel:(id)arg0;
- (id)doubleColumnButtonText;
- (void)setDoubleColumnButtonText:(id)arg0;
- (void)setEnableRevealButton:(BOOL)arg0;
- (long long)descriptionMaxNumberOfRows;
- (void)setDescriptionMaxNumberOfRows:(long long)arg0;
- (void)setKvAbstract:(id)arg0;
- (id)qualityOptimization;
- (void)setQualityOptimization:(id)arg0;
- (long long)disableSearchInnerRerank;
- (void)setDisableSearchInnerRerank:(long long)arg0;
- (void)setAdSuggestWordModelData:(id)arg0;
- (void)setInsertKeys:(id)arg0;
- (id)albumAdaptive;
- (void)setAlbumAdaptive:(id)arg0;
- (void)setCommentRow:(long long)arg0;
- (id)adLabelPositionModel;
- (void)setAdLabelPositionModel:(id)arg0;
- (void)setIsWeakStyle:(BOOL)arg0;
- (id)componentDisplayControl;
- (void)setComponentDisplayControl:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
