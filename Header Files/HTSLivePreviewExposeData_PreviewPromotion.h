//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface HTSLivePreviewExposeData_PreviewPromotion : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *avatarIconsArray;
@property (readonly, nonatomic) unsigned long long avatarIconsArray_Count;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSMutableArray *fastCommentsArray;
@property (readonly, nonatomic) unsigned long long fastCommentsArray_Count;
@property (retain, nonatomic) NSMutableArray *fastCommentsEmojiArray;
@property (readonly, nonatomic) unsigned long long fastCommentsEmojiArray_Count;

+ (id)descriptor;

@end