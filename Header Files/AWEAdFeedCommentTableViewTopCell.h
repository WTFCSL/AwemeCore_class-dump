//
//     Generated by private class-dump
//

@class UIView, UILongPressGestureRecognizer, NSString, UIImageView, YYLabel, AWEAdFeedCommentDetailViewModel, UILabel, AWECommerceInsetsLabel;
@protocol AWEAdFeedCommentTableViewTopCellActionDelegate;

@interface AWEAdFeedCommentTableViewTopCell : UITableViewCell <UIGestureRecognizerDelegate> {
    id<AWEAdFeedCommentTableViewTopCellActionDelegate> _delegate;
    UIView *_avatarBorderView;
    UIImageView *_avatarImageView;
    UILabel *_userNameLabel;
    AWECommerceInsetsLabel *_tagLable;
    YYLabel *_commentContentLabel;
    UILabel *_timeLabel;
    UILongPressGestureRecognizer *_longPressGesture;
    AWEAdFeedCommentDetailViewModel *_viewModel;
}

@property (retain, nonatomic) UIView *avatarBorderView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) AWECommerceInsetsLabel *tagLable;
@property (retain, nonatomic) YYLabel *commentContentLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (retain, nonatomic) AWEAdFeedCommentDetailViewModel *viewModel;
@property (weak, nonatomic) id<AWEAdFeedCommentTableViewTopCellActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userNameLabel;
- (void)setUserNameLabel:(id)arg0;
- (id)avatarBorderView;
- (id)commentContentLabel;
- (void)setAvatarBorderView:(id)arg0;
- (void)setCommentContentLabel:(id)arg0;
- (void)onFeedCommentUIThemeChangeNotification;
- (id)tagLable;
- (void)handleLongPressedEvent;
- (void)avatarDidClicked:(id)arg0;
- (void)nameDidClicked:(id)arg0;
- (void)setTagLable:(id)arg0;
- (id)longPressGesture;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)setViewModel:(id)arg0;
- (void)setTimeLabel:(id)arg0;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (void)setHighlighted:(BOOL)arg0;
- (id)timeLabel;
- (void)handleLongPressGesture:(id)arg0;
- (void)setLongPressGesture:(id)arg0;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)configureWithViewModel:(id)arg0;

@end
