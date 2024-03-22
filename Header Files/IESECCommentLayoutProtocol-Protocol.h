//
//     Generated by private class-dump
//

@class NSArray;
@protocol IESECCommentNCellLayoutSizeDelegate;

@protocol IESECCommentLayoutProtocol <NSObject>

@property (copy, nonatomic) NSArray *layoutAttributes;
@property (weak, nonatomic) id<IESECCommentNCellLayoutSizeDelegate> sizeDelegate;
@property (nonatomic) BOOL shouldCompleteLayout;
@property (nonatomic) struct CGPoint { double x0; double x1; } statPoint;
@property (nonatomic) BOOL shouldShowMeaninglessFooter;

- (BOOL)shouldCompleteLayout;
- (void)setStatPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setShouldCompleteLayout:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })statPoint;
- (BOOL)shouldShowMeaninglessFooter;
- (void)setShouldShowMeaninglessFooter:(BOOL)arg0;
- (id)layoutAttributes;
- (void)setLayoutAttributes:(id)arg0;
- (id)sizeDelegate;
- (void)setSizeDelegate:(id)arg0;

@end
