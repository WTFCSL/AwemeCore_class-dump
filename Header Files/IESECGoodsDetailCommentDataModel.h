//
//     Generated by private class-dump
//

@class IESECMediaBoxElement, NSArray, IESECMediaScrollBoxElement, IESECMultiTextWithIconElement, IESECLongContentLabelElement, IESECTextWithIconElement, IESECTextElement;

@interface IESECGoodsDetailCommentDataModel : IESECBaseApiModel {
    BOOL _hasComment;
    BOOL _hasStoreComment;
    IESECLongContentLabelElement *_commentTitle;
    IESECMultiTextWithIconElement *_commentTags;
    IESECMultiTextWithIconElement *_commentUser;
    IESECTextElement *_commentDesc;
    IESECMediaScrollBoxElement *_commentMedias;
    IESECLongContentLabelElement *_buyersShowTitle;
    IESECMediaScrollBoxElement *_buyersShowMedias;
    IESECLongContentLabelElement *_askAroundTitle;
    NSArray *_askAroundItems;
    IESECLongContentLabelElement *_storeCommentTitle;
    IESECMultiTextWithIconElement *_storeCommentTags;
    IESECLongContentLabelElement *_kolReviewTitle;
    IESECTextWithIconElement *_kolReviewUser;
    IESECTextElement *_kolReviewContent;
    NSArray *_kolReviewStats;
    IESECMediaBoxElement *_kolReviewMedia;
    NSArray *_multiComments;
    NSArray *_kolEvaluationElemArray;
}

@property (retain, nonatomic) IESECLongContentLabelElement *commentTitle;
@property (retain, nonatomic) IESECMultiTextWithIconElement *commentTags;
@property (retain, nonatomic) IESECMultiTextWithIconElement *commentUser;
@property (retain, nonatomic) IESECTextElement *commentDesc;
@property (retain, nonatomic) IESECMediaScrollBoxElement *commentMedias;
@property (retain, nonatomic) IESECLongContentLabelElement *buyersShowTitle;
@property (retain, nonatomic) IESECMediaScrollBoxElement *buyersShowMedias;
@property (retain, nonatomic) IESECLongContentLabelElement *askAroundTitle;
@property (retain, nonatomic) NSArray *askAroundItems;
@property (retain, nonatomic) IESECLongContentLabelElement *storeCommentTitle;
@property (retain, nonatomic) IESECMultiTextWithIconElement *storeCommentTags;
@property (retain, nonatomic) IESECLongContentLabelElement *kolReviewTitle;
@property (retain, nonatomic) IESECTextWithIconElement *kolReviewUser;
@property (retain, nonatomic) IESECTextElement *kolReviewContent;
@property (copy, nonatomic) NSArray *kolReviewStats;
@property (retain, nonatomic) IESECMediaBoxElement *kolReviewMedia;
@property (retain, nonatomic) NSArray *multiComments;
@property (copy, nonatomic) NSArray *kolEvaluationElemArray;
@property (nonatomic) BOOL hasComment;
@property (nonatomic) BOOL hasStoreComment;

+ (id)kolReviewStatsJSONTransformer;
+ (id)kolEvaluationElemArrayJSONTransformer;
+ (id)askAroundItemsJSONTransformer;
+ (id)multiCommentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)commentTitle;
- (id)commentTags;
- (void)setCommentTitle:(id)arg0;
- (void)setCommentTags:(id)arg0;
- (id)commentUser;
- (void)setCommentUser:(id)arg0;
- (id)commentDesc;
- (void)setCommentDesc:(id)arg0;
- (id)commentMedias;
- (void)setCommentMedias:(id)arg0;
- (id)buyersShowTitle;
- (void)setBuyersShowTitle:(id)arg0;
- (id)buyersShowMedias;
- (void)setBuyersShowMedias:(id)arg0;
- (id)askAroundTitle;
- (void)setAskAroundTitle:(id)arg0;
- (id)askAroundItems;
- (void)setAskAroundItems:(id)arg0;
- (id)storeCommentTitle;
- (void)setStoreCommentTitle:(id)arg0;
- (id)storeCommentTags;
- (void)setStoreCommentTags:(id)arg0;
- (id)kolReviewTitle;
- (void)setKolReviewTitle:(id)arg0;
- (id)kolReviewUser;
- (void)setKolReviewUser:(id)arg0;
- (id)kolReviewContent;
- (void)setKolReviewContent:(id)arg0;
- (id)kolReviewStats;
- (void)setKolReviewStats:(id)arg0;
- (id)kolReviewMedia;
- (void)setKolReviewMedia:(id)arg0;
- (id)multiComments;
- (void)setMultiComments:(id)arg0;
- (id)kolEvaluationElemArray;
- (void)setKolEvaluationElemArray:(id)arg0;
- (void)setHasComment:(BOOL)arg0;
- (BOOL)hasStoreComment;
- (void)setHasStoreComment:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)hasComment;

@end
