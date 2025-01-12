//
//     Generated by private class-dump
//

@class NSString;

@interface HTSLiveHighlight : IESLivePBBaseMessage

@property (nonatomic) int highlightType;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *replayId;
@property (copy, nonatomic) NSString *videoSource;
@property (copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) NSString *coverImgURL;
@property (nonatomic) long long playTimeMs;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *groupName;

+ (id)descriptor;

@end
