//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCMusicModelProtocol;

@interface APCDTOCameraMusic : MTLModel <MTLJSONSerializing> {
    BOOL _uiVisible;
    BOOL _autoApply;
    NSString *_reserved_kw_id;
    NSString *_musicSelectedFrom;
    double _musicBeginTime;
}

@property (retain, nonatomic) id<ACCMusicModelProtocol> music;
@property (copy, nonatomic) NSString *reserved_kw_id;
@property (nonatomic) BOOL uiVisible;
@property (copy, nonatomic) NSString *musicSelectedFrom;
@property (nonatomic) BOOL autoApply;
@property (nonatomic) double musicBeginTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)autoApply;
- (void)setAutoApply:(BOOL)arg0;
- (id)reserved_kw_id;
- (void)setReserved_kw_id:(id)arg0;
- (id)musicSelectedFrom;
- (void)setMusicSelectedFrom:(id)arg0;
- (void)setUiVisible:(BOOL)arg0;
- (BOOL)uiVisible;
- (double)musicBeginTime;
- (void)setMusicBeginTime:(double)arg0;
- (void)syncToPublishViewModel:(id)arg0;
- (id)music;
- (id)init;
- (void).cxx_destruct;
- (void)setMusic:(id)arg0;

@end
