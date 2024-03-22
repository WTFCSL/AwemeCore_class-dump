//
//     Generated by private class-dump
//

@class AWEUndertakeActionBackupToast, NSString, AWEUndertakeActionLynxPopup, AWEUndertakeActionFeedBottomBanner;

@interface AWEUndertakeDataModel : MTLModel <MTLJSONSerializing> {
    AWEUndertakeActionLynxPopup *_lynxPopupAction;
    AWEUndertakeActionFeedBottomBanner *_feedBottomBannerAction;
    AWEUndertakeActionBackupToast *_backupToastAction;
}

@property (retain, nonatomic) AWEUndertakeActionLynxPopup *lynxPopupAction;
@property (retain, nonatomic) AWEUndertakeActionFeedBottomBanner *feedBottomBannerAction;
@property (retain, nonatomic) AWEUndertakeActionBackupToast *backupToastAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (id)lynxPopupAction;
- (id)feedBottomBannerAction;
- (id)backupToastAction;
- (void)setLynxPopupAction:(id)arg0;
- (void)setFeedBottomBannerAction:(id)arg0;
- (void)setBackupToastAction:(id)arg0;
- (void).cxx_destruct;

@end