//
//     Generated by private class-dump
//

@class UIStackView, UIButton, UIImageView, AWEUserModel, UILabel, NSObject, UIView;
@protocol AFDCloseFriendsRecommendCardViewDelegate, AWEIMConsecutiveChatStateViewProtocol;

@interface AFDCloseFriendsRecommendCardView : UIView {
    AWEUserModel *_userModel;
    NSObject<AFDCloseFriendsRecommendCardViewDelegate> *_delegate;
    UIImageView *_avatarImageView;
    UIStackView *_contentStackView;
    UIStackView *_nameStackerView;
    UILabel *_nameLabel;
    UIView<AWEIMConsecutiveChatStateViewProtocol> *_consecutiveChatStateView;
    UILabel *_reasonLabel;
    UIView *_separatorView;
    UIButton *_relationChangeButton;
    UIButton *_removeButton;
}

@property (weak, nonatomic) NSObject<AFDCloseFriendsRecommendCardViewDelegate> *delegate;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) UIStackView *nameStackerView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView<AWEIMConsecutiveChatStateViewProtocol> *consecutiveChatStateView;
@property (retain, nonatomic) UILabel *reasonLabel;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIButton *relationChangeButton;
@property (retain, nonatomic) UIButton *removeButton;
@property (retain, nonatomic) AWEUserModel *userModel;

- (id)consecutiveChatStateView;
- (id)nameStackerView;
- (BOOL)isShowingConsecutiveState;
- (void)setNameStackerView:(id)arg0;
- (void)setConsecutiveChatStateView:(id)arg0;
- (id)relationChangeButton;
- (void)updateRelationChangeButton;
- (void)updateConsecutiveChatState;
- (void)didGotoProfilePage;
- (void)didTapRelationChangeButton;
- (void)didTapRemoveButton;
- (id)initWithDelegate:(id)arg0 userModel:(id)arg1;
- (void)updateContentWithUserModel:(id)arg0;
- (void)setRelationChangeButton:(id)arg0;
- (void)updateContent;
- (void).cxx_destruct;
- (void)setSeparatorView:(id)arg0;
- (void)commonInit;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (id)delegate;
- (id)nameLabel;
- (id)separatorView;
- (void)setDelegate:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (id)contentStackView;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)setContentStackView:(id)arg0;
- (id)reasonLabel;
- (void)setReasonLabel:(id)arg0;
- (id)removeButton;
- (void)setRemoveButton:(id)arg0;

@end
