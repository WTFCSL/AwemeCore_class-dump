//
//     Generated by private class-dump
//

@class AWECommentAnchorModel;

@interface AWEPlayInteractionBulletElementViewModel : AWEPlayInteractionBaseElementViewModel {
    AWECommentAnchorModel *_anchorModel;
}

@property (retain, nonatomic) AWECommentAnchorModel *anchorModel;

- (id)anchorModel;
- (void)setAnchorModel:(id)arg0;
- (void)trackAnchorEntranceShow;
- (void)trackShowCommentPanel:(id)arg0;
- (id)typeStringForGeneralAnchor;
- (void)onBarrageView:(id)arg0 clickedAt:(struct CGPoint { double x0; double x1; })arg1;
- (void)showCommentPanelForRichAwemeDetailWithInsertIds:(id)arg0 isComment:(BOOL)arg1;
- (void)showCommentPanelWithInsertIds:(id)arg0 enterMethod:(id)arg1 isComment:(BOOL)arg2;
- (void)transferToUserProfile:(id)arg0 enterMethod:(id)arg1;
- (void)showCoinPanelWithInsertIds:(id)arg0 enterMethod:(id)arg1;
- (void)showGoldLikePanelWithInsertIDs:(id)arg0 enterMethod:(id)arg1;
- (void)transferToDislikeUser:(id)arg0;
- (void)onAnchorClicked;
- (void).cxx_destruct;
- (void)reset;

@end