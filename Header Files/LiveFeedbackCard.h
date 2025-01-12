//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, LiveFeedbackCondition;

@interface LiveFeedbackCard : GPBMessage

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (nonatomic) long long feedbackId;
@property (nonatomic) BOOL hasFeedbackId;
@property (nonatomic) int feedbackType;
@property (nonatomic) BOOL hasFeedbackType;
@property (retain, nonatomic) NSMutableArray *questionArray;
@property (readonly, nonatomic) unsigned long long questionArray_Count;
@property (retain, nonatomic) LiveFeedbackCondition *condition;
@property (nonatomic) BOOL hasCondition;
@property (copy, nonatomic) NSString *negativeText;
@property (nonatomic) BOOL hasNegativeText;

+ (id)descriptor;

@end
