//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface HTSLiveBasicPrivilege : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconURL;
@property (retain, nonatomic) NSMutableArray *emojiListArray;
@property (readonly, nonatomic) unsigned long long emojiListArray_Count;

+ (id)descriptor;

@end