//
//     Generated by private class-dump
//

@class NSString, NSMutableSet, AFDFrequencyExitRule;

@interface AFDCommentService : HTSService <AFDCommentService> {
    NSMutableSet *_recordedAutoSearchAwemeSet;
    AFDFrequencyExitRule *_commentAutoSceneNotClickExitRule;
    AFDFrequencyExitRule *_commentAutoSceneNotShowExitRule;
    AFDFrequencyExitRule *_commentInputSceneNotClickExitRule;
    AFDFrequencyExitRule *_commentInputSceneNotShowExitRule;
}

@property (retain, nonatomic) NSMutableSet *recordedAutoSearchAwemeSet;
@property (retain, nonatomic) AFDFrequencyExitRule *commentAutoSceneNotClickExitRule;
@property (retain, nonatomic) AFDFrequencyExitRule *commentAutoSceneNotShowExitRule;
@property (retain, nonatomic) AFDFrequencyExitRule *commentInputSceneNotClickExitRule;
@property (retain, nonatomic) AFDFrequencyExitRule *commentInputSceneNotShowExitRule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commentAnchorView;
- (void)clearCommentInputSceneNotClickCount;
- (void)clearAutoSceneNotClickCount;
- (BOOL)enableCommentInputSearchSticker;
- (void)addCommentInputSceneNotClickCount;
- (BOOL)enableOpenCommentPanelAutoSearchSticker:(id)arg0;
- (id)forbidCommentPanelAutoSearchPage;
- (void)trackCommentTag:(id)arg0 referString:(id)arg1;
- (void)recordShowedAutoSearchSticker:(id)arg0;
- (void)addAutoSceneNotClickCount;
- (id)recordedAutoSearchAwemeSet;
- (id)commentAutoSceneNotClickExitRule;
- (id)commentAutoSceneNotShowExitRule;
- (void)setRecordedAutoSearchAwemeSet:(id)arg0;
- (id)commentInputSceneNotClickExitRule;
- (id)commentInputSceneNotShowExitRule;
- (Class)feedFastCommentViewClass;
- (id)createFeedFastCommentViewWithMaxWidth:(double)arg0 emojiType:(long long)arg1 referString:(id)arg2;
- (void)setCommentAutoSceneNotClickExitRule:(id)arg0;
- (void)setCommentAutoSceneNotShowExitRule:(id)arg0;
- (void)setCommentInputSceneNotClickExitRule:(id)arg0;
- (void)setCommentInputSceneNotShowExitRule:(id)arg0;
- (void).cxx_destruct;

@end
