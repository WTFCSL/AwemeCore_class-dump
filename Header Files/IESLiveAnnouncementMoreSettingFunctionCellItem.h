//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveAnnouncementMoreSettingFunctionCellItem : NSObject {
    BOOL _switchStatus;
    NSString *_titleText;
    long long _style;
    id /* block */ _onItemTapped;
}

@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) BOOL switchStatus;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ onItemTapped;

- (BOOL)switchStatus;
- (void)setSwitchStatus:(BOOL)arg0;
- (void)setOnItemTapped:(id /* block */)arg0;
- (id /* block */)onItemTapped;
- (long long)style;
- (void)setTitleText:(id)arg0;
- (void).cxx_destruct;
- (id)titleText;
- (void)setStyle:(long long)arg0;

@end