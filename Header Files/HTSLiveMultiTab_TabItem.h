//
//     Generated by private class-dump
//

@class NSString, GPBInt64Array, HTSLiveMultiTab_Bubble;

@interface HTSLiveMultiTab_TabItem : IESLivePBBaseMessage

@property (nonatomic) long long tabType;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *jumpLink;
@property (nonatomic) long long tabId;
@property (nonatomic) int tabShowType;
@property (retain, nonatomic) GPBInt64Array *hideCameraIdsArray;
@property (readonly, nonatomic) unsigned long long hideCameraIdsArray_Count;
@property (retain, nonatomic) HTSLiveMultiTab_Bubble *bubble;
@property (nonatomic) BOOL hasBubble;
@property (nonatomic) int disablePreload;
@property (copy, nonatomic) NSString *color;

+ (id)descriptor;

@end