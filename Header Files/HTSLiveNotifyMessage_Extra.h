//
//     Generated by private class-dump
//

@class HTSLiveNotifyMessage_Background, HTSLiveNotifyMessage_ContentList, NSMutableDictionary;

@interface HTSLiveNotifyMessage_Extra : IESLivePBBaseMessage

@property (nonatomic) long long duration;
@property (retain, nonatomic) HTSLiveNotifyMessage_Background *background;
@property (nonatomic) BOOL hasBackground;
@property (retain, nonatomic) HTSLiveNotifyMessage_ContentList *contentList;
@property (nonatomic) BOOL hasContentList;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (readonly, nonatomic) unsigned long long params_Count;
@property (nonatomic) BOOL needGiftFrequency;

+ (id)descriptor;

@end
