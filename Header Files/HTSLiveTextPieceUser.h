//
//     Generated by private class-dump
//

@class NSString, HTSLiveUser;

@interface HTSLiveTextPieceUser : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) BOOL withColon;
@property (nonatomic) BOOL selfShowRealName;
@property (nonatomic) int leftShowExtension;
@property (copy, nonatomic) NSString *leftAdditionalContent;
@property (copy, nonatomic) NSString *rightAdditionalContent;

+ (id)descriptor;

@end