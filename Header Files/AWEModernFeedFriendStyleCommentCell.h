//
//     Generated by private class-dump
//

@class YYLabel, AWEFriendStyleCommentCellFrame, NSString;

@interface AWEModernFeedFriendStyleCommentCell : AWEFriendStyleBaseCell <UIGestureRecognizerDelegate> {
    YYLabel *_authorLabel;
    YYLabel *_moreLabel;
    YYLabel *_contentLabel;
    AWEFriendStyleCommentCellFrame *_commentCellFrame;
    id /* block */ _highlightTapAction;
}

@property (retain, nonatomic) YYLabel *authorLabel;
@property (retain, nonatomic) YYLabel *moreLabel;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) AWEFriendStyleCommentCellFrame *commentCellFrame;
@property (copy, nonatomic) id /* block */ highlightTapAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAuthorLabel:(id)arg0;
- (id)authorLabel;
- (void)setHighlightTapAction:(id /* block */)arg0;
- (id /* block */)highlightTapAction;
- (void)setCommentCellFrame:(id)arg0;
- (id)commentCellFrame;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1 isInsStyle:(BOOL)arg2;
- (void)didTapContainerView:(id)arg0;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)moreLabel;
- (void)setMoreLabel:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;

@end
