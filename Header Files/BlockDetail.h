//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, NSMutableDictionary;

@interface BlockDetail : IESLivePBBaseMessage

@property (nonatomic) int liveTab;
@property (nonatomic) long long blockStatus;
@property (copy, nonatomic) NSString *blockPrompt;
@property (nonatomic) long long unBlockTime;
@property (copy, nonatomic) NSString *blockSchemaLocale;
@property (copy, nonatomic) NSString *autoUnBlockPrompts;
@property (nonatomic) BOOL isNotBlockCreate;
@property (copy, nonatomic) NSString *blockSchema;
@property (nonatomic) int promptType;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;
@property (copy, nonatomic) NSString *dialogInfo;

+ (id)descriptor;

@end
