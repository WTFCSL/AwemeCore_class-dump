//
//     Generated by private class-dump
//

@class NSString;

@interface APCDTOEffect : MTLModel <MTLJSONSerializing> {
    BOOL _uiVisible;
    BOOL _autoApply;
    BOOL _filterBusiness;
    BOOL _showStickerPanel;
    NSString *_reserved_kw_id;
    NSString *_backgroundImage;
    NSString *_hintToast;
    NSString *_propReqId;
    NSString *_propSelectFrom;
}

@property (copy, nonatomic) NSString *reserved_kw_id;
@property (nonatomic) BOOL uiVisible;
@property (nonatomic) BOOL autoApply;
@property (copy, nonatomic) NSString *backgroundImage;
@property (nonatomic) BOOL filterBusiness;
@property (copy, nonatomic) NSString *hintToast;
@property (nonatomic) BOOL showStickerPanel;
@property (copy, nonatomic) NSString *propReqId;
@property (copy, nonatomic) NSString *propSelectFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)autoApply;
- (void)setAutoApply:(BOOL)arg0;
- (id)reserved_kw_id;
- (void)setReserved_kw_id:(id)arg0;
- (BOOL)showStickerPanel;
- (void)setUiVisible:(BOOL)arg0;
- (BOOL)uiVisible;
- (BOOL)filterBusiness;
- (void)setFilterBusiness:(BOOL)arg0;
- (id)hintToast;
- (void)setHintToast:(id)arg0;
- (void)setShowStickerPanel:(BOOL)arg0;
- (id)propReqId;
- (void)setPropReqId:(id)arg0;
- (id)propSelectFrom;
- (void)setPropSelectFrom:(id)arg0;
- (void)syncToPublishViewModel:(id)arg0;
- (id)backgroundImage;
- (id)init;
- (void).cxx_destruct;
- (void)setBackgroundImage:(id)arg0;

@end