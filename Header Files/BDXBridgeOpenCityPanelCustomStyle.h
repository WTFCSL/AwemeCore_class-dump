//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSArray;

@interface BDXBridgeOpenCityPanelCustomStyle : BDXBridgeModel {
    BOOL _hide_history;
    BOOL _hide_hot_city;
    BOOL _only_show_l2;
    NSString *_custom_hint;
    NSNumber *_channel_type;
    NSArray *_quick_access_list;
}

@property (nonatomic) BOOL hide_history;
@property (nonatomic) BOOL hide_hot_city;
@property (copy, nonatomic) NSString *custom_hint;
@property (nonatomic) BOOL only_show_l2;
@property (retain, nonatomic) NSNumber *channel_type;
@property (retain, nonatomic) NSArray *quick_access_list;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hide_history;
- (void)setHide_history:(BOOL)arg0;
- (BOOL)hide_hot_city;
- (void)setHide_hot_city:(BOOL)arg0;
- (id)custom_hint;
- (void)setCustom_hint:(id)arg0;
- (BOOL)only_show_l2;
- (void)setOnly_show_l2:(BOOL)arg0;
- (id)quick_access_list;
- (void)setQuick_access_list:(id)arg0;
- (void).cxx_destruct;
- (id)channel_type;
- (void)setChannel_type:(id)arg0;

@end