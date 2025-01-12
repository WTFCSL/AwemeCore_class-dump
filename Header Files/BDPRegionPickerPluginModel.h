//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface BDPRegionPickerPluginModel : BDPBasePluginModel {
    BOOL _divider;
    BOOL _isLynx;
    NSArray *_current;
    NSString *_customItem;
    NSString *_level;
    long long _pickerId;
    NSString *_confirmColor;
    NSString *_cancelColor;
    NSString *_title;
    NSString *_dividerColor;
    double _toolbarBorderRadius;
    NSArray *_regionAreaInfo;
}

@property (copy, nonatomic) NSArray *current;
@property (copy, nonatomic) NSString *customItem;
@property (copy, nonatomic) NSString *level;
@property (nonatomic) long long pickerId;
@property (copy, nonatomic) NSString *confirmColor;
@property (copy, nonatomic) NSString *cancelColor;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL divider;
@property (copy, nonatomic) NSString *dividerColor;
@property (nonatomic) double toolbarBorderRadius;
@property (nonatomic) BOOL isLynx;
@property (copy, nonatomic) NSArray *regionAreaInfo;

+ (id)modelCustomPropertyMapper;

- (BOOL)isLynx;
- (void)setIsLynx:(BOOL)arg0;
- (id)cancelColor;
- (void)setCancelColor:(id)arg0;
- (id)confirmColor;
- (void)setConfirmColor:(id)arg0;
- (id)regionAreaInfo;
- (void)setRegionAreaInfo:(id)arg0;
- (double)toolbarBorderRadius;
- (long long)pickerId;
- (void)setPickerId:(long long)arg0;
- (void)setToolbarBorderRadius:(double)arg0;
- (id)customItem;
- (void)setCustomItem:(id)arg0;
- (void)setLevel:(id)arg0;
- (id)current;
- (id)level;
- (void).cxx_destruct;
- (id)title;
- (void)setCurrent:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)dividerColor;
- (void)setDividerColor:(id)arg0;
- (BOOL)divider;
- (void)setDivider:(BOOL)arg0;

@end
