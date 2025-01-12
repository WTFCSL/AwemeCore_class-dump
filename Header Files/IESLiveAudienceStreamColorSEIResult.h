//
//     Generated by private class-dump
//

@class IESLiveInteractionCropData, NSString, NSDictionary, HTSInteractionStreamAppData;

@interface IESLiveAudienceStreamColorSEIResult : NSObject <IESLiveSEIParserResult> {
    BOOL immidiately;
    NSDictionary *metaSEI;
    unsigned long long seiMode;
    unsigned long long seiType;
    HTSInteractionStreamAppData *appData;
    IESLiveInteractionCropData *cropData;
    double _brightness;
    double _saturation;
    double _contrast;
}

@property (nonatomic) double brightness;
@property (nonatomic) double saturation;
@property (nonatomic) double contrast;
@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (retain, nonatomic) IESLiveInteractionCropData *cropData;
@property (retain, nonatomic) NSDictionary *metaSEI;
@property (nonatomic) unsigned long long seiType;
@property (nonatomic) unsigned long long seiMode;
@property (nonatomic) BOOL immidiately;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cropData;
- (void)setCropData:(id)arg0;
- (id)metaSEI;
- (void)setMetaSEI:(id)arg0;
- (unsigned long long)seiType;
- (void)setSeiType:(unsigned long long)arg0;
- (unsigned long long)seiMode;
- (void)setSeiMode:(unsigned long long)arg0;
- (BOOL)immidiately;
- (void)setImmidiately:(BOOL)arg0;
- (void)setContrast:(double)arg0;
- (void)setSaturation:(double)arg0;
- (double)saturation;
- (double)brightness;
- (void).cxx_destruct;
- (void)setBrightness:(double)arg0;
- (double)contrast;
- (id)initWithDict:(id)arg0;
- (void)setAppData:(id)arg0;
- (id)appData;

@end
