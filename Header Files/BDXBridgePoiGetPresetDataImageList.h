//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSArray;

@interface BDXBridgePoiGetPresetDataImageList : BDXBridgeModel {
    BOOL _isFiltered;
    BOOL _isBeautified;
    BOOL _isQualityEnhanced;
    NSString *_id;
    NSNumber *_index;
    NSString *_path;
    NSString *_base64;
    NSString *_uri;
    NSString *_contentSource;
    NSNumber *_textCnt;
    NSNumber *_tagCnt;
    NSNumber *_stickerCnt;
    NSString *_rawUri;
    NSNumber *_readyTime;
    NSNumber *_longitude;
    NSNumber *_latitude;
    NSArray *_stickerText;
    NSArray *_tagContent;
    NSArray *_customStickersUri;
}

@property (copy, nonatomic) NSString *id;
@property (retain, nonatomic) NSNumber *index;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *base64;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *contentSource;
@property (retain, nonatomic) NSNumber *textCnt;
@property (retain, nonatomic) NSNumber *tagCnt;
@property (retain, nonatomic) NSNumber *stickerCnt;
@property (nonatomic) BOOL isFiltered;
@property (nonatomic) BOOL isBeautified;
@property (nonatomic) BOOL isQualityEnhanced;
@property (copy, nonatomic) NSString *rawUri;
@property (retain, nonatomic) NSNumber *readyTime;
@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSArray *stickerText;
@property (retain, nonatomic) NSArray *tagContent;
@property (retain, nonatomic) NSArray *customStickersUri;

+ (id)JSONKeyPathsByPropertyKey;

- (id)stickerText;
- (void)setStickerText:(id)arg0;
- (id)base64;
- (void)setBase64:(id)arg0;
- (void)setReadyTime:(id)arg0;
- (id)readyTime;
- (void)setTagContent:(id)arg0;
- (void)setStickerCnt:(id)arg0;
- (void)setTextCnt:(id)arg0;
- (void)setIsBeautified:(BOOL)arg0;
- (void)setIsQualityEnhanced:(BOOL)arg0;
- (id)textCnt;
- (id)tagCnt;
- (void)setTagCnt:(id)arg0;
- (id)stickerCnt;
- (BOOL)isBeautified;
- (BOOL)isQualityEnhanced;
- (void)setCustomStickersUri:(id)arg0;
- (void)setRawUri:(id)arg0;
- (id)rawUri;
- (id)customStickersUri;
- (void)setPath:(id)arg0;
- (void)setLongitude:(id)arg0;
- (void)setIndex:(id)arg0;
- (id)longitude;
- (id)latitude;
- (void)setLatitude:(id)arg0;
- (void).cxx_destruct;
- (void)setContentSource:(id)arg0;
- (id)contentSource;
- (BOOL)isFiltered;
- (id)path;
- (id)id;
- (id)index;
- (void)setUri:(id)arg0;
- (id)uri;
- (void)setId:(id)arg0;
- (id)tagContent;
- (void)setIsFiltered:(BOOL)arg0;

@end
