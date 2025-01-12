//
//     Generated by private class-dump
//

@class AWEMentionTabEntranceGuideManager, AWEMentionWorkViewController, NSString, AWEMentionWorkContainerViewController;

@interface AWEMentionTabHomeComponent : AWEUserHomeBaseComponent <AWEMentionTabEntranceGuideManagerProtocol, AWEProfileTabListProviderProtocol> {
    BOOL _isViewOnDisplay;
    AWEMentionWorkViewController *_mentionVC;
    AWEMentionTabEntranceGuideManager *_mentionTabEntranceGuideManager;
    AWEMentionWorkContainerViewController *_mentionContainer;
}

@property (nonatomic) BOOL isViewOnDisplay;
@property (retain, nonatomic) AWEMentionWorkViewController *mentionVC;
@property (retain, nonatomic) AWEMentionTabEntranceGuideManager *mentionTabEntranceGuideManager;
@property (retain, nonatomic) AWEMentionWorkContainerViewController *mentionContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)arg0;
- (void)onResetUI;
- (BOOL)isViewOnDisplay;
- (void)setIsViewOnDisplay:(BOOL)arg0;
- (id)mentionVC;
- (id)mentionContainer;
- (void)setMentionVC:(id)arg0;
- (void)setMentionContainer:(id)arg0;
- (BOOL)canShowPopover;
- (id)tabButtonEntranceGuideOn;
- (void)setMentionTabEntranceGuideManager:(id)arg0;
- (id)mentionTabEntranceGuideManager;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)onInit;
- (void)viewWillDisappear;

@end
