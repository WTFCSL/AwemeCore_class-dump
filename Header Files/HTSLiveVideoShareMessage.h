//
//     Generated by private class-dump
//

@class HTSLiveUser, NSString, HTSLiveCommon, HTSLivePublicAreaCommon;

@interface HTSLiveVideoShareMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long itemId;
@property (copy, nonatomic) NSString *itemIdStr;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSString *itemTypeStr;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long authorId;
@property (retain, nonatomic) HTSLivePublicAreaCommon *publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;

+ (id)descriptor;

@end