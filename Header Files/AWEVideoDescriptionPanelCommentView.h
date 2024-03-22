//
//     Generated by private class-dump
//

@class YYLabel, NSMutableAttributedString, UIImageView, UILabel, UIView, UIButton;

@interface AWEVideoDescriptionPanelCommentView : UIView {
    BOOL _hasRequestFinished;
    UIView *_containerView;
    UILabel *_countLabel;
    UIButton *_clickButton;
    UIImageView *_userAvartarView;
    UILabel *_authorLabel;
    YYLabel *_commentContent;
    NSMutableAttributedString *_commentContentString;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIButton *clickButton;
@property (retain, nonatomic) UIImageView *userAvartarView;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) YYLabel *commentContent;
@property (retain, nonatomic) NSMutableAttributedString *commentContentString;
@property (nonatomic) BOOL hasRequestFinished;

- (void)setAuthorLabel:(id)arg0;
- (id)authorLabel;
- (void)setClickButton:(id)arg0;
- (id)clickButton;
- (id)commentContent;
- (void)setCommentContent:(id)arg0;
- (id)userAvartarView;
- (struct CGSize { double x0; double x1; })commentViewSize;
- (BOOL)hasRequestFinished;
- (void)setCommentContentString:(id)arg0;
- (id)commentContentString;
- (void)updateWithCommentModel:(id)arg0;
- (void)setHasRequestFinished:(BOOL)arg0;
- (double)getCommentViewHeight;
- (void)requestComment:(id)arg0 completion:(id /* block */)arg1;
- (void)setUserAvartarView:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)setupUI;
- (id)countLabel;
- (void)setCountLabel:(id)arg0;
- (void)updateWithModel:(id)arg0;

@end