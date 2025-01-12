//
//     Generated by private class-dump
//

@class HTSLiveText, NSString, IESLiveBgColor, NSMutableDictionary;

@interface IESLiveProfileTagContent : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveBgColor *bgColor;
@property (nonatomic) BOOL hasBgColor;
@property (nonatomic) long long tagType;
@property (nonatomic) BOOL isBgPicture;
@property (retain, nonatomic) HTSLiveText *tagContent;
@property (nonatomic) BOOL hasTagContent;
@property (nonatomic) BOOL isClickTag;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *clickBuriedPoint;
@property (retain, nonatomic) NSMutableDictionary *clickBuriedPointParams;
@property (readonly, nonatomic) unsigned long long clickBuriedPointParams_Count;
@property (copy, nonatomic) NSString *showBuriedPoint;
@property (retain, nonatomic) NSMutableDictionary *showBuriedPointParams;
@property (readonly, nonatomic) unsigned long long showBuriedPointParams_Count;
@property (nonatomic) BOOL clickHideProfile;
@property (copy, nonatomic) NSString *tagName;

+ (id)descriptor;

@end
