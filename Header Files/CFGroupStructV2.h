//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface CFGroupStructV2 : GPBMessage

@property (retain, nonatomic) NSMutableArray *cfListArray;
@property (readonly, nonatomic) unsigned long long cfListArray_Count;
@property (nonatomic) int offset;
@property (nonatomic) BOOL hasOffset;
@property (nonatomic) int total;
@property (nonatomic) BOOL hasTotal;
@property (nonatomic) long long minCursor;
@property (nonatomic) BOOL hasMinCursor;
@property (nonatomic) long long maxCursor;
@property (nonatomic) BOOL hasMaxCursor;
@property (copy, nonatomic) NSString *folderId;
@property (nonatomic) BOOL hasFolderId;
@property (nonatomic) long long headCursor;
@property (nonatomic) BOOL hasHeadCursor;
@property (nonatomic) long long tailCursor;
@property (nonatomic) BOOL hasTailCursor;
@property (retain, nonatomic) NSMutableArray *cfIdListArray;
@property (readonly, nonatomic) unsigned long long cfIdListArray_Count;

+ (id)descriptor;

@end
