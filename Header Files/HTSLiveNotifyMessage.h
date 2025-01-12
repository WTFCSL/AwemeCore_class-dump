//
//     Generated by private class-dump
//

@class HTSLiveUser, NSString, HTSLiveCommon, HTSLiveNotifyMessage_Extra, GPBInt64Array;

@interface HTSLiveNotifyMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long notifyType;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) HTSLiveNotifyMessage_Extra *extra;
@property (nonatomic) BOOL hasExtra;
@property (nonatomic) long long notifyClass;
@property (retain, nonatomic) GPBInt64Array *flexSettingArray;
@property (readonly, nonatomic) unsigned long long flexSettingArray_Count;
@property (copy, nonatomic) NSString *bizScene;

+ (id)descriptor;

@end
