//
//     Generated by private class-dump
//

@class NSArray, HTSLiveScreenChatSetting, HTSEventContext, NSString, IESLivePrivilegeScreenChatApi;

@interface IESLiveAnchorPrivilegeDanmakuSettingStore : NSObject {
    NSArray *_headerTitles;
    NSArray *_settingItems;
    HTSEventContext *_trackContext;
    NSString *_enterFrom;
    HTSLiveScreenChatSetting *_privilegeDanmakuSetting;
    IESLivePrivilegeScreenChatApi *_api;
}

@property (retain, nonatomic) HTSLiveScreenChatSetting *privilegeDanmakuSetting;
@property (retain, nonatomic) IESLivePrivilegeScreenChatApi *api;
@property (copy, nonatomic) NSArray *headerTitles;
@property (copy, nonatomic) NSArray *settingItems;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) NSString *enterFrom;

- (void)setEnterFrom:(id)arg0;
- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)enterFrom;
- (void)setupItems;
- (void)setHeaderTitles:(id)arg0;
- (id)headerTitles;
- (id)initWithPrivilegeDanmakuSetting:(id)arg0 privilegeDanmakuSettingApi:(id)arg1;
- (void)buildSettingAndAPI;
- (id)followRequirements;
- (id)privilegeDanmakuSetting;
- (id)selectionItemWithTitle:(id)arg0 selected:(BOOL)arg1;
- (id)activeRequirements;
- (id)fansclubRequirements;
- (void)setPrivilegeDanmakuSetting:(id)arg0;
- (id)lastSelectionItemInSection:(long long)arg0;
- (long long)valueFromMetaValue:(id)arg0;
- (void)updateSettingValue:(long long)arg0 inSection:(long long)arg1;
- (void)updateSelectionAtIndexPath:(id)arg0 completion:(id /* block */)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)api;
- (id)settingItems;
- (void)setSettingItems:(id)arg0;
- (void)setApi:(id)arg0;

@end
