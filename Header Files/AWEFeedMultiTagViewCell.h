//
//     Generated by private class-dump
//

@class UILabel, AWEDynamicLabel;

@interface AWEFeedMultiTagViewCell : UICollectionViewCell {
    UILabel *_nameLabel;
    AWEDynamicLabel *_dynamicLabel;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) AWEDynamicLabel *dynamicLabel;

+ (id)identifier;

- (void)setDynamicLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)nameLabel;
- (void)setNameLabel:(id)arg0;
- (void)configureWithModel:(id)arg0;
- (id)dynamicLabel;

@end