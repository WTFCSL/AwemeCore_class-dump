//
//     Generated by private class-dump
//

@class UILabel, IESLiveImageView;

@interface HTSLiveGuideFaceStickerAuthorInfoView : UIView {
    UILabel *_createdByLabel;
    IESLiveImageView *_iconImageView;
    UILabel *_creatorNameLabel;
}

@property (retain, nonatomic) UILabel *createdByLabel;
@property (retain, nonatomic) IESLiveImageView *iconImageView;
@property (retain, nonatomic) UILabel *creatorNameLabel;

- (void)updateWithUserModel:(id)arg0;
- (id)createdByLabel;
- (id)creatorNameLabel;
- (void)setCreatedByLabel:(id)arg0;
- (void)setCreatorNameLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)setupUI;

@end