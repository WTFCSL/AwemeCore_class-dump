//
//     Generated by private class-dump
//

@class NSString;

@interface IESLivePublicScreenSettingItem : NSObject {
    BOOL _switchState;
    BOOL _showRedDot;
    long long _type;
    long long _group;
    long long _cellStyle;
    NSString *_title;
    NSString *_detailText;
    NSString *_settingText;
    id /* block */ _tapAction;
    id /* block */ _tapHelpAction;
    id /* block */ _switchStateChanged;
    id /* block */ _shouldDisplay;
    id /* block */ _onDisplay;
}

@property (nonatomic) long long type;
@property (nonatomic) long long group;
@property (nonatomic) long long cellStyle;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) NSString *settingText;
@property (nonatomic) BOOL switchState;
@property (nonatomic) BOOL showRedDot;
@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) id /* block */ tapHelpAction;
@property (copy, nonatomic) id /* block */ switchStateChanged;
@property (copy, nonatomic) id /* block */ shouldDisplay;
@property (copy, nonatomic) id /* block */ onDisplay;

- (BOOL)showRedDot;
- (void)setShowRedDot:(BOOL)arg0;
- (id /* block */)onDisplay;
- (void)setOnDisplay:(id /* block */)arg0;
- (id /* block */)switchStateChanged;
- (id /* block */)tapHelpAction;
- (void)setTapHelpAction:(id /* block */)arg0;
- (void)setSwitchStateChanged:(id /* block */)arg0;
- (id)detailText;
- (void).cxx_destruct;
- (void)setDetailText:(id)arg0;
- (long long)type;
- (long long)group;
- (id)title;
- (void)setType:(long long)arg0;
- (long long)cellStyle;
- (void)setGroup:(long long)arg0;
- (void)setTitle:(id)arg0;
- (void)setCellStyle:(long long)arg0;
- (BOOL)switchState;
- (void)setSwitchState:(BOOL)arg0;
- (id /* block */)tapAction;
- (void)setTapAction:(id /* block */)arg0;
- (id /* block */)shouldDisplay;
- (void)setShouldDisplay:(id /* block */)arg0;
- (id)settingText;
- (void)setSettingText:(id)arg0;

@end
