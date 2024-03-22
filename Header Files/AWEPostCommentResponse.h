//
//     Generated by private class-dump
//

@class AWECommentLynxEggModel, NSString, AWEURLModel, AWECommentLiteInspireInfoModel, AWECommentSurpriseEggModel, AWECommentModel, AWECommentUserGuideInfoModel, AWECommentIntentionComponentModel;

@interface AWEPostCommentResponse : AWEBaseApiModel {
    BOOL _isPartSeeItem;
    BOOL _commentMarked;
    AWECommentModel *_comment;
    NSString *_labelInfo;
    NSString *_verifyType;
    AWECommentSurpriseEggModel *_commentEasterEgg;
    AWECommentLynxEggModel *_commentLynxEgg;
    AWECommentUserGuideInfoModel *_commentUserGuideInfo;
    AWECommentIntentionComponentModel *_commentIntentionalComponent;
    AWEURLModel *_labelPrivate;
    AWECommentLiteInspireInfoModel *_liteCommentInspireInfo;
    long long _publishRetryInterval;
}

@property (retain, nonatomic) AWECommentModel *comment;
@property (copy, nonatomic) NSString *labelInfo;
@property (copy, nonatomic) NSString *verifyType;
@property (retain, nonatomic) AWECommentSurpriseEggModel *commentEasterEgg;
@property (retain, nonatomic) AWECommentLynxEggModel *commentLynxEgg;
@property (retain, nonatomic) AWECommentUserGuideInfoModel *commentUserGuideInfo;
@property (retain, nonatomic) AWECommentIntentionComponentModel *commentIntentionalComponent;
@property (nonatomic) BOOL isPartSeeItem;
@property (nonatomic) BOOL commentMarked;
@property (retain, nonatomic) AWEURLModel *labelPrivate;
@property (retain, nonatomic) AWECommentLiteInspireInfoModel *liteCommentInspireInfo;
@property (nonatomic) long long publishRetryInterval;

+ (id)JSONKeyPathsByPropertyKey;

- (id)commentUserGuideInfo;
- (void)setCommentMarked:(BOOL)arg0;
- (BOOL)commentMarked;
- (id)labelPrivate;
- (BOOL)isPartSeeItem;
- (long long)publishRetryInterval;
- (id)commentEasterEgg;
- (id)commentLynxEgg;
- (void)setLabelPrivate:(id)arg0;
- (void)setCommentUserGuideInfo:(id)arg0;
- (void)setCommentEasterEgg:(id)arg0;
- (void)setCommentLynxEgg:(id)arg0;
- (void)setPublishRetryInterval:(long long)arg0;
- (id)liteCommentInspireInfo;
- (id)commentIntentionalComponent;
- (void)setCommentIntentionalComponent:(id)arg0;
- (void)setIsPartSeeItem:(BOOL)arg0;
- (void)setLiteCommentInspireInfo:(id)arg0;
- (void).cxx_destruct;
- (id)comment;
- (id)labelInfo;
- (void)setLabelInfo:(id)arg0;
- (void)setComment:(id)arg0;
- (id)verifyType;
- (void)setVerifyType:(id)arg0;

@end