//
//     Generated by private class-dump
//

@class NSMutableArray, ListPromptExtra;

@interface ListPromptResponse : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *dataArray;
@property (readonly, nonatomic) unsigned long long dataArray_Count;
@property (retain, nonatomic) ListPromptExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
