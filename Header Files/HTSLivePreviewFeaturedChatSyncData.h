//
//     Generated by private class-dump
//

@class HTSLiveImage, NSMutableArray;

@interface HTSLivePreviewFeaturedChatSyncData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSMutableArray *featuredChatListArray;
@property (readonly, nonatomic) unsigned long long featuredChatListArray_Count;

+ (id)descriptor;

@end