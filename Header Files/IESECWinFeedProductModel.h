//
//     Generated by private class-dump
//

@class NSArray, IESECFeedCommentButton, NSDictionary, IESECGoodsDetailModel, NSString;

@interface IESECWinFeedProductModel : MTLModel <MTLJSONSerializing> {
    IESECGoodsDetailModel *_promotion;
    NSArray *_bulletTags;
    NSArray *_comments;
    IESECFeedCommentButton *_commentButton;
    NSDictionary *_ritTags;
}

@property (retain, nonatomic) IESECGoodsDetailModel *promotion;
@property (retain, nonatomic) NSArray *bulletTags;
@property (retain, nonatomic) NSArray *comments;
@property (retain, nonatomic) IESECFeedCommentButton *commentButton;
@property (copy, nonatomic) NSDictionary *ritTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commentsJSONTransformer;
+ (id)bulletTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)promotion;
- (void)setPromotion:(id)arg0;
- (id)commentButton;
- (void)setCommentButton:(id)arg0;
- (id)ritTags;
- (void)setRitTags:(id)arg0;
- (id)bulletTags;
- (void)setBulletTags:(id)arg0;
- (void).cxx_destruct;
- (id)comments;
- (void)setComments:(id)arg0;

@end
