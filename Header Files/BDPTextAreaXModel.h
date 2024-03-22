//
//     Generated by private class-dump
//

@class NSString, BDPTextAreaXStyleModel, BDPTextAreaXPlaceHolderStyleModel;

@interface BDPTextAreaXModel : NSObject {
    BOOL _disabled;
    BOOL _hidden;
    BOOL _holdKeyboard;
    BOOL _confirmHold;
    BOOL _adjustPosition;
    BOOL _showConfirmBar;
    BOOL _disableDefaultPadding;
    BOOL _focus;
    NSString *_data;
    NSString *_confirmType;
    NSString *_placeholder;
    BDPTextAreaXStyleModel *_style;
    BDPTextAreaXPlaceHolderStyleModel *_placeholderStyle;
    NSString *_value;
    long long _maxLength;
    long long _cursor;
    long long _selectionStart;
    long long _selectionEnd;
}

@property (copy, nonatomic) NSString *data;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL holdKeyboard;
@property (nonatomic) BOOL confirmHold;
@property (copy, nonatomic) NSString *confirmType;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) BDPTextAreaXStyleModel *style;
@property (retain, nonatomic) BDPTextAreaXPlaceHolderStyleModel *placeholderStyle;
@property (nonatomic) BOOL adjustPosition;
@property (nonatomic) BOOL showConfirmBar;
@property (nonatomic) BOOL disableDefaultPadding;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) long long maxLength;
@property (nonatomic) BOOL focus;
@property (nonatomic) long long cursor;
@property (nonatomic) long long selectionStart;
@property (nonatomic) long long selectionEnd;

+ (id)modelCustomPropertyMapper;

- (id)confirmType;
- (void)setConfirmType:(id)arg0;
- (BOOL)holdKeyboard;
- (BOOL)adjustPosition;
- (BOOL)confirmHold;
- (void)setConfirmHold:(BOOL)arg0;
- (void)setHoldKeyboard:(BOOL)arg0;
- (void)setAdjustPosition:(BOOL)arg0;
- (BOOL)showConfirmBar;
- (BOOL)disableDefaultPadding;
- (void)setShowConfirmBar:(BOOL)arg0;
- (void)setDisableDefaultPadding:(BOOL)arg0;
- (BOOL)disabled;
- (long long)cursor;
- (void)setDisabled:(BOOL)arg0;
- (id)style;
- (id)data;
- (void).cxx_destruct;
- (id)value;
- (void)setData:(id)arg0;
- (void)setMaxLength:(long long)arg0;
- (void)setPlaceholder:(id)arg0;
- (BOOL)focus;
- (id)placeholder;
- (void)setHidden:(BOOL)arg0;
- (void)setFocus:(BOOL)arg0;
- (BOOL)hidden;
- (void)setValue:(id)arg0;
- (long long)maxLength;
- (void)setStyle:(id)arg0;
- (void)setCursor:(long long)arg0;
- (long long)selectionStart;
- (void)setSelectionStart:(long long)arg0;
- (long long)selectionEnd;
- (void)setSelectionEnd:(long long)arg0;
- (id)placeholderStyle;
- (void)setPlaceholderStyle:(id)arg0;

@end
