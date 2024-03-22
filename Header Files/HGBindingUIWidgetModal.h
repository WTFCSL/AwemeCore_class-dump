//
//     Generated by private class-dump
//

@class NSString;

@interface HGBindingUIWidgetModal : NSObject {
    BOOL _showCancel;
    NSString *_title;
    NSString *_content;
    NSString *_cancelText;
    NSString *_cancelColor;
    NSString *_confirmText;
    NSString *_confirmColor;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *cancelText;
@property (copy, nonatomic) NSString *cancelColor;
@property (copy, nonatomic) NSString *confirmText;
@property (copy, nonatomic) NSString *confirmColor;
@property (nonatomic) BOOL showCancel;

- (void)setCancelText:(id)arg0;
- (id)cancelText;
- (id)cancelColor;
- (void)setCancelColor:(id)arg0;
- (id)confirmColor;
- (void)setConfirmColor:(id)arg0;
- (BOOL)showCancel;
- (void)setShowCancel:(BOOL)arg0;
- (void).cxx_destruct;
- (id)content;
- (id)title;
- (void)setContent:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)confirmText;
- (void)setConfirmText:(id)arg0;

@end
