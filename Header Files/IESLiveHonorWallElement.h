//
//     Generated by private class-dump
//

@class IESLiveHonorWallContent, NSString, IESLiveExtraInfo;

@interface IESLiveHonorWallElement : IESLivePBBaseMessage

@property (nonatomic) int id_p;
@property (retain, nonatomic) IESLiveHonorWallContent *honorWallContent;
@property (nonatomic) BOOL hasHonorWallContent;
@property (retain, nonatomic) IESLiveExtraInfo *extraInfo;
@property (nonatomic) BOOL hasExtraInfo;
@property (copy, nonatomic) NSString *name;

+ (id)descriptor;

@end
