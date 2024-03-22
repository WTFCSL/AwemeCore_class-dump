//
//     Generated by private class-dump
//

@class UIStackView, IESGCPEvaluationDetailUserInfoBaseView, UIImageView, UILabel, IESGCPEvaluationItem, UIView, UIButton;

@interface IESGCPEvaluationDetailUserInfoView : UIView {
    BOOL _needShowMoreButton;
    id /* block */ _moreHandler;
    IESGCPEvaluationDetailUserInfoBaseView *_userInfoBaseView;
    IESGCPEvaluationItem *_evaluationItem;
    unsigned long long _style;
    UIStackView *_rightStackView;
    UIImageView *_selectedEvaImageView;
    UIButton *_moreButton;
    UIView *_gameEvaluationUserView;
    UIImageView *_gameEvaluationUserImageView;
    UILabel *_gameEvaluationUserLabel;
    UIView *_datePhoneView;
    UILabel *_dateLabel;
    UILabel *_phoneInfoLabel;
}

@property (retain, nonatomic) IESGCPEvaluationDetailUserInfoBaseView *userInfoBaseView;
@property (retain, nonatomic) IESGCPEvaluationItem *evaluationItem;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIStackView *rightStackView;
@property (retain, nonatomic) UIImageView *selectedEvaImageView;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIView *gameEvaluationUserView;
@property (retain, nonatomic) UIImageView *gameEvaluationUserImageView;
@property (retain, nonatomic) UILabel *gameEvaluationUserLabel;
@property (retain, nonatomic) UIView *datePhoneView;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UILabel *phoneInfoLabel;
@property (copy, nonatomic) id /* block */ moreHandler;
@property (copy, nonatomic) id /* block */ iconTapHandler;
@property (nonatomic) BOOL needShowMoreButton;

- (id)userIconView;
- (void)moreButtonDidClicked;
- (id)rightStackView;
- (void)setRightStackView:(id)arg0;
- (id)evaluationItem;
- (void)setIconTapHandler:(id /* block */)arg0;
- (BOOL)needShowMoreButton;
- (void)setNeedShowMoreButton:(BOOL)arg0;
- (id /* block */)moreHandler;
- (void)setMoreHandler:(id /* block */)arg0;
- (id /* block */)iconTapHandler;
- (void)updateWithEvaluationItem:(id)arg0 style:(unsigned long long)arg1;
- (void)setEvaluationItem:(id)arg0;
- (void)configStyle;
- (void)configIfShow;
- (id)userInfoBaseView;
- (id)gameEvaluationUserView;
- (id)gameEvaluationUserImageView;
- (id)gameEvaluationUserLabel;
- (id)datePhoneView;
- (id)phoneInfoLabel;
- (id)selectedEvaImageView;
- (void)setUserInfoBaseView:(id)arg0;
- (void)setSelectedEvaImageView:(id)arg0;
- (void)setGameEvaluationUserView:(id)arg0;
- (void)setGameEvaluationUserImageView:(id)arg0;
- (void)setGameEvaluationUserLabel:(id)arg0;
- (void)setDatePhoneView:(id)arg0;
- (void)setPhoneInfoLabel:(id)arg0;
- (unsigned long long)style;
- (void).cxx_destruct;
- (id)moreButton;
- (void)setMoreButton:(id)arg0;
- (void)setStyle:(unsigned long long)arg0;
- (id)dateLabel;
- (void)setDateLabel:(id)arg0;
- (void)setupLayout;

@end