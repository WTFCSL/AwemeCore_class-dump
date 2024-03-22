//
//     Generated by private class-dump
//

@class NSString;

@interface AWENotifyExtraModel : ACCBaseApiModel {
    NSString *_noteText;
    NSString *_buttonText;
    unsigned long long _alertType;
}

@property (copy, nonatomic) NSString *noteText;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) unsigned long long alertType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setAlertType:(unsigned long long)arg0;
- (id)buttonText;
- (unsigned long long)alertType;
- (void)setButtonText:(id)arg0;
- (void)setNoteText:(id)arg0;
- (id)noteText;

@end
