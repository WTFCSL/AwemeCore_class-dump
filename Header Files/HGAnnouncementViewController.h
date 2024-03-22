//
//     Generated by private class-dump
//

@class UIViewController, NSArray, NSString, UIView, MASConstraint, HGUniqueID;

@interface HGAnnouncementViewController : HGBaseAlertViewController <HGApplicationLifeCycleMessage, HGAppInterfaceOrientationChangeMessage> {
    HGUniqueID *_uniqueID;
    UIView *_announcementView;
    NSArray *_models;
    UIViewController *_parentVC;
    MASConstraint *_heightConstraint;
}

@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (retain, nonatomic) UIView *announcementView;
@property (retain, nonatomic) NSArray *models;
@property (weak, nonatomic) UIViewController *parentVC;
@property (retain, nonatomic) MASConstraint *heightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateModelWithCacheKey:(id)arg0 modelId:(id)arg1;
+ (void)showNextViewController:(id)arg0 uniqueID:(id)arg1 parentVC:(id)arg2;

- (void)applicationFirstFrameDidShow:(id)arg0 baseVC:(id)arg1;
- (void)applicationSCFirstFrameDidShow:(id)arg0 baseVC:(id)arg1;
- (void)interfaceOrientationChange:(id)arg0 targetOrientation:(long long)arg1 uniqueID:(id)arg2;
- (id)announcementView;
- (void)firstFrameDidShow:(id)arg0;
- (void)jumpToSchema;
- (id)getParentViewController;
- (void)recordAgreeAction;
- (void)jumpPrivacyWebView:(id)arg0;
- (void)setAnnouncementView:(id)arg0;
- (void)setHeightConstraint:(id)arg0;
- (id)heightConstraint;
- (void).cxx_destruct;
- (id)uniqueID;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (id)session;
- (void)setUniqueID:(id)arg0;
- (id)models;
- (void)setModels:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)alertView;
- (id)aid;
- (id)parentVC;
- (void)setParentVC:(id)arg0;
- (void)layoutUI;

@end
