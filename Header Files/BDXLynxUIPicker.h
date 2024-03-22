//
//     Generated by private class-dump
//

@class UIColor, NSString, NSArray, BDXPickerSource;

@interface BDXLynxUIPicker : LynxUI <BDXPickerSheetViewDelegate> {
    NSString *_mode;
    NSArray *_range;
    id _rangeKey;
    id _value;
    NSString *_start;
    NSString *_end;
    NSString *_fields;
    NSString *_separator;
    UIColor *_cancelColor;
    UIColor *_confirmColor;
    NSString *_title;
    UIColor *_titleColor;
    double _titleFontSize;
    NSString *_cancelString;
    NSString *_confirmString;
    BDXPickerSource *_source;
}

@property (retain) NSString *mode;
@property (retain) NSArray *range;
@property (retain) id rangeKey;
@property (retain) id value;
@property (retain) NSString *start;
@property (retain) NSString *end;
@property (retain) NSString *fields;
@property (retain) NSString *separator;
@property (retain) UIColor *cancelColor;
@property (retain) UIColor *confirmColor;
@property (retain) NSString *title;
@property (retain) UIColor *titleColor;
@property double titleFontSize;
@property (retain) NSString *cancelString;
@property (retain) NSString *confirmString;
@property (retain) BDXPickerSource *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__13810;
+ (id)__lynx_prop_config__661;
+ (id)__lynx_prop_config__945;
+ (id)__lynx_prop_config__742;
+ (id)__lynx_prop_config__783;
+ (id)__lynx_prop_config__864;
+ (id)__lynx_prop_config__1066;
+ (id)__lynx_prop_config__1147;
+ (id)__lynx_prop_config__1228;
+ (id)__lynx_prop_config__1309;
+ (id)__lynx_prop_config__14611;
+ (id)__lynx_prop_config__15412;
+ (id)__lynx_prop_config__16213;
+ (id)__lynx_prop_config__17014;
+ (id)__lynx_prop_config__17815;
+ (id)__lynx_prop_config__18616;

- (id)cancelColor;
- (void)setCancelColor:(id)arg0;
- (id)confirmColor;
- (void)setConfirmColor:(id)arg0;
- (void)setCancelString:(id)arg0;
- (void)title:(id)arg0 requestReset:(BOOL)arg1;
- (id)confirmString;
- (void)setConfirmString:(id)arg0;
- (id)rangeKey;
- (void)setRangeKey:(id)arg0;
- (void)onPickerSheetChanged:(id)arg0 withResult:(id)arg1;
- (void)onPickerSheetCancel:(id)arg0 withResult:(id)arg1;
- (void)onPickerSheetConfirm:(id)arg0 withResult:(id)arg1;
- (void)mode:(id)arg0 requestReset:(BOOL)arg1;
- (void)disabled:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)range:(id)arg0 requestReset:(BOOL)arg1;
- (void)rangeKey:(id)arg0 requestReset:(BOOL)arg1;
- (void)value:(id)arg0 requestReset:(BOOL)arg1;
- (void)start:(id)arg0 requestReset:(BOOL)arg1;
- (void)end:(id)arg0 requestReset:(BOOL)arg1;
- (void)fields:(id)arg0 requestReset:(BOOL)arg1;
- (void)separator:(id)arg0 requestReset:(BOOL)arg1;
- (void)cancelString:(id)arg0 requestReset:(BOOL)arg1;
- (void)confirmString:(id)arg0 requestReset:(BOOL)arg1;
- (void)cancelColor:(id)arg0 requestReset:(BOOL)arg1;
- (void)confirmColor:(id)arg0 requestReset:(BOOL)arg1;
- (void)titleColor:(id)arg0 requestReset:(BOOL)arg1;
- (void)titleFontSize:(id)arg0 requestReset:(BOOL)arg1;
- (void)setEnd:(id)arg0;
- (id)end;
- (id)init;
- (void)setStart:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (id)separator;
- (id)value;
- (void)setSeparator:(id)arg0;
- (void)setFields:(id)arg0;
- (id)fields;
- (id)mode;
- (void)setRange:(id)arg0;
- (id)range;
- (void)show;
- (id)titleColor;
- (void)setMode:(id)arg0;
- (id)title;
- (void)setTitleColor:(id)arg0;
- (void)setSource:(id)arg0;
- (id)start;
- (void)setValue:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)createView;
- (double)titleFontSize;
- (void)setTitleFontSize:(double)arg0;
- (id)cancelString;

@end
