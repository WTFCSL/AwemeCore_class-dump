//
//     Generated by private class-dump
//

@class NSString;

@interface HTSLiveTaskPanel : IESLivePBBaseMessage

@property (nonatomic) int taskId;
@property (nonatomic) int taskType;
@property (nonatomic) int watchTime;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *tagIconURL;
@property (copy, nonatomic) NSString *tagText;
@property (copy, nonatomic) NSString *tagTextColor;
@property (copy, nonatomic) NSString *buttonName;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long expireAt;
@property (nonatomic) int status;
@property (nonatomic) int expireAfter;
@property (nonatomic) int rewardType;
@property (copy, nonatomic) NSString *panelTitle;
@property (copy, nonatomic) NSString *subTitleColor;

+ (id)descriptor;

@end
