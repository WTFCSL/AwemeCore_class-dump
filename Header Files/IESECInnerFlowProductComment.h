//
//     Generated by private class-dump
//

@class NSArray, IESECInnerFlowProductCommentButton;

@interface IESECInnerFlowProductComment : IESECBaseApiModel {
    BOOL _showPreview;
    NSArray *_productComments;
    NSArray *_storeComments;
    IESECInnerFlowProductCommentButton *_productCommentButton;
    IESECInnerFlowProductCommentButton *_storeCommentButton;
    long long _count;
}

@property (copy, nonatomic) NSArray *productComments;
@property (copy, nonatomic) NSArray *storeComments;
@property (copy, nonatomic) IESECInnerFlowProductCommentButton *productCommentButton;
@property (copy, nonatomic) IESECInnerFlowProductCommentButton *storeCommentButton;
@property (nonatomic) long long count;
@property (nonatomic) BOOL showPreview;

+ (id)productCommentsJSONTransformer;
+ (id)storeCommentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)productComments;
- (void)setProductComments:(id)arg0;
- (id)storeComments;
- (void)setStoreComments:(id)arg0;
- (id)productCommentButton;
- (void)setProductCommentButton:(id)arg0;
- (id)storeCommentButton;
- (void)setStoreCommentButton:(id)arg0;
- (void)setCount:(long long)arg0;
- (void).cxx_destruct;
- (long long)count;
- (BOOL)showPreview;
- (void)setShowPreview:(BOOL)arg0;

@end
