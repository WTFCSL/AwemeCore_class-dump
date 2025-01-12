//
//     Generated by private class-dump
//

@class IESLiveInteractionCropData, NSString, NSDictionary, HTSInteractionStreamAppData;

@interface IESLiveAudienceVideoPlaySEIResult : NSObject <IESLiveSEIParserResult> {
    BOOL immidiately;
    NSDictionary *metaSEI;
    unsigned long long seiMode;
    unsigned long long seiType;
    HTSInteractionStreamAppData *appData;
    IESLiveInteractionCropData *cropData;
    NSString *_itemID;
    long long _status;
}

@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) long long status;
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
- (void).cxx_destruct;
- (long long)status;
- (id)initWithDict:(id)arg0;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (void)setStatus:(long long)arg0;
- (void)setAppData:(id)arg0;
- (id)appData;

@end
