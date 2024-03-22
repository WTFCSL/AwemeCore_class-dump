//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveLayoutViewProvider;

@interface IESLiveLayoutSceneBigParty : NSObject <IESLiveLayoutScene> {
    BOOL _isAnchor;
    id<IESLiveLayoutViewProvider> provider;
}

@property (nonatomic) BOOL isAnchor;
@property (weak, nonatomic) id<IESLiveLayoutViewProvider> provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsAnchor:(BOOL)arg0;
- (void)layoutPluginIfNeed;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bigPartyGuestListViewFrame;
- (void)layoutAnchorEmojiContainer;
- (void)setProvider:(id)arg0;
- (id)provider;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (unsigned long long)currentScene;

@end
