//
//     Generated by private class-dump
//

@class CSJMaterialMeta, UIImageView, UILabel, UIButton;
@protocol CSJVideoDetailAppInfoViewDelegate;

@interface CSJVideoDetailAppInfoView : UIView {
    id<CSJVideoDetailAppInfoViewDelegate> _delegate;
    UIImageView *_adAppIconImageView;
    UILabel *_adTitleLabel;
    UILabel *_adDescriptionLabel;
    UIButton *_adDownloadButton;
    CSJMaterialMeta *_materialMeta;
}

@property (retain, nonatomic) UIImageView *adAppIconImageView;
@property (retain, nonatomic) UILabel *adTitleLabel;
@property (retain, nonatomic) UILabel *adDescriptionLabel;
@property (retain, nonatomic) UIButton *adDownloadButton;
@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (weak, nonatomic) id<CSJVideoDetailAppInfoViewDelegate> delegate;

- (id)materialMeta;
- (void)setMaterialMeta:(id)arg0;
- (void)setupSubViews;
- (id)adAppIconImageView;
- (id)adTitleLabel;
- (id)adDescriptionLabel;
- (id)adDownloadButton;
- (id)c_xyDict_secWithTapView:(id)arg0;
- (void)adAction:(id)arg0;
- (void)setAdAppIconImageView:(id)arg0;
- (void)setAdTitleLabel:(id)arg0;
- (void)setAdDescriptionLabel:(id)arg0;
- (void)setAdDownloadButton:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (id)initWithMaterial:(id)arg0;

@end