//
//     Generated by private class-dump
//

@class IESECLiveGoodsRitTagTrackModel, NSString, NSDictionary, IESECLiveCardViewBackgroundModel, NSNumber, IESECLiveImageURLModel;

@interface IESECLiveCardViewIconModel : MTLModel <MTLJSONSerializing> {
    BOOL _buyImageIsWide;
    IESECLiveImageURLModel *_topIcon;
    NSString *_tagIconURLString;
    NSString *_tagPresaleText;
    NSDictionary *_buyButtonURLMap;
    NSNumber *_productType;
    unsigned long long _liveProtectType;
    IESECLiveGoodsRitTagTrackModel *_tagTrack;
    IESECLiveCardViewBackgroundModel *_backgroundViewModel;
}

@property (retain, nonatomic) IESECLiveImageURLModel *topIcon;
@property (copy, nonatomic) NSString *tagIconURLString;
@property (copy, nonatomic) NSString *tagPresaleText;
@property (retain, nonatomic) NSDictionary *buyButtonURLMap;
@property (nonatomic) BOOL buyImageIsWide;
@property (retain, nonatomic) NSNumber *productType;
@property (nonatomic) unsigned long long liveProtectType;
@property (retain, nonatomic) IESECLiveGoodsRitTagTrackModel *tagTrack;
@property (retain, nonatomic) IESECLiveCardViewBackgroundModel *backgroundViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagTrackJSONTransformer;
+ (id)backgroundViewModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)backgroundViewModel;
- (id)topIcon;
- (void)setTopIcon:(id)arg0;
- (id)tagTrack;
- (void)setTagTrack:(id)arg0;
- (id)tagIconURLString;
- (void)setTagIconURLString:(id)arg0;
- (id)tagPresaleText;
- (void)setTagPresaleText:(id)arg0;
- (id)buyButtonURLMap;
- (void)setBuyButtonURLMap:(id)arg0;
- (BOOL)buyImageIsWide;
- (void)setBuyImageIsWide:(BOOL)arg0;
- (unsigned long long)liveProtectType;
- (void)setLiveProtectType:(unsigned long long)arg0;
- (void)setBackgroundViewModel:(id)arg0;
- (id)productType;
- (void)setProductType:(id)arg0;
- (void).cxx_destruct;

@end