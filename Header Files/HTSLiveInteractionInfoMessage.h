//
//     Generated by private class-dump
//

@class HTSLiveChatImageGuideInfo, HTSLiveCommon, HTSLiveLikeIconInfo, GPBEnumArray, HTSLiveChatEmojiGuideInfo;

@interface HTSLiveInteractionInfoMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveLikeIconInfo *likeIconInfo;
@property (nonatomic) BOOL hasLikeIconInfo;
@property (retain, nonatomic) HTSLiveChatEmojiGuideInfo *chatEmojiGuideInfo;
@property (nonatomic) BOOL hasChatEmojiGuideInfo;
@property (retain, nonatomic) HTSLiveChatImageGuideInfo *chatImageGuideInfo;
@property (nonatomic) BOOL hasChatImageGuideInfo;
@property (retain, nonatomic) GPBEnumArray *updateInfoTypeArray;
@property (readonly, nonatomic) unsigned long long updateInfoTypeArray_Count;

+ (id)descriptor;

@end
