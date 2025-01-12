//
//     Generated by private class-dump
//

@class NSString;
@protocol BDPrivacyCertProtocol;

@interface AWEPOILocationServiceTracker : NSObject {
    id<BDPrivacyCertProtocol> _cert;
    NSString *_enterFrom;
    NSString *_extraReportParams;
    NSString *_guidePicType;
    NSString *_expectedGuidePicType;
    NSString *_traceId;
}

@property (retain, nonatomic) id<BDPrivacyCertProtocol> cert;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *extraReportParams;
@property (copy, nonatomic) NSString *guidePicType;
@property (copy, nonatomic) NSString *expectedGuidePicType;
@property (copy, nonatomic) NSString *traceId;

+ (id)sharedManager;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setTraceId:(id)arg0;
- (void)updateTraceId:(id)arg0;
- (void)setExtraReportParams:(id)arg0;
- (void)updateWithBDCert:(id)arg0 enterFrom:(id)arg1 extraReportParams:(id)arg2;
- (void)trackInAppServiceAlertClick:(BOOL)arg0;
- (void)updateWithPicType:(id)arg0;
- (void)trackInAppServeShow;
- (void)trackInAppAuthorizationAlertClick:(BOOL)arg0;
- (void)trackInAppPermissionShow;
- (void)trackInAppBottomSheetShow:(BOOL)arg0;
- (void)trackBottomBarFloatGuideBarShow;
- (void)trackBottomBarFloatGuideBarClick:(BOOL)arg0;
- (void)trackInAppBottomSheetStatus:(BOOL)arg0 guideViewType:(id)arg1 allow:(BOOL)arg2;
- (void)trackInAppServiceAlertStatus:(BOOL)arg0;
- (void)trackLocationBarAuthorizationAlertStatus:(BOOL)arg0 guideViewType:(id)arg1;
- (void)trackInAppAuthorizationAlertStatus:(BOOL)arg0;
- (void)trackSysPopUpShow;
- (void)trackSysPopupClick:(BOOL)arg0;
- (id)extraReportParams;
- (void)trackPoiLocationServiceFinishWithAllow:(BOOL)arg0 error:(id)arg1;
- (void)updateWithExpectedPicType:(id)arg0;
- (void)trackInAppBottomSheetClick:(BOOL)arg0 condition:(id)arg1;
- (void)setGuidePicType:(id)arg0;
- (void)setExpectedGuidePicType:(id)arg0;
- (id)guidePicType;
- (id)expectedGuidePicType;
- (id)generateParamsWithExtraParams:(id)arg0;
- (void)trackEmbeddedTipBarShow;
- (void)trackEmbeddedTipBarClick:(BOOL)arg0;
- (void).cxx_destruct;
- (id)traceId;
- (id)cert;
- (void)setCert:(id)arg0;

@end
