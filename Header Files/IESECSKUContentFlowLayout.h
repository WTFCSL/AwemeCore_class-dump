//
//     Generated by private class-dump
//

@class NSArray;

@interface IESECSKUContentFlowLayout : UICollectionViewFlowLayout {
    BOOL _newStyle;
    NSArray *_layoutAttributes;
    NSArray *_sectionLayoutAtrributes;
}

@property (copy, nonatomic) NSArray *layoutAttributes;
@property (copy, nonatomic) NSArray *sectionLayoutAtrributes;
@property (nonatomic) BOOL newStyle;

- (BOOL)newStyle;
- (void)setNewStyle:(BOOL)arg0;
- (void)setSectionLayoutAtrributes:(id)arg0;
- (id)sectionLayoutAtrributes;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)layoutAttributes;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)setLayoutAttributes:(id)arg0;

@end
