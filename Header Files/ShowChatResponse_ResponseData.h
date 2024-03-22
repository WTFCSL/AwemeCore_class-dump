//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, ShowChatResponse_CommentRoleConfig, NSMutableArray, HTSLiveUser, ShowChatResponse_LandscapeAreaCommon, HTSLiveCommentMedal, HTSLiveText;

@interface ShowChatResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) HTSLiveImage *backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (copy, nonatomic) NSString *msgIdStr;
@property (copy, nonatomic) NSString *fullscreenTextColor;
@property (retain, nonatomic) NSMutableArray *colorValueArray;
@property (readonly, nonatomic) unsigned long long colorValueArray_Count;
@property (retain, nonatomic) ShowChatResponse_LandscapeAreaCommon *landscapeAreaCommon;
@property (nonatomic) BOOL hasLandscapeAreaCommon;
@property (retain, nonatomic) ShowChatResponse_CommentRoleConfig *commentRole;
@property (nonatomic) BOOL hasCommentRole;
@property (retain, nonatomic) HTSLiveCommentMedal *medal;
@property (nonatomic) BOOL hasMedal;
@property (nonatomic) int vsMessageType;
@property (nonatomic) int effectType;

+ (id)descriptor;

@end