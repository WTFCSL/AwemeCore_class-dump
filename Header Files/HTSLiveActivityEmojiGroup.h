//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, NSMutableArray;

@interface HTSLiveActivityEmojiGroup : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *idStr;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HTSLiveImage *tagIcon;
@property (nonatomic) BOOL hasTagIcon;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) NSMutableArray *emojiListArray;
@property (readonly, nonatomic) unsigned long long emojiListArray_Count;
@property (nonatomic) long long insertEmojiNum;

+ (id)descriptor;

@end
