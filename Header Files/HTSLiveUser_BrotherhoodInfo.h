//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveUser_BrotherhoodInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long level;
@property (retain, nonatomic) HTSLiveImage *background;
@property (nonatomic) BOOL hasBackground;
@property (copy, nonatomic) NSString *fontColor;

+ (id)descriptor;

@end
