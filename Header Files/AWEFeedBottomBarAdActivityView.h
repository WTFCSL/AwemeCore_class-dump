//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWEAwemeModel, UILabel, UITapGestureRecognizer;

@interface AWEFeedBottomBarAdActivityView : UIView <AWEFeedCommerceBottomTipProtocol> {
    NSString *referString;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIImageView *_arrowImageView;
    UITapGestureRecognizer *_recognizer;
    AWEAwemeModel *_awemeModel;
    NSString *_awemeID;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UITapGestureRecognizer *recognizer;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)referString;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (void)configureWithModel:(id)arg0 referString:(id)arg1;
- (void)jumpAction;
- (void)configureUI;
- (void)trackAdBottomBarEventWithLabel:(id)arg0;
- (void)trackRelatedSearchShowIfNeeded;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (id)bgColor;
- (id)recognizer;
- (void)setRecognizer:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end