//
//     Generated by private class-dump
//

@class UIFont, NSString, NSDictionary, AWEDoubleColumnSearchMerchandiseModel, UIColor, UIResponder;

@interface AWEEcomSearchShopWindowCellModel : NSObject {
    BOOL _isNoScore;
    UIResponder *_btmResponder;
    unsigned long long _style;
    NSString *_title;
    NSString *_iconUrl;
    NSString *_jumpText;
    NSString *_diamondUrl;
    double _diamondWidth;
    double _diamondHeight;
    NSString *_flagShipLeftImageUrl;
    double _flagShipLeftWidth;
    double _flagShipLeftHeight;
    NSString *_flagShipRightImageUrl;
    double _flagShipRightWidth;
    double _flagShipRightHeight;
    NSString *_shopScore;
    double _padding;
    UIFont *_flagShipScoreFont;
    UIColor *_flagShipScoreColor;
    UIColor *_borderColor;
    UIColor *_bgColor;
    UIColor *_wordColor;
    NSString *_windowScore;
    NSString *_windowLevel;
    NSString *_windowText;
    AWEDoubleColumnSearchMerchandiseModel *_model;
    NSDictionary *_params;
    NSString *_trackId;
    NSString *_jumpSchema;
}

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *trackId;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *jumpText;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *diamondUrl;
@property (nonatomic) double diamondWidth;
@property (nonatomic) double diamondHeight;
@property (copy, nonatomic) NSString *flagShipLeftImageUrl;
@property (nonatomic) double flagShipLeftWidth;
@property (nonatomic) double flagShipLeftHeight;
@property (copy, nonatomic) NSString *flagShipRightImageUrl;
@property (nonatomic) double flagShipRightWidth;
@property (nonatomic) double flagShipRightHeight;
@property (copy, nonatomic) NSString *shopScore;
@property (nonatomic) BOOL isNoScore;
@property (nonatomic) double padding;
@property (retain, nonatomic) UIFont *flagShipScoreFont;
@property (retain, nonatomic) UIColor *flagShipScoreColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIColor *wordColor;
@property (copy, nonatomic) NSString *windowScore;
@property (copy, nonatomic) NSString *windowLevel;
@property (copy, nonatomic) NSString *windowText;
@property (weak, nonatomic) UIResponder *btmResponder;

- (void)cellWillDisplay;
- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (id)jumpText;
- (id)jumpSchema;
- (void)setJumpText:(id)arg0;
- (void)setJumpSchema:(id)arg0;
- (void)setExtraTrackParams:(id)arg0;
- (void)trackCardShow;
- (void)trackCardClick;
- (void)parseModel;
- (id)btmResponder;
- (id)levelWord:(long long)arg0;
- (void)setWindowScore:(id)arg0;
- (id)levelBgColor:(long long)arg0;
- (id)levelBorderColor:(long long)arg0;
- (id)levelWordColor:(long long)arg0;
- (void)setWordColor:(id)arg0;
- (void)setWindowText:(id)arg0;
- (void)setShopScore:(id)arg0;
- (void)setIsNoScore:(BOOL)arg0;
- (void)setFlagShipScoreColor:(id)arg0;
- (void)setFlagShipLeftImageUrl:(id)arg0;
- (void)setFlagShipLeftWidth:(double)arg0;
- (void)setFlagShipLeftHeight:(double)arg0;
- (double)flagShipLeftWidth;
- (double)flagShipLeftHeight;
- (void)setFlagShipRightImageUrl:(id)arg0;
- (void)setFlagShipRightWidth:(double)arg0;
- (void)setFlagShipRightHeight:(double)arg0;
- (double)flagShipRightWidth;
- (double)flagShipRightHeight;
- (void)setFlagShipScoreFont:(id)arg0;
- (BOOL)isNoScore;
- (id)shopScore;
- (id)flagShipScoreFont;
- (void)setDiamondUrl:(id)arg0;
- (void)setDiamondWidth:(double)arg0;
- (void)setDiamondHeight:(double)arg0;
- (double)diamondWidth;
- (double)diamondHeight;
- (id)storeTrackParams;
- (id)searchTrackParams;
- (void)didSelectCell;
- (void)setBtmResponder:(id)arg0;
- (id)diamondUrl;
- (id)flagShipLeftImageUrl;
- (id)flagShipRightImageUrl;
- (id)flagShipScoreColor;
- (id)wordColor;
- (id)windowScore;
- (id)windowText;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setPadding:(double)arg0;
- (unsigned long long)style;
- (id)storeType;
- (void).cxx_destruct;
- (id)borderColor;
- (void)setBorderColor:(id)arg0;
- (id)model;
- (void)setWindowLevel:(id)arg0;
- (id)title;
- (double)padding;
- (id)params;
- (void)setStyle:(unsigned long long)arg0;
- (void)setTitle:(id)arg0;
- (id)windowLevel;
- (void)setParams:(id)arg0;
- (id)bgColor;
- (void)setBgColor:(id)arg0;
- (void)setTrackId:(id)arg0;
- (id)trackId;

@end