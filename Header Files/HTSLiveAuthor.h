//
//     Generated by private class-dump
//

@class NSString, HTSLiveAuthor_AuthorBasicInfo, HTSLiveUser;

@interface HTSLiveAuthor : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (retain, nonatomic) HTSLiveUser *userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (retain, nonatomic) HTSLiveAuthor_AuthorBasicInfo *authorBasicInfo;
@property (nonatomic) BOOL hasAuthorBasicInfo;
@property (copy, nonatomic) NSString *jumpSchema;

+ (id)descriptor;

@end
