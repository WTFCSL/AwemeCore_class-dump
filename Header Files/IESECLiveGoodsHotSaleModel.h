//
//     Generated by private class-dump
//

@class NSString, NSArray, NSNumber, NSMutableArray;

@interface IESECLiveGoodsHotSaleModel : MTLModel <MTLJSONSerializing, IESECLiveHotsaleItem> {
    BOOL _sameContentSize;
    BOOL _showEnhancedDesign;
    BOOL _shouldShow;
    BOOL _circularVibe;
    BOOL _priceFormatStyle;
    BOOL _shouldCheckNum;
    long long _dataType;
    NSString *_imageURLStr;
    NSString *_prefixStr;
    NSString *_suffixStr;
    NSNumber *_saleNum;
    NSString *_topImageURL;
    NSArray *_bgColors;
    NSArray *_borderColors;
    double _bgLeftMargin;
    NSNumber *_dismissInterval;
    long long _lastTrackType;
    NSString *_hotsaleType;
    long long _state;
    NSMutableArray *_followUpItems;
    double _vibeLeftMargin;
    NSString *_saleNumStr;
    long long _UIType;
}

@property (retain, nonatomic) NSString *saleNumStr;
@property (nonatomic) long long UIType;
@property (nonatomic) long long dataType;
@property (retain, nonatomic) NSString *imageURLStr;
@property (retain, nonatomic) NSString *prefixStr;
@property (retain, nonatomic) NSString *suffixStr;
@property (retain, nonatomic) NSNumber *saleNum;
@property (retain, nonatomic) NSString *topImageURL;
@property (retain, nonatomic) NSArray *bgColors;
@property (retain, nonatomic) NSArray *borderColors;
@property (nonatomic) double bgLeftMargin;
@property (nonatomic) BOOL sameContentSize;
@property (nonatomic) BOOL showEnhancedDesign;
@property (retain, nonatomic) NSNumber *dismissInterval;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) long long lastTrackType;
@property (retain, nonatomic) NSString *hotsaleType;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSMutableArray *followUpItems;
@property (nonatomic) double vibeLeftMargin;
@property (nonatomic) BOOL circularVibe;
@property (nonatomic) BOOL priceFormatStyle;
@property (nonatomic) BOOL shouldCheckNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)bgColors;
- (void)setBgColors:(id)arg0;
- (long long)lastTrackType;
- (void)setLastTrackType:(long long)arg0;
- (void)setSaleNum:(id)arg0;
- (void)setPrefixStr:(id)arg0;
- (void)setSameContentSize:(BOOL)arg0;
- (void)setCircularVibe:(BOOL)arg0;
- (void)setPriceFormatStyle:(BOOL)arg0;
- (void)setVibeLeftMargin:(double)arg0;
- (id)saleNum;
- (BOOL)sameContentSize;
- (void)setUIType:(long long)arg0;
- (void)setBorderColors:(id)arg0;
- (void)setBgLeftMargin:(double)arg0;
- (void)setTopImageURL:(id)arg0;
- (BOOL)isHotsale;
- (BOOL)isStock;
- (BOOL)isRank;
- (BOOL)showEnhancedDesign;
- (id)saleNumStr;
- (long long)UIType;
- (id)prefixStr;
- (id)suffixStr;
- (void)setSuffixStr:(id)arg0;
- (id)topImageURL;
- (id)borderColors;
- (double)bgLeftMargin;
- (double)vibeLeftMargin;
- (id)dismissInterval;
- (void)setDismissInterval:(id)arg0;
- (void)setShowEnhancedDesign:(BOOL)arg0;
- (id)followUpItems;
- (void)setFollowUpItems:(id)arg0;
- (BOOL)circularVibe;
- (BOOL)priceFormatStyle;
- (BOOL)shouldCheckNum;
- (void)setShouldCheckNum:(BOOL)arg0;
- (void)updateWithMsgHotSaleInfoMessage:(id)arg0;
- (id)hotsaleType;
- (void)setHotsaleType:(id)arg0;
- (void)setSaleNumStr:(id)arg0;
- (void)setDataType:(long long)arg0;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)arg0;
- (long long)dataType;
- (BOOL)shouldShow;
- (void)setShouldShow:(BOOL)arg0;
- (id)imageURLStr;
- (void)setImageURLStr:(id)arg0;
- (BOOL)isComment;

@end