//
//     Generated by private class-dump
//

@class AWECommentIntentionComponentModel;

@interface AWEPostCommentDiggResponse : AWEBaseApiModel {
    BOOL _canShowCommentCapsule;
    AWECommentIntentionComponentModel *_commentIntentionComponent;
}

@property (retain, nonatomic) AWECommentIntentionComponentModel *commentIntentionComponent;
@property (nonatomic) BOOL canShowCommentCapsule;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)canShowCommentCapsule;
- (id)commentIntentionComponent;
- (void)setCommentIntentionComponent:(id)arg0;
- (void)setCanShowCommentCapsule:(BOOL)arg0;
- (void).cxx_destruct;

@end
