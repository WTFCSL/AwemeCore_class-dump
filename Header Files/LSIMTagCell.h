//
//     Generated by private class-dump
//

@class UILabel, LSIMTagModel;

@interface LSIMTagCell : UICollectionViewCell {
    UILabel *_tagLabel;
    LSIMTagModel *_tagModel;
}

@property (retain, nonatomic) UILabel *tagLabel;
@property (weak, nonatomic) LSIMTagModel *tagModel;

- (void)configWithModel:(id)arg0;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (void)setTagModel:(id)arg0;
- (id)tagModel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupView;

@end