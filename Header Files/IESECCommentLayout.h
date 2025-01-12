//
//     Generated by private class-dump
//

@class NSArray, NSString;
@protocol IESECCommentNCellLayoutSizeDelegate;

@interface IESECCommentLayout : UICollectionViewLayout <IESECCommentLayoutProtocol> {
    BOOL shouldCompleteLayout;
    BOOL shouldShowMeaninglessFooter;
    NSArray *_layoutAttributes;
    id<IESECCommentNCellLayoutSizeDelegate> sizeDelegate;
    struct CGPoint { double x; double y; } statPoint;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _impressRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _noticeRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _mediaAreaRect;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } impressRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } noticeRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mediaAreaRect;
@property (copy, nonatomic) NSArray *layoutAttributes;
@property (weak, nonatomic) id<IESECCommentNCellLayoutSizeDelegate> sizeDelegate;
@property (nonatomic) BOOL shouldCompleteLayout;
@property (nonatomic) struct CGPoint { double x; double y; } statPoint;
@property (nonatomic) BOOL shouldShowMeaninglessFooter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldCompleteLayout;
- (void)setStatPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setImpressRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })impressRect;
- (void)setNoticeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })noticeRect;
- (void)setMediaAreaRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setShouldCompleteLayout:(BOOL)arg0;
- (BOOL)isImpressTagSuspendWithIndex:(unsigned long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaAreaRect;
- (struct CGPoint { double x0; double x1; })statPoint;
- (BOOL)shouldShowMeaninglessFooter;
- (void)setShouldShowMeaninglessFooter:(BOOL)arg0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareLayout;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)layoutAttributes;
- (id)layoutAttributesForItemAtIndexPath:(id)arg0;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1;
- (id)init;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void).cxx_destruct;
- (void)setLayoutAttributes:(id)arg0;
- (id)sizeDelegate;
- (void)setSizeDelegate:(id)arg0;

@end
