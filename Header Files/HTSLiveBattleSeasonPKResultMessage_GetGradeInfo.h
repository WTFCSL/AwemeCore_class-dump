//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveBattleSeasonPKResultMessage_GetGradeInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *getGradeDesc;
@property (retain, nonatomic) HTSLiveImage *gradeImg;
@property (nonatomic) BOOL hasGradeImg;
@property (retain, nonatomic) HTSLiveImage *startImg;
@property (nonatomic) BOOL hasStartImg;

+ (id)descriptor;

@end