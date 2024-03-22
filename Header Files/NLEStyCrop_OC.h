//
//     Generated by private class-dump
//

@interface NLEStyCrop_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLEStyCrop> { struct NLEStyCrop *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) double lowerLeftX;
@property (nonatomic) double lowerLeftY;
@property (nonatomic) double lowerRightX;
@property (nonatomic) double lowerRightY;
@property (nonatomic) double upperLeftX;
@property (nonatomic) double upperLeftY;
@property (nonatomic) double upperRightX;
@property (nonatomic) double upperRightY;

- (double)upperRightX;
- (double)upperLeftX;
- (double)upperRightY;
- (double)upperLeftY;
- (double)lowerLeftX;
- (double)lowerLeftY;
- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEStyCrop> { struct NLEStyCrop *x0; struct __shared_weak_count *x1; })arg0;
- (void)setLowerLeftX:(double)arg0;
- (void)setLowerLeftY:(double)arg0;
- (double)lowerRightX;
- (void)setLowerRightX:(double)arg0;
- (double)lowerRightY;
- (void)setLowerRightY:(double)arg0;
- (void)setUpperLeftX:(double)arg0;
- (void)setUpperLeftY:(double)arg0;
- (void)setUpperRightX:(double)arg0;
- (void)setUpperRightY:(double)arg0;
- (id)init;

@end