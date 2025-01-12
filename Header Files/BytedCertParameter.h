//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSData;
@protocol BytedCertCustomUIDelegate;

@interface BytedCertParameter : NSObject <NSCopying> {
    BOOL _useSystemV2;
    BOOL _showAuthError;
    BOOL _backCamera;
    BOOL _logMode;
    BOOL _disableFaceVCAnimation;
    BOOL _customLayout;
    int _youthCertScene;
    int _beautyIntensity;
    unsigned long long _mode;
    NSString *_appId;
    NSString *_certAppId;
    NSString *_scene;
    NSString *_flow;
    NSString *_ticket;
    long long _videoRecordPolicy;
    NSString *_livenessType;
    NSDictionary *_h5QueryParams;
    NSDictionary *_extraParams;
    NSString *_identityCode;
    NSString *_identityName;
    NSData *_frontImageData;
    NSData *_backImageData;
    NSDictionary *_eventParams;
    NSString *_faceDetectionBgImageURL;
    NSString *_preDetectionTipText;
    NSString *_continueDetectionAlertText;
    id<BytedCertCustomUIDelegate> _bytedCertCustomUIDelegate;
    NSDictionary *_extraCustomFaceViewInfo;
}

@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *certAppId;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *flow;
@property (copy, nonatomic) NSString *ticket;
@property (nonatomic) BOOL useSystemV2;
@property (nonatomic) long long videoRecordPolicy;
@property (copy, nonatomic) NSString *livenessType;
@property (nonatomic) int youthCertScene;
@property (copy, nonatomic) NSDictionary *h5QueryParams;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *identityCode;
@property (copy, nonatomic) NSString *identityName;
@property (nonatomic) int beautyIntensity;
@property (retain, nonatomic) NSData *frontImageData;
@property (retain, nonatomic) NSData *backImageData;
@property (nonatomic) BOOL showAuthError;
@property (nonatomic) BOOL backCamera;
@property (nonatomic) BOOL logMode;
@property (copy, nonatomic) NSDictionary *eventParams;
@property (copy, nonatomic) NSString *faceDetectionBgImageURL;
@property (copy, nonatomic) NSString *preDetectionTipText;
@property (copy, nonatomic) NSString *continueDetectionAlertText;
@property (nonatomic) BOOL disableFaceVCAnimation;
@property (weak, nonatomic) id<BytedCertCustomUIDelegate> bytedCertCustomUIDelegate;
@property (nonatomic) BOOL customLayout;
@property (copy, nonatomic) NSDictionary *extraCustomFaceViewInfo;

- (void)setCustomLayout:(BOOL)arg0;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (id)initWithBaseParams:(id)arg0 identityParams:(id)arg1;
- (BOOL)customLayout;
- (void)setEventParams:(id)arg0;
- (long long)videoRecordPolicy;
- (id)h5QueryParams;
- (BOOL)showAuthError;
- (BOOL)useSystemV2;
- (void)setUseSystemV2:(BOOL)arg0;
- (void)setVideoRecordPolicy:(long long)arg0;
- (id)livenessType;
- (int)youthCertScene;
- (BOOL)disableFaceVCAnimation;
- (id)certAppId;
- (id)identityCode;
- (void)setCertAppId:(id)arg0;
- (void)setLivenessType:(id)arg0;
- (void)setYouthCertScene:(int)arg0;
- (void)setH5QueryParams:(id)arg0;
- (void)setIdentityCode:(id)arg0;
- (void)setShowAuthError:(BOOL)arg0;
- (BOOL)backCamera;
- (void)setBackCamera:(BOOL)arg0;
- (BOOL)logMode;
- (void)setLogMode:(BOOL)arg0;
- (id)faceDetectionBgImageURL;
- (void)setFaceDetectionBgImageURL:(id)arg0;
- (id)preDetectionTipText;
- (void)setPreDetectionTipText:(id)arg0;
- (void)setContinueDetectionAlertText:(id)arg0;
- (void)setDisableFaceVCAnimation:(BOOL)arg0;
- (void)setBytedCertCustomUIDelegate:(id)arg0;
- (id)extraCustomFaceViewInfo;
- (void)setExtraCustomFaceViewInfo:(id)arg0;
- (int)beautyIntensity;
- (void)setBeautyIntensity:(int)arg0;
- (id)continueDetectionAlertText;
- (id)bytedCertCustomUIDelegate;
- (void)setAppId:(id)arg0;
- (id)init;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)mode;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setMode:(unsigned long long)arg0;
- (id)appId;
- (id)scene;
- (id)ticket;
- (void)setTicket:(id)arg0;
- (id)frontImageData;
- (void)setFrontImageData:(id)arg0;
- (id)backImageData;
- (void)setBackImageData:(id)arg0;
- (id)flow;
- (void)setFlow:(id)arg0;
- (id)identityName;
- (void)setIdentityName:(id)arg0;
- (id)eventParams;

@end
