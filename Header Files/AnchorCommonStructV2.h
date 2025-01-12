//
//     Generated by private class-dump
//

@class NSString, UrlStructV2, NSMutableArray;

@interface AnchorCommonStructV2 : GPBMessage

@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) BOOL hasKeyword;
@property (copy, nonatomic) NSString *URL;
@property (nonatomic) BOOL hasURL;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) BOOL hasLanguage;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (copy, nonatomic) NSString *id_p;
@property (nonatomic) BOOL hasId_p;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) UrlStructV2 *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (copy, nonatomic) NSString *deepLink;
@property (nonatomic) BOOL hasDeepLink;
@property (copy, nonatomic) NSString *universalLink;
@property (nonatomic) BOOL hasUniversalLink;
@property (nonatomic) int generalType;
@property (nonatomic) BOOL hasGeneralType;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) BOOL hasLogExtra;
@property (copy, nonatomic) NSString *description_p;
@property (nonatomic) BOOL hasDescription_p;
@property (retain, nonatomic) UrlStructV2 *thumbnail;
@property (nonatomic) BOOL hasThumbnail;
@property (retain, nonatomic) NSMutableArray *actionsArray;
@property (readonly, nonatomic) unsigned long long actionsArray_Count;

+ (id)descriptor;

@end
