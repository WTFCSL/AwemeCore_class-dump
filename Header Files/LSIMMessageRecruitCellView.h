//
//     Generated by private class-dump
//

@class YYLabel, UIStackView, UIImageView, UIView, UILabel, LSIMMessageCardRecruitCellVM;

@interface LSIMMessageRecruitCellView : LSIMChatDetailBaseCellView {
    UIView *_cardView;
    UIImageView *_mainImageView;
    UILabel *_titleLabel;
    UIImageView *_arrowImageView;
    YYLabel *_tagLabel;
    UIStackView *_detailStackView;
    UILabel *_descLabel;
    UILabel *_leftDetailLabel;
    UIView *_separtorView;
    UILabel *_rightDetailLabel;
}

@property (retain, nonatomic) LSIMMessageCardRecruitCellVM *cellVM;
@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UIImageView *mainImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) YYLabel *tagLabel;
@property (retain, nonatomic) UIStackView *detailStackView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *leftDetailLabel;
@property (retain, nonatomic) UIView *separtorView;
@property (retain, nonatomic) UILabel *rightDetailLabel;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id)mainImageView;
- (void)setMainImageView:(id)arg0;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (void)setupContainerView;
- (void)handleContainerTapGesture:(id)arg0;
- (void)configWithCellVM:(id)arg0;
- (id)detailStackView;
- (id)separtorView;
- (id)leftDetailLabel;
- (id)rightDetailLabel;
- (void)setDetailStackView:(id)arg0;
- (void)setLeftDetailLabel:(id)arg0;
- (void)setSepartorView:(id)arg0;
- (void)setRightDetailLabel:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)cardView;
- (void)setCardView:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end