//
//     Generated by private class-dump
//

@class NSMapTable, NSString, HGAnchorConfig, HGUniqueID;

@interface HGAnchorBusinessManager : NSObject <HGShareBusinessHandler, HGApplicationLifeCycleMessage, HGAnchorBusinessMessage> {
    HGAnchorConfig *_anchorConfig;
    HGUniqueID *_uniqueID;
    NSMapTable *_buttonMaps;
}

@property (weak, nonatomic) HGUniqueID *uniqueID;
@property (retain, nonatomic) NSMapTable *buttonMaps;
@property (retain, nonatomic) HGAnchorConfig *anchorConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedManager;

- (void)viewDidLoad:(id)arg0 uniqueID:(id)arg1;
- (void)viewWillDisappear:(id)arg0 uniqueID:(id)arg1;
- (void)showAnchorShareButtonWithController:(id)arg0 withUniqueID:(id)arg1;
- (void)showAnchorShareButtonWithController:(id)arg0;
- (void)handleShareBussinessForChannel:(id)arg0 withParams:(id)arg1 uniqueID:(id)arg2 callback:(id /* block */)arg3;
- (void)setAnchorConfig:(id)arg0;
- (id)anchorConfig;
- (void)anchorShareButtonDidClick:(id)arg0;
- (id)buttonMaps;
- (void)setButtonMaps:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;

@end
