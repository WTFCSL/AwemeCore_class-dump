//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UIImage, AWEShareWebMetadataModel;

@interface AWEShareWebModel : NSObject {
    BOOL _showsIMForQRCode;
    BOOL _shouldTrackH5Share;
    unsigned long long _contentType;
    UIImage *_shareImage;
    AWEShareWebMetadataModel *_metadata;
    NSString *_activityName;
}

@property (copy, nonatomic) NSDictionary *poiGoodsPanelExtraData;
@property (nonatomic) unsigned long long contentType;
@property (retain, nonatomic) UIImage *shareImage;
@property (retain, nonatomic) AWEShareWebMetadataModel *metadata;
@property (nonatomic) BOOL showsIMForQRCode;
@property (nonatomic) BOOL shouldTrackH5Share;
@property (retain, nonatomic) NSString *activityName;

- (id)shareImage;
- (void)setShareImage:(id)arg0;
- (void)setShowsIMForQRCode:(BOOL)arg0;
- (void)setShouldTrackH5Share:(BOOL)arg0;
- (void)setPoiGoodsPanelExtraData:(id)arg0;
- (id)poiGoodsPanelExtraData;
- (BOOL)showsIMForQRCode;
- (BOOL)shouldTrackH5Share;
- (void)setContentType:(unsigned long long)arg0;
- (unsigned long long)contentType;
- (void).cxx_destruct;
- (void)setMetadata:(id)arg0;
- (id)metadata;
- (id)initWithParams:(id)arg0;
- (id)activityName;
- (void)setActivityName:(id)arg0;

@end
