//
//     Generated by private class-dump
//

@class UIImageView, AWEAwemeModel, UILabel, UIView;

@interface AWENearbyC2FeedInteractionView : UIView {
    UIView *_infoView;
    UIView *_authorContentView;
    UIImageView *_authorImageView;
    UILabel *_authorNameLabel;
    UIImageView *_infoIconImageView;
    UILabel *_infoNumberLabel;
    AWEAwemeModel *_model;
}

@property (retain, nonatomic) UIView *authorContentView;
@property (retain, nonatomic) UIImageView *authorImageView;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UIImageView *infoIconImageView;
@property (retain, nonatomic) UILabel *infoNumberLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIView *infoView;

- (void)setAuthorNameLabel:(id)arg0;
- (id)authorNameLabel;
- (id)authorImageView;
- (void)setAuthorImageView:(id)arg0;
- (void)updateInfoWithModel:(id)arg0;
- (id)authorContentView;
- (id)infoIconImageView;
- (id)infoNumberLabel;
- (id)infoNumberWithCount:(long long)arg0;
- (void)handleDiggAcitonWithStatus:(BOOL)arg0;
- (void)updateDiggCount:(long long)arg0;
- (void)setAuthorContentView:(id)arg0;
- (void)setInfoIconImageView:(id)arg0;
- (void)setInfoNumberLabel:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setupUI;
- (id)infoView;
- (void)setInfoView:(id)arg0;

@end
