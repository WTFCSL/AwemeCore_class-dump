//
//     Generated by private class-dump
//

@class NSString, HTSLiveUser;

@interface HTSLiveLinkmicStarWishPlayerInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long targetScore;
@property (nonatomic) long long curScore;
@property (copy, nonatomic) NSString *declaration;
@property (copy, nonatomic) NSString *dressId;
@property (retain, nonatomic) HTSLiveUser *titleSponsor;
@property (nonatomic) BOOL hasTitleSponsor;

+ (id)descriptor;

@end
