//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface HTSLiveMatchChatConfig : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *mainGroupIconURL;
@property (copy, nonatomic) NSString *mainGroupBackgroundURL;
@property (copy, nonatomic) NSString *guestGroupIconURL;
@property (copy, nonatomic) NSString *guestGroupBackgroundURL;
@property (retain, nonatomic) NSMutableArray *aggregateIconURLArray;
@property (readonly, nonatomic) unsigned long long aggregateIconURLArray_Count;

+ (id)descriptor;

@end