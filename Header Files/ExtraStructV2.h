//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface ExtraStructV2 : GPBMessage

@property (nonatomic) long long now;
@property (nonatomic) BOOL hasNow;
@property (copy, nonatomic) NSString *logid;
@property (nonatomic) BOOL hasLogid;
@property (retain, nonatomic) NSMutableArray *fatalItemIdsArray;
@property (readonly, nonatomic) unsigned long long fatalItemIdsArray_Count;
@property (copy, nonatomic) NSString *searchRequestId;
@property (nonatomic) BOOL hasSearchRequestId;

+ (id)descriptor;

- (long long)now;

@end
