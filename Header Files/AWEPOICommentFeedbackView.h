//
//     Generated by private class-dump
//

@class NSString, AWEPOICommentFeedbackButton, AWEPOICommentFeedbackConfig, AWEPOICommentFeedbackProvider;

@interface AWEPOICommentFeedbackView : UIView <AWEPOICommentFeedbackButtonDelegate, AWEPOICommentFeedbackProtocol> {
    AWEPOICommentFeedbackButton *_likeView;
    AWEPOICommentFeedbackButton *_dislikeView;
    id /* block */ _block;
    AWEPOICommentFeedbackConfig *_config;
}

@property (retain, nonatomic) AWEPOICommentFeedbackButton *likeView;
@property (retain, nonatomic) AWEPOICommentFeedbackButton *dislikeView;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) AWEPOICommentFeedbackConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWEPOICommentFeedbackProvider *provider;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } layoutSize;

- (id)likeView;
- (void)setLikeView:(id)arg0;
- (void)feedbackButton:(id)arg0 didChangeStatus:(unsigned long long)arg1 toStatus:(unsigned long long)arg2;
- (void)setFeedUGCItemModel:(id)arg0;
- (void)updateSkinConfig:(id)arg0;
- (id)dislikeView;
- (BOOL)hasDislike;
- (void)setDislikeView:(id)arg0;
- (BOOL)hasLike;
- (id)initWithConfig:(id)arg0 feedbackBlock:(id /* block */)arg1;
- (void)setProvider:(id)arg0;
- (void)setConfig:(id)arg0;
- (id)provider;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })layoutSize;
- (id)config;
- (void)setBlock:(id /* block */)arg0;
- (void)setup;
- (void)updateConstraints;
- (id /* block */)block;

@end