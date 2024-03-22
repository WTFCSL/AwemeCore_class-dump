//
//     Generated by private class-dump
//

@class LSIMCommonModalViewController, UIImageView, UILabel, LSIMBizConversation, UIView;

@interface LSIMSettingsMoreModalView : UIView {
    LSIMCommonModalViewController *_modalVC;
    LSIMBizConversation *_conversation;
    id /* block */ _leaveBlock;
    UILabel *_groupNameLabel;
    UILabel *_groupCountLabel;
    UIImageView *_closeImageView;
    UIView *_containerView;
    UILabel *_leaveLabel;
    UIImageView *_minusImageView;
}

@property (retain, nonatomic) LSIMBizConversation *conversation;
@property (copy, nonatomic) id /* block */ leaveBlock;
@property (retain, nonatomic) UILabel *groupNameLabel;
@property (retain, nonatomic) UILabel *groupCountLabel;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *leaveLabel;
@property (retain, nonatomic) UIImageView *minusImageView;
@property (weak, nonatomic) LSIMCommonModalViewController *modalVC;

+ (long long)modalViewHeight;

- (void)initView;
- (id)groupNameLabel;
- (void)setLeaveBlock:(id /* block */)arg0;
- (void)setModalVC:(id)arg0;
- (id)modalVC;
- (void)closeImageViewTapped;
- (id)initWithConversation:(id)arg0 leaveClickBlock:(id /* block */)arg1;
- (id)groupCountLabel;
- (id)leaveLabel;
- (id /* block */)leaveBlock;
- (void)leavelGroupTapped;
- (void)setGroupNameLabel:(id)arg0;
- (void)setGroupCountLabel:(id)arg0;
- (void)setLeaveLabel:(id)arg0;
- (void)setMinusImageView:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)contentView;
- (id)containerView;
- (id)conversation;
- (void)setConversation:(id)arg0;
- (id)minusImageView;
- (id)closeImageView;
- (void)setCloseImageView:(id)arg0;

@end
