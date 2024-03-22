//
//     Generated by private class-dump
//

@class UIButton, UIImageView, IESLiveInteractAnchorLinkerModel, UILabel, CAShapeLayer, UIView;

@interface IESLiveInteractAnchorLinkerItemView : UIView {
    BOOL _isSelected;
    IESLiveInteractAnchorLinkerModel *_player;
    id /* block */ _removeAction;
    id /* block */ _inviteMoreAction;
    id /* block */ _selectAction;
    id /* block */ _changeSideAction;
    UIImageView *_pendingImageView;
    UILabel *_pendingLabel;
    UIImageView *_playerAvatarView;
    CAShapeLayer *_avatarBorderLayer;
    CAShapeLayer *_playerBorderLayer;
    UIView *_waitingMaskView;
    UILabel *_playerStatusLabel;
    UIImageView *_playerGenderView;
    UIButton *_actionButton;
    UILabel *_tagLabel;
    UILabel *_playerNicknameLabel;
    UIButton *_changeActionBtn;
    struct CGSize { double width; double height; } _itemSize;
}

@property (readonly, nonatomic) IESLiveInteractAnchorLinkerModel *player;
@property (copy, nonatomic) id /* block */ removeAction;
@property (copy, nonatomic) id /* block */ inviteMoreAction;
@property (copy, nonatomic) id /* block */ selectAction;
@property (copy, nonatomic) id /* block */ changeSideAction;
@property (retain, nonatomic) UIImageView *pendingImageView;
@property (retain, nonatomic) UILabel *pendingLabel;
@property (retain, nonatomic) UIImageView *playerAvatarView;
@property (retain, nonatomic) CAShapeLayer *avatarBorderLayer;
@property (retain, nonatomic) CAShapeLayer *playerBorderLayer;
@property (retain, nonatomic) UIView *waitingMaskView;
@property (retain, nonatomic) UILabel *playerStatusLabel;
@property (retain, nonatomic) UIImageView *playerGenderView;
@property (retain, nonatomic) UIButton *actionButton;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UILabel *playerNicknameLabel;
@property (retain, nonatomic) UIButton *changeActionBtn;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;

- (void)p_removePlayer:(id)arg0;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (void)setSelectAction:(id /* block */)arg0;
- (id /* block */)selectAction;
- (void)setPendingLabel:(id)arg0;
- (id)pendingLabel;
- (id)waitingMaskView;
- (id)avatarBorderLayer;
- (void)setAvatarBorderLayer:(id)arg0;
- (void)p_clickInviteMore;
- (void)setPlayerBorderLayer:(id)arg0;
- (void)p_clickSelectAction;
- (id)playerBorderLayer;
- (id)changeActionBtn;
- (id /* block */)inviteMoreAction;
- (id /* block */)changeSideAction;
- (void)p_clickChangeAction;
- (id)initWithPlayer:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (void)setInviteMoreAction:(id /* block */)arg0;
- (void)setChangeSideAction:(id /* block */)arg0;
- (id)pendingImageView;
- (void)setPendingImageView:(id)arg0;
- (void)setWaitingMaskView:(id)arg0;
- (id)playerStatusLabel;
- (void)setPlayerStatusLabel:(id)arg0;
- (id)playerGenderView;
- (void)setPlayerGenderView:(id)arg0;
- (id)playerNicknameLabel;
- (void)setPlayerNicknameLabel:(id)arg0;
- (void)setChangeActionBtn:(id)arg0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })itemSize;
- (BOOL)isSelected;
- (id)player;
- (void)setItemSize:(struct CGSize { double x0; double x1; })arg0;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (id /* block */)removeAction;
- (void)setRemoveAction:(id /* block */)arg0;
- (id)playerAvatarView;
- (void)setPlayerAvatarView:(id)arg0;

@end
