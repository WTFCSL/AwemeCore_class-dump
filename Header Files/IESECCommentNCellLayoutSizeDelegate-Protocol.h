//
//     Generated by private class-dump
//

@class IESECCommentDataController;

@protocol IESECCommentNCellLayoutSizeDelegate <NSObject>

@property (retain, nonatomic) IESECCommentDataController *dataController;
@property (readonly, nonatomic) double sideSpace;
@property (readonly, nonatomic) double normalHorizontalSpace;
@property (readonly, nonatomic) double normalVerticalSpace;
@property (readonly, nonatomic) double normalCellWidth;
@property (readonly, nonatomic) double impressTagBottomOffset;
@property (readonly, nonatomic) double commentListTopOffset;
@property (readonly, nonatomic) double impressTagTopOffset;

- (void)setDataController:(id)arg0;
- (double)normalVerticalSpace;
- (double)normalHorizontalSpace;
- (double)normalCellWidth;
- (double)sideSpace;
- (double)commentListTopOffset;
- (double)impressTagBottomOffset;
- (struct CGSize { double x0; double x1; })sizeForCommentItemAtIndexPath:(id)arg0;
- (double)impressTagTopOffset;
- (id)dataController;

@optional

- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewH:(double)arg0 maxY:(double)arg1;

@end
