//
//     Generated by private class-dump
//

@class NSMutableArray, HTSLiveImage;

@interface HTSLivePreviewLabel : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *labelTipsArray;
@property (readonly, nonatomic) unsigned long long labelTipsArray_Count;
@property (nonatomic) int labelType;
@property (retain, nonatomic) HTSLiveImage *labelImage;
@property (nonatomic) BOOL hasLabelImage;
@property (nonatomic) BOOL hitTest;

+ (id)descriptor;

@end
