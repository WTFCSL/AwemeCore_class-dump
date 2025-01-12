//
//     Generated by private class-dump
//

@class UIStackView, UIImageView, IESLivePreAnnouncementViewModel, UILabel, UIView, UIButton;

@interface IESLivePreAnnouncementEditView : UIView {
    id /* block */ _editButtonBlock;
    id /* block */ _pushButtonBlock;
    UIImageView *_backgroudImage;
    UILabel *_titleLabel;
    UIButton *_editButton;
    UILabel *_appointmentPushGuideLabel;
    UILabel *_appointmentEditGuideLabel;
    UIView *_redLineView;
    UILabel *_dateTimeLabel;
    UILabel *_introduceLabel;
    UIStackView *_avatorIconView;
    UIImageView *_moreIcon;
    UILabel *_appointmentInfo;
    UIButton *_pushButton;
    UIImageView *_firstPushTipsImageView;
    UILabel *_firstPushTipsLbl;
    IESLivePreAnnouncementViewModel *_viewModel;
}

@property (retain, nonatomic) UIImageView *backgroudImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *editButton;
@property (retain, nonatomic) UILabel *appointmentPushGuideLabel;
@property (retain, nonatomic) UILabel *appointmentEditGuideLabel;
@property (retain, nonatomic) UIView *redLineView;
@property (retain, nonatomic) UILabel *dateTimeLabel;
@property (retain, nonatomic) UILabel *introduceLabel;
@property (retain, nonatomic) UIStackView *avatorIconView;
@property (retain, nonatomic) UIImageView *moreIcon;
@property (retain, nonatomic) UILabel *appointmentInfo;
@property (retain, nonatomic) UIButton *pushButton;
@property (retain, nonatomic) UIImageView *firstPushTipsImageView;
@property (retain, nonatomic) UILabel *firstPushTipsLbl;
@property (retain, nonatomic) IESLivePreAnnouncementViewModel *viewModel;
@property (copy, nonatomic) id /* block */ editButtonBlock;
@property (copy, nonatomic) id /* block */ pushButtonBlock;

- (id)backgroudImage;
- (void)setBackgroudImage:(id)arg0;
- (id)moreIcon;
- (void)setMoreIcon:(id)arg0;
- (void)setDateTimeLabel:(id)arg0;
- (id)appointmentInfo;
- (void)setAppointmentInfo:(id)arg0;
- (void)setIntroduceLabel:(id)arg0;
- (id)introduceLabel;
- (void)updateContentWithViewModel:(id)arg0;
- (void)setRedLineView:(id)arg0;
- (id)redLineView;
- (id)appointmentPushGuideLabel;
- (id)appointmentEditGuideLabel;
- (id)pushButton;
- (id)avatorIconView;
- (void)renderAvatorWithImageArray:(id)arg0;
- (void)renderPushButton:(id)arg0;
- (void)renderFirstPushView;
- (id)firstPushTipsImageView;
- (id)firstPushTipsLbl;
- (void)setAvatorIconView:(id)arg0;
- (BOOL)needShowFirstPushTips;
- (void)editButtonAction;
- (void)pushButtonAction;
- (id /* block */)editButtonBlock;
- (id /* block */)pushButtonBlock;
- (void)setEditButtonBlock:(id /* block */)arg0;
- (void)setPushButtonBlock:(id /* block */)arg0;
- (void)setAppointmentPushGuideLabel:(id)arg0;
- (void)setAppointmentEditGuideLabel:(id)arg0;
- (void)setPushButton:(id)arg0;
- (void)setFirstPushTipsImageView:(id)arg0;
- (void)setFirstPushTipsLbl:(id)arg0;
- (void)dismissAction;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setEditButton:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)editButton;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;
- (id)dateTimeLabel;

@end
