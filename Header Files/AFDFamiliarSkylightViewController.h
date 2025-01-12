//
//     Generated by private class-dump
//

@class NSObject, NSString, UIView;
@protocol AWEIMOnlineContactAvatarListV2ViewProtocol, AFDFamiliarSkylightDelegate;

@interface AFDFamiliarSkylightViewController : UIViewController <AWEIMOnlineContactAvatarListViewDelegate> {
    NSObject<AFDFamiliarSkylightDelegate> *_delegate;
    UIView<AWEIMOnlineContactAvatarListV2ViewProtocol> *_onlineContactView;
}

@property (retain, nonatomic) UIView<AWEIMOnlineContactAvatarListV2ViewProtocol> *onlineContactView;
@property (weak, nonatomic) NSObject<AFDFamiliarSkylightDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setOnlineContactView:(id)arg0;
- (id)onlineContactView;
- (void)onlineContactAvatarListView:(id)arg0 shouldHidden:(BOOL)arg1;
- (void)onlineContactAvatarListViewDidRefresh:(id)arg0;
- (void)refreshWithIgnoreFrequency:(BOOL)arg0;
- (id)avatarListView;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)delegate;
- (void)resetContentOffset;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)refreshIfNeeded;

@end
