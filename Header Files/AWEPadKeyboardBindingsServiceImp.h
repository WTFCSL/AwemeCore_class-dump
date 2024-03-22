//
//     Generated by private class-dump
//

@class AWEPadKeyboardBindingsTipsView, NSArray, NSMutableDictionary, NSMutableSet, NSDictionary, AWEPadKeyboardKeyPressInfo, NSString;

@interface AWEPadKeyboardBindingsServiceImp : NSObject <AWEAlertProtocol, AWEPadKeyboardBindingsService> {
    BOOL _hasKeyboardConnect;
    BOOL _tipsDidShowed;
    NSArray *_keyCommands;
    AWEPadKeyboardKeyPressInfo *_lastPressInfo;
    AWEPadKeyboardBindingsTipsView *_tipsView;
    NSMutableDictionary *_innerKeyOperationMap;
    NSMutableSet *_responseFilters;
    id /* block */ _onClose;
    id /* block */ _userGuidViewDidShowBlk;
    id /* block */ _userGuidViewNeedShowBlk;
}

@property (nonatomic) BOOL hasKeyboardConnect;
@property (retain, nonatomic) NSMutableDictionary *innerKeyOperationMap;
@property (retain, nonatomic) NSArray *keyCommands;
@property (retain, nonatomic) NSMutableSet *responseFilters;
@property (nonatomic) BOOL tipsDidShowed;
@property (copy, nonatomic) id /* block */ onClose;
@property (copy, nonatomic) id /* block */ userGuidViewDidShowBlk;
@property (copy, nonatomic) id /* block */ userGuidViewNeedShowBlk;
@property (readonly, nonatomic) NSDictionary *keyOperationMap;
@property (retain, nonatomic) AWEPadKeyboardKeyPressInfo *lastPressInfo;
@property (weak, nonatomic) AWEPadKeyboardBindingsTipsView *tipsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showWithCloseCallback:(id /* block */)arg0;
- (id)tipsView;
- (void)setTipsView:(id)arg0;
- (id)responseFilters;
- (void)performKeyboardBindingsExecute:(id /* block */)arg0;
- (void)showUserGuidViewIfNeed:(id /* block */)arg0 didShow:(id /* block */)arg1;
- (void)regesterKey:(id)arg0 discoverabilityTitle:(id)arg1 target:(id)arg2 click:(id /* block */)arg3 doubleClick:(id /* block */)arg4 longPressBegin:(id /* block */)arg5 longPressEnd:(id /* block */)arg6;
- (void)regesterResponseFilter:(id)arg0 filter:(id /* block */)arg1;
- (void)addKeyboardConnectNotifications;
- (id)keyOperationMap;
- (id)innerKeyOperationMap;
- (void)setUserGuidViewNeedShowBlk:(id /* block */)arg0;
- (void)setUserGuidViewDidShowBlk:(id /* block */)arg0;
- (void)showTipsIfNeed;
- (void)onKeyboardDidConnectNotification:(id)arg0;
- (void)onKeyboardDidDisconnectNotification:(id)arg0;
- (void)setHasKeyboardConnect:(BOOL)arg0;
- (BOOL)hasKeyboardConnect;
- (id /* block */)userGuidViewNeedShowBlk;
- (id /* block */)userGuidViewDidShowBlk;
- (id)createProgressControl;
- (BOOL)canResponseForKey:(id)arg0;
- (id)lastPressInfo;
- (void)setLastPressInfo:(id)arg0;
- (void)setInnerKeyOperationMap:(id)arg0;
- (void)setResponseFilters:(id)arg0;
- (BOOL)tipsDidShowed;
- (void)setTipsDidShowed:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)keyCommands;
- (void)dealloc;
- (void)setKeyCommands:(id)arg0;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg0;

@end
