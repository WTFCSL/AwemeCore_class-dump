//
//     Generated by private class-dump
//

@class IESLiveInteractionCropData, NSString, NSDictionary, HTSInteractionStreamAppData;

@interface IESLiveRecordToolSEIParserResult : NSObject <IESLiveSEIParserResult> {
    BOOL immidiately;
    NSDictionary *metaSEI;
    unsigned long long seiMode;
    unsigned long long seiType;
    HTSInteractionStreamAppData *appData;
    IESLiveInteractionCropData *cropData;
    NSString *_rectType;
    double _transformX;
    double _transformY;
}

@property (copy, nonatomic) NSString *rectType;
@property (nonatomic) double transformX;
@property (nonatomic) double transformY;
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

- (double)transformX;
- (void)setTransformX:(double)arg0;
- (double)transformY;
- (void)setTransformY:(double)arg0;
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
- (id)rectType;
- (void)setRectType:(id)arg0;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg0;
- (void)setAppData:(id)arg0;
- (id)appData;

@end
