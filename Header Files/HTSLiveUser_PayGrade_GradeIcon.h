//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveUser_PayGrade_GradeIcon : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) long long iconDiamond;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *levelStr;

+ (id)descriptor;

@end
