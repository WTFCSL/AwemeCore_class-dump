//
//     Generated by private class-dump
//

@class GPBInt64Array, NSMutableArray;

@interface ECOMTIMPBNBatchUpsertConversationSettingExtInfoResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *successSettingInfosArray;
@property (readonly, nonatomic) unsigned long long successSettingInfosArray_Count;
@property (retain, nonatomic) GPBInt64Array *failConversationShortIdsArray;
@property (readonly, nonatomic) unsigned long long failConversationShortIdsArray_Count;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;

+ (id)descriptor;

@end
