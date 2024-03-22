//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, NSMutableDictionary;

@interface AudienceEntranceInfo : IESLivePBBaseMessage

@property (nonatomic) long long interactType;
@property (copy, nonatomic) NSString *elemId;
@property (nonatomic) long long startId;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) BOOL checkEntranceVisitable;
@property (nonatomic) BOOL needMetricsReport;
@property (copy, nonatomic) NSString *schemaURL;
@property (nonatomic) int source;
@property (nonatomic) int punishStatus;
@property (copy, nonatomic) NSString *imExtra;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *entranceExtra;
@property (retain, nonatomic) NSMutableDictionary *startPageQuery;
@property (readonly, nonatomic) unsigned long long startPageQuery_Count;

+ (id)descriptor;

@end