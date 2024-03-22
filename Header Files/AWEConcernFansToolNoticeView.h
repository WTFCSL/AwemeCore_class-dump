//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWEAwemeModel, UIView, UILabel, AWEButton;
@protocol AWEConcernNoticeDelegate;

@interface AWEConcernFansToolNoticeView : UIView <AWEConcernNoticeViewDelegate> {
    id<AWEConcernNoticeDelegate> _delegate;
    UIView *_contentView;
    AWEAwemeModel *_awemeModel;
    UIImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    AWEButton *_heatButton;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWEButton *heatButton;
@property (weak, nonatomic) id<AWEConcernNoticeDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (id)initWithAwemeModel:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)__setupUI;
- (void)configNoticeViewWithModel:(id)arg0;
- (id)__createShadowView;
- (id)heatButton;
- (id)__createIndicatorView;
- (void)trackWithWindowShow;
- (void)setHeatButton:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)contentView;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;

@end
