//
//     Generated by private class-dump
//

@class ToolbarPermutation_Rule;

@interface ToolbarPermutation : IESLivePBBaseMessage

@property (retain, nonatomic) ToolbarPermutation_Rule *vertical;
@property (nonatomic) BOOL hasVertical;
@property (retain, nonatomic) ToolbarPermutation_Rule *landscape;
@property (nonatomic) BOOL hasLandscape;
@property (retain, nonatomic) ToolbarPermutation_Rule *general;
@property (nonatomic) BOOL hasGeneral;

+ (id)descriptor;

@end
