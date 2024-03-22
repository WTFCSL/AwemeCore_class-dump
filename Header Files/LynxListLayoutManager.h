//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString, NSMutableArray;

@interface LynxListLayoutManager : NSObject <LynxListLayoutProtocol> {
    BOOL _needAlignHeight;
    NSMutableArray *_models;
    long long _firstInvalidIndex;
    unsigned long long _numberOfColumns;
    double _mainAxisGap;
    double _crossAxisGap;
    NSArray *_fullSpanItems;
    unsigned long long _layoutType;
    long long _lastValidModel;
    NSMutableArray *_mainSizes;
    NSMutableArray *_mainSizesCache;
    NSMutableArray *_layoutColumnInfo;
    NSDictionary *_estimatedHeights;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _insets;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
}

@property (retain, nonatomic) NSMutableArray *models;
@property (nonatomic) long long firstInvalidIndex;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) double mainAxisGap;
@property (nonatomic) double crossAxisGap;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (retain, nonatomic) NSArray *fullSpanItems;
@property (nonatomic) unsigned long long layoutType;
@property (nonatomic) BOOL needAlignHeight;
@property (nonatomic) long long lastValidModel;
@property (retain, nonatomic) NSMutableArray *mainSizes;
@property (retain, nonatomic) NSMutableArray *mainSizesCache;
@property (retain, nonatomic) NSMutableArray *layoutColumnInfo;
@property (retain, nonatomic) NSDictionary *estimatedHeights;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateModels:(id)arg0;
- (id)fullSpanItems;
- (id)estimatedHeights;
- (double)mainAxisGap;
- (double)crossAxisGap;
- (void)setNeedAlignHeight:(BOOL)arg0;
- (void)resetMainSizesWithNumberOfColumns:(unsigned long long)arg0;
- (double)largestMainSize;
- (void)retrieveMainSizeFromCacheAtInvalidIndex:(long long)arg0;
- (void)setEstimatedHeights:(id)arg0;
- (void)setFullSpanItems:(id)arg0;
- (double)largestSizeInMainSizes:(id)arg0;
- (double)adjustOffsetAtIndex:(unsigned long long)arg0 originalOffset:(double)arg1 fullSpanCount:(unsigned long long)arg2;
- (unsigned long long)numberOfFullSpanBeforeIndex:(unsigned long long)arg0;
- (double)largestMainSizeInPreviousRowAtIndex:(unsigned long long)arg0 withNumberOfFullSpan:(unsigned long long)arg1;
- (unsigned long long)shortestColumn;
- (double)shortestMainSize;
- (BOOL)needAlignHeight;
- (id)mainSizes;
- (void)setMainSizes:(id)arg0;
- (id)mainSizesCache;
- (void)setMainSizesCache:(id)arg0;
- (long long)firstInvalidIndex;
- (void)setFirstInvalidIndex:(long long)arg0;
- (void)setMainAxisGap:(double)arg0;
- (void)setCrossAxisGap:(double)arg0;
- (BOOL)isVerticalLayout;
- (double)layoutOffsetForFullSpanItems:(double)arg0 crossSize:(double)arg1 paddingStart:(double)arg2 paddingEnd:(double)arg3;
- (struct CGSize { double x0; double x1; })getContentSize;
- (double)layoutOffsetForFullSpanItem:(long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })generateModelFrame:(double)arg0 crossAxisOffset:(double)arg1 itemMainSize:(double)arg2 itemCrossSize:(double)arg3;
- (double)crossSize:(BOOL)arg0;
- (double)mainSize:(long long)arg0;
- (double)crossUpperInset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultModelFrame:(id)arg0;
- (long long)lastValidModel;
- (void)setLastValidModel:(long long)arg0;
- (id)layoutColumnInfo;
- (long long)findWhichItemToDisplayInColumn:(long long)arg0;
- (void)updateModelsWithRemovals:(id)arg0;
- (void)updateModelsWithInsertions:(id)arg0;
- (id)findWhichItemToDisplayOnTop;
- (void)updateBasicInvalidationContext:(id)arg0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)layoutFrom:(long long)arg0 to:(long long)arg1;
- (id)getAttributesFromIndex:(long long)arg0;
- (void)setLayoutColumnInfo:(id)arg0;
- (unsigned long long)layoutType;
- (void)setInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setLayoutType:(unsigned long long)arg0;
- (id)init;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void).cxx_destruct;
- (id)models;
- (unsigned long long)numberOfColumns;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setNumberOfColumns:(unsigned long long)arg0;
- (void)setModels:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (long long)getCount;

@end