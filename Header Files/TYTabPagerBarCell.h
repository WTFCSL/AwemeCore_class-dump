//
//     Generated by private class-dump
//

@class UILabel, NSString;

@interface TYTabPagerBarCell : UICollectionViewCell <TYTabPagerBarCellProtocol> {
    UILabel *_titleLabel;
}

@property (weak, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;

- (void)addTabTitleLabel;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;

@end
