//
//     Generated by private class-dump
//

@class HTSLiveUser, NSString, NSArray, IESLiveCommentPanelReplyTipModel;

@interface IESLiveCommentDraftModel : NSObject {
    NSString *_commentDraft;
    HTSLiveUser *_referredUserDraft;
    NSArray *_atUserArrayDraft;
    IESLiveCommentPanelReplyTipModel *_replyTipModelDraft;
}

@property (copy, nonatomic) NSString *commentDraft;
@property (retain, nonatomic) HTSLiveUser *referredUserDraft;
@property (copy, nonatomic) NSArray *atUserArrayDraft;
@property (retain, nonatomic) IESLiveCommentPanelReplyTipModel *replyTipModelDraft;

- (void)setReferredUserDraft:(id)arg0;
- (void)setAtUserArrayDraft:(id)arg0;
- (void)setReplyTipModelDraft:(id)arg0;
- (id)replyTipModelDraft;
- (id)referredUserDraft;
- (id)atUserArrayDraft;
- (id)commentDraft;
- (void)setCommentDraft:(id)arg0;
- (void).cxx_destruct;

@end
