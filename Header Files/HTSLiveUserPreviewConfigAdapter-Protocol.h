//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSNumber;

@protocol HTSLiveUserPreviewConfigAdapter <NSObject>

@property (nonatomic) unsigned long long source;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSString *clickUserPosition;
@property (copy, nonatomic) NSDictionary *followParams;
@property (nonatomic) BOOL isAnonymous;
@property (nonatomic) BOOL disableAdminButton;
@property (nonatomic) BOOL isPreviewAnchor;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (retain, nonatomic) NSString *rightAnchorId;
@property (retain, nonatomic) NSNumber *reportContentID;
@property (retain, nonatomic) NSString *reportContent;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (void)setEventParams:(id)arg0;
- (id)reportContent;
- (void)setReportContent:(id)arg0;
- (id)clickUserPosition;
- (void)setClickUserPosition:(id)arg0;
- (id)followParams;
- (void)setFollowParams:(id)arg0;
- (BOOL)disableAdminButton;
- (void)setDisableAdminButton:(BOOL)arg0;
- (BOOL)isPreviewAnchor;
- (void)setIsPreviewAnchor:(BOOL)arg0;
- (id)rightAnchorId;
- (void)setRightAnchorId:(id)arg0;
- (id)reportContentID;
- (void)setReportContentID:(id)arg0;
- (BOOL)isAnonymous;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg0;
- (void)setIsAnonymous:(BOOL)arg0;
- (id)eventParams;

@end