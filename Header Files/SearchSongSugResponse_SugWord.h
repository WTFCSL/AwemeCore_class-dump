//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface SearchSongSugResponse_SugWord : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSMutableArray *posArray;
@property (readonly, nonatomic) unsigned long long posArray_Count;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *groupId;

+ (id)descriptor;

@end
