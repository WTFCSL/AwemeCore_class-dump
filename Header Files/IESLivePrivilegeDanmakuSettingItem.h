//
//     Generated by private class-dump
//

@class NSString, HTSLiveTabItem;

@interface IESLivePrivilegeDanmakuSettingItem : NSObject <IESLivePrivilegeDanmakuSettingItemProtocol> {
    BOOL _enable;
    HTSLiveTabItem *_selectedTabItem;
    double _settingViewHeight;
    id /* block */ _cancelSelectAction;
}

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) HTSLiveTabItem *selectedTabItem;
@property (nonatomic) double settingViewHeight;
@property (copy, nonatomic) id /* block */ cancelSelectAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCancelSelectAction:(id /* block */)arg0;
- (void)setSettingViewHeight:(double)arg0;
- (void)setSelectedTabItem:(id)arg0;
- (id)selectedTabItem;
- (double)settingViewHeight;
- (id /* block */)cancelSelectAction;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:(BOOL)arg0;
- (void)reset;

@end