//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface HTSLiveVideoCardModule : IESLivePBBaseMessage

@property (nonatomic) long long moduleId;
@property (nonatomic) long long moduleVersion;
@property (nonatomic) int updateType;
@property (retain, nonatomic) NSMutableArray *updateListArray;
@property (readonly, nonatomic) unsigned long long updateListArray_Count;
@property (retain, nonatomic) NSMutableArray *deleteListArray;
@property (readonly, nonatomic) unsigned long long deleteListArray_Count;

+ (id)descriptor;

@end
