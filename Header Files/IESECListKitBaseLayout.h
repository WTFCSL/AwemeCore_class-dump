//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface IESECListKitBaseLayout : UICollectionViewLayout

@property (readonly, nonatomic) NSMutableArray *ieseclistkit_deletedIndexPaths;
@property (readonly, nonatomic) NSMutableArray *ieseclistkit_insertedIndexPaths;

- (id)ieseclistkit_deletedIndexPaths;
- (void)setIeseclistkit_deletedIndexPaths:(id)arg0;
- (id)ieseclistkit_insertedIndexPaths;
- (void)setIeseclistkit_insertedIndexPaths:(id)arg0;
- (id)ieseclistkit_decorationAttributes;
- (void)setIeseclistkit_decorationAttributes:(id)arg0;
- (void)ieseclistkit_prepareForCollectionViewUpdates:(id)arg0;
- (void)ieseclistkit_finalizeCollectionViewUpdates;
- (void)ieseclistkit_registerDecorationView;
- (void)ieseclistkit_prepareDecorationAttributes;
- (void)ieseclistkit_addDecorationAttributesAtSection:(long long)arg0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 backgroundColor:(id)arg2;
- (id)ieseclistkit_layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1;
- (id)ieseclistkit_layoutAttributesForDecorationViewsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)ieseclistkit_indexPathsToInsertForDecorationViewOfKind:(id)arg0;
- (id)ieseclistkit_indexPathsToDeleteForDecorationViewOfKind:(id)arg0;
- (BOOL)ieseclistkit_isInsertedIndexPath:(id)arg0;
- (BOOL)ieseclistkit_isDeletedIndexPath:(id)arg0;

@end