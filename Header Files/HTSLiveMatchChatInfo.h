//
//     Generated by private class-dump
//

@class HTSLiveImage, NSMutableArray;

@interface HTSLiveMatchChatInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *mainGroupIcon;
@property (nonatomic) BOOL hasMainGroupIcon;
@property (retain, nonatomic) HTSLiveImage *mainGroupBackground;
@property (nonatomic) BOOL hasMainGroupBackground;
@property (retain, nonatomic) HTSLiveImage *guestGroupIcon;
@property (nonatomic) BOOL hasGuestGroupIcon;
@property (retain, nonatomic) HTSLiveImage *guestGroupBackground;
@property (nonatomic) BOOL hasGuestGroupBackground;
@property (retain, nonatomic) NSMutableArray *aggregateIconArray;
@property (readonly, nonatomic) unsigned long long aggregateIconArray_Count;

+ (id)descriptor;

@end
