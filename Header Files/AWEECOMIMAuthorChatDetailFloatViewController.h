//
//     Generated by private class-dump
//

@class NSString, AWEECOMIMChatDetailFloatVCHelper;

@interface AWEECOMIMAuthorChatDetailFloatViewController : AWEECOMIMAuthorChatDetailViewController <AWEECOMIMChatDetailFloatVCProtocol> {
    AWEECOMIMChatDetailFloatVCHelper *floatVCHelper;
}

@property (retain, nonatomic) AWEECOMIMChatDetailFloatVCHelper *floatVCHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)setFloatVCHelper:(id)arg0;
- (id)floatVCHelper;
- (id)initWithIsExpand:(BOOL)arg0;
- (void)showOrHideChatTopInfoBannerView;
- (void)setMessageListViewHeight:(double)arg0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
