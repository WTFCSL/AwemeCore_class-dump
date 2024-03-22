//
//     Generated by private class-dump
//

@class HTSLiveComment_DressInfo, NSString, NSMutableArray, HTSLiveComment_User;

@interface HTSLiveComment : IESLivePBBaseMessage

@property (nonatomic) long long commentId;
@property (retain, nonatomic) HTSLiveComment_User *commentUser;
@property (nonatomic) BOOL hasCommentUser;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) int tag;
@property (nonatomic) BOOL public_p;
@property (nonatomic) long long createTimestamp;
@property (nonatomic) int thumbupNumber;
@property (retain, nonatomic) NSMutableArray *childrenCommentArray;
@property (readonly, nonatomic) unsigned long long childrenCommentArray_Count;
@property (nonatomic) int audit;
@property (nonatomic) BOOL firstReply;
@property (retain, nonatomic) HTSLiveComment_DressInfo *dressInfo;
@property (nonatomic) BOOL hasDressInfo;

+ (id)descriptor;

@end
