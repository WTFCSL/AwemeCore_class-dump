//
//     Generated by private class-dump
//

@class UILabel, IESLiveImageView;

@interface IESLivePinCommentMicroAppCell : IESLivePinCommentBaseCell {
    UILabel *_titleLabel;
    IESLiveImageView *_coverImgView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLiveImageView *coverImgView;

- (void)setupSubViews;
- (id)coverImgView;
- (void)setCoverImgView:(id)arg0;
- (id)paramsWithNode:(id)arg0;
- (void)configWithNode:(id)arg0 containerWidth:(double)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)prepareForReuse;
- (void)setTitleLabel:(id)arg0;

@end
