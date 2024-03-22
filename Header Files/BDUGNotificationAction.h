//
//     Generated by private class-dump
//

@class NSString, BDUGNotificationActionIcon;

@interface BDUGNotificationAction : NSObject {
    NSString *_identifier;
    NSString *_title;
    unsigned long long _options;
    BDUGNotificationActionIcon *_icon;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) BDUGNotificationActionIcon *icon;

+ (id)actionWithIdentifier:(id)arg0 title:(id)arg1 options:(unsigned long long)arg2;
+ (id)actionWithIdentifier:(id)arg0 title:(id)arg1 options:(unsigned long long)arg2 icon:(id)arg3;

- (id)icon;
- (void).cxx_destruct;
- (void)setOptions:(unsigned long long)arg0;
- (id)identifier;
- (id)title;
- (void)setIcon:(id)arg0;
- (unsigned long long)options;
- (void)setIdentifier:(id)arg0;
- (void)setTitle:(id)arg0;

@end