//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveAudienceInteractiveSettingKTVStageModeConfiguration : NSObject {
    BOOL _selected;
    NSString *_title;
    NSString *_iconPath;
    id /* block */ _didClick;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconPath;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) id /* block */ didClick;

- (id /* block */)didClick;
- (void)setDidClick:(id /* block */)arg0;
- (id)iconPath;
- (BOOL)selected;
- (void)setIconPath:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setSelected:(BOOL)arg0;
- (void)setTitle:(id)arg0;

@end
