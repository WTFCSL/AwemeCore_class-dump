//
//     Generated by private class-dump
//

@class HTSLivePrecisionMatch, HTSLiveCommon;

@interface HTSLiveBattlePrecisionMatchMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLivePrecisionMatch *precisionMatch;
@property (nonatomic) BOOL hasPrecisionMatch;

+ (id)descriptor;

@end