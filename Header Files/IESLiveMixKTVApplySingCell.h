//
//     Generated by private class-dump
//

@class IESLiveMultiKTVMidiTagView, IESLiveSongWaitingUser, UIImageView, IESLiveApplyItem, UILabel, UIButton;
@protocol IESLiveMixKTVApplySingCellDelegate;

@interface IESLiveMixKTVApplySingCell : IESLiveListViewCell {
    id<IESLiveMixKTVApplySingCellDelegate> _delegate;
    IESLiveSongWaitingUser *_userModel;
    IESLiveApplyItem *_applyItem;
    UIImageView *_userImageView;
    UIImageView *_genderImageView;
    UIImageView *_singIcon;
    UILabel *_userLabel;
    UILabel *_applyLabel;
    UIButton *_agreeButton;
    UIButton *_cancelButton;
    IESLiveMultiKTVMidiTagView *_midiTagIcon;
}

@property (retain, nonatomic) UIImageView *userImageView;
@property (retain, nonatomic) UIImageView *genderImageView;
@property (retain, nonatomic) UIImageView *singIcon;
@property (retain, nonatomic) UILabel *userLabel;
@property (retain, nonatomic) UILabel *applyLabel;
@property (retain, nonatomic) UIButton *agreeButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) IESLiveMultiKTVMidiTagView *midiTagIcon;
@property (weak, nonatomic) id<IESLiveMixKTVApplySingCellDelegate> delegate;
@property (retain, nonatomic) IESLiveSongWaitingUser *userModel;
@property (retain, nonatomic) IESLiveApplyItem *applyItem;

- (void)didClickCell;
- (id)userImageView;
- (void)setUserImageView:(id)arg0;
- (id)agreeButton;
- (void)setAgreeButton:(id)arg0;
- (id)applyLabel;
- (void)setApplyLabel:(id)arg0;
- (id)genderImageView;
- (void)setGenderImageView:(id)arg0;
- (void)p_setupUIs;
- (id)applyItem;
- (void)renderWithItem:(id)arg0 withIndex:(long long)arg1;
- (void)updateTypeIsAnchor:(BOOL)arg0 isSelf:(BOOL)arg1;
- (void)setSingIcon:(id)arg0;
- (id)singIcon;
- (void)didClickAgree;
- (void)setApplyItem:(id)arg0;
- (id)midiTagIcon;
- (void)setMidiTagIcon:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)cancelButton;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)userLabel;
- (void)setUserLabel:(id)arg0;

@end