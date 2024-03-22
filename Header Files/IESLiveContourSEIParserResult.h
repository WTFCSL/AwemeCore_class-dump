//
//     Generated by private class-dump
//

@class IESLiveInteractionCropData, NSString, NSDictionary, NSData, HTSInteractionStreamAppData;

@interface IESLiveContourSEIParserResult : IESLiveDynamicModel <IESLiveSEIParserResult> {
    BOOL immidiately;
    unsigned long long seiType;
    NSDictionary *metaSEI;
    unsigned long long seiMode;
    HTSInteractionStreamAppData *appData;
    IESLiveInteractionCropData *cropData;
    NSData *_contourInfoData;
    NSString *_contourInfoStr;
}

@property (retain, nonatomic) NSData *contourInfoData;
@property (copy, nonatomic) NSString *contourInfoStr;
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
- (id)contourInfoData;
- (id)contourInfoStr;
- (void)setContourInfoStr:(id)arg0;
- (void)setContourInfoData:(id)arg0;
- (void).cxx_destruct;
- (void)setAppData:(id)arg0;
- (id)appData;

@end
