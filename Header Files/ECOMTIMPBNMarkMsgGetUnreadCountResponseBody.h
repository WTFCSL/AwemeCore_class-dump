//
//     Generated by private class-dump
//

@class GPBInt64Array, GPBInt64Int64Dictionary;

@interface ECOMTIMPBNMarkMsgGetUnreadCountResponseBody : GPBMessage

@property (nonatomic) long long totalCount;
@property (nonatomic) BOOL hasTotalCount;
@property (retain, nonatomic) GPBInt64Int64Dictionary *tagUnreadCount;
@property (readonly, nonatomic) unsigned long long tagUnreadCount_Count;
@property (retain, nonatomic) GPBInt64Array *failedTagListArray;
@property (readonly, nonatomic) unsigned long long failedTagListArray_Count;

+ (id)descriptor;

@end
