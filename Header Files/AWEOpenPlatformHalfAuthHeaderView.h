//
//     Generated by private class-dump
//

@class UITextView, NSString, DUXAvatar, UILabel, UIView;

@interface AWEOpenPlatformHalfAuthHeaderView : UIView <UITextViewDelegate> {
    UILabel *_contentLabel;
    UITextView *_commentTextView;
    UILabel *_usernameLabel;
    UIView *_lineView;
    DUXAvatar *_avatarImageView;
    long long _authUICase;
}

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UITextView *commentTextView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) DUXAvatar *avatarImageView;
@property (retain, nonatomic) UILabel *usernameLabel;
@property (nonatomic) long long authUICase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commentTextColor;
+ (id)contentAttrStr:(id)arg0;

- (id)usernameLabel;
- (void)setUsernameLabel:(id)arg0;
- (long long)authUICase;
- (void)setAuthUICase:(long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 authUICase:(long long)arg1;
- (struct CGSize { double x0; double x1; })fillCommentWithText:(id)arg0;
- (id)commentTextView;
- (id)commentAttrStr:(id)arg0;
- (void)trackDidShowHyperLinkIfNeededWithComment:(id)arg0;
- (void)setCommentTextView:(id)arg0;
- (void)configWithClient:(id)arg0 scope:(id)arg1 descText:(id)arg2 openData:(id)arg3 isHideLine:(BOOL)arg4;
- (BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2 interaction:(long long)arg3;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)textViewShouldBeginEditing:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;

@end
