//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface GameRankItem : IESLivePBBaseMessage

@property (nonatomic) long long userId;
@property (retain, nonatomic) NSMutableArray *avatarURLArray;
@property (readonly, nonatomic) unsigned long long avatarURLArray_Count;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int index;
@property (nonatomic) int score;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) int rankType;

+ (id)descriptor;

@end
