//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface AWELandscapeLVPaymentTagView : UIView {
    UIView *_titleContainerView;
    UILabel *_titleLabel;
    UIView *_tagBackgroundView;
    UILabel *_tagLabel;
}

@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (retain, nonatomic) UILabel *tagLabel;

- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (id)tagBackgroundView;
- (void)setTagBackgroundView:(id)arg0;
- (void)addPanelTopPaymentTagIfNeeded:(id)arg0;
- (void)setupTopTitle:(id)arg0 albumInfo:(id)arg1 episodePageType:(long long)arg2;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)titleContainerView;
- (void)setTitleContainerView:(id)arg0;

@end
