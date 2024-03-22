//
//     Generated by private class-dump
//

@class IESLiveInteractionCropData, NSString, NSDictionary, HTSInteractionStreamAppData;

@interface IESLiveCommonCastScreenSEIParserResult : IESLiveDynamicMTLModel <MTLJSONSerializing, IESLiveSEIParserResult> {
    BOOL immidiately;
    unsigned long long seiType;
    NSDictionary *metaSEI;
    unsigned long long seiMode;
    HTSInteractionStreamAppData *appData;
    IESLiveInteractionCropData *cropData;
}

@property (nonatomic) BOOL isCastScreening;
@property (nonatomic) BOOL isApplet;
@property (copy, nonatomic) NSString *castScene;
@property (copy, nonatomic) NSString *castBizValue;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (retain, nonatomic) IESLiveInteractionCropData *cropData;
@property (retain, nonatomic) NSDictionary *metaSEI;
@property (nonatomic) unsigned long long seiType;
@property (nonatomic) unsigned long long seiMode;
@property (nonatomic) BOOL immidiately;

+ (id)JSONKeyPathsByPropertyKey;

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
- (void).cxx_destruct;
- (void)setAppData:(id)arg0;
- (id)appData;

@end
