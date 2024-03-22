//
//     Generated by private class-dump
//

@class UICollectionView;

@protocol AWEModernFeedProgressSectionViewProtocol <NSObject>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ sectionViewClicked;

- (id)initWithStyle:(unsigned long long)arg0 isFullPage:(BOOL)arg1;
- (void)scrolltoSection:(long long)arg0 isSelected:(BOOL)arg1;
- (void)configWithModel:(id)arg0 andSelectedIndex:(long long)arg1;
- (void)setSectionViewClicked:(id /* block */)arg0;
- (id /* block */)sectionViewClicked;
- (id)collectionView;
- (void)setCollectionView:(id)arg0;
- (unsigned long long)currentSection;

@end