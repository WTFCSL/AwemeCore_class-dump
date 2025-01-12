//
//     Generated by private class-dump
//

@class GPBInt64Array;

@interface LiveFeedbackCondition : GPBMessage

@property (nonatomic) long long fromTime;
@property (nonatomic) BOOL hasFromTime;
@property (nonatomic) long long toTime;
@property (nonatomic) BOOL hasToTime;
@property (retain, nonatomic) GPBInt64Array *actionIdsArray;
@property (readonly, nonatomic) unsigned long long actionIdsArray_Count;
@property (nonatomic) long long actionType;
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) long long previewTime;
@property (nonatomic) BOOL hasPreviewTime;

+ (id)descriptor;

@end
